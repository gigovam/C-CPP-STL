#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "hardware.dat"

typedef struct {
    int code;
    char name[50];
    int quantity;
    float price;
} Hardware;

void initializeFile();
void addPart();
void listPart();
void listAllParts();
void deletePart();
void updatePart();
void makeSale();

int main() {
    int choice;

    // Initialize the file with starting data
    initializeFile();

    while (1) {
        printf("\nHardware Store Management System\n");
        printf("1. Add part\n");
        printf("2. List specific part\n");
        printf("3. List all parts\n");
        printf("4. Delete part\n");
        printf("5. Update part\n");
        printf("6. Make sale\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addPart();
            break;
        case 2:
            listPart();
            break;
        case 3:
            listAllParts();
            break;
        case 4:
            deletePart();
            break;
        case 5:
            updatePart();
            break;
        case 6:
            makeSale();
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void initializeFile() {
    FILE *file = fopen(FILENAME, "w");
    if (!file) {
        perror("Error opening file");
        exit(1);
    }

    Hardware parts[] = {
        {3, "glusec Mico", 7, 10.34},
        {56, "monitor Kiki3", 5, 65.09},
        {75, "tastatura Biko8", 4, 12.09},
        {89, "matploc Ziko32", 6, 87.09}
    };

    for (int i = 0; i < 4; i++) {
        fwrite(&parts[i], sizeof(Hardware), 1, file);
    }

    fclose(file);
}

void addPart() {
    FILE *file = fopen(FILENAME, "a");
    if (!file) {
        perror("Error opening file");
        return;
    }

    Hardware part;
    printf("Enter code: ");
    scanf("%d", &part.code);
    printf("Enter name: ");
    scanf("%s", part.name);
    printf("Enter quantity: ");
    scanf("%d", &part.quantity);
    printf("Enter price: ");
    scanf("%f", &part.price);

    fwrite(&part, sizeof(Hardware), 1, file);

    fclose(file);
    printf("Part added successfully.\n");
}

void listPart() {
    FILE *file = fopen(FILENAME, "r");
    if (!file) {
        perror("Error opening file");
        return;
    }

    int code;
    printf("Enter code of the part: ");
    scanf("%d", &code);

    Hardware part;
    int found = 0;
    while (fread(&part, sizeof(Hardware), 1, file)) {
        if (part.code == code) {
            printf("Code: %d\nName: %s\nQuantity: %d\nPrice: %.2f\n", part.code, part.name, part.quantity, part.price);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Part not found.\n");
    }

    fclose(file);
}

void listAllParts() {
    FILE *file = fopen(FILENAME, "r");
    if (!file) {
        perror("Error opening file");
        return;
    }

    Hardware part;
    printf("\nComplete Listing of Parts:\n");
    printf("Code\tName\t\t\tQuantity\tPrice\n");
    while (fread(&part, sizeof(Hardware), 1, file)) {
        printf("%d\t%-20s\t%d\t\t%.2f\n", part.code, part.name, part.quantity, part.price);
    }

    fclose(file);
}

void deletePart() {
    FILE *file = fopen(FILENAME, "r");
    FILE *temp = fopen("temp.dat", "w");
    if (!file || !temp) {
        perror("Error opening file");
        return;
    }

    int code;
    printf("Enter code of the part to delete: ");
    scanf("%d", &code);

    Hardware part;
    int found = 0;
    while (fread(&part, sizeof(Hardware), 1, file)) {
        if (part.code == code) {
            found = 1;
        } else {
            fwrite(&part, sizeof(Hardware), 1, temp);
        }
    }

    fclose(file);
    fclose(temp);

    if (found) {
        remove(FILENAME);
        rename("temp.dat", FILENAME);
        printf("Part deleted successfully.\n");
    } else {
        remove("temp.dat");
        printf("Part not found.\n");
    }
}

void updatePart() {
    FILE *file = fopen(FILENAME, "r+");
    if (!file) {
        perror("Error opening file");
        return;
    }

    int code;
    printf("Enter code of the part to update: ");
    scanf("%d", &code);

    Hardware part;
    int found = 0;
    long pos;
    while ((pos = ftell(file)) && fread(&part, sizeof(Hardware), 1, file)) {
        if (part.code == code) {
            printf("Enter new name: ");
            scanf("%s", part.name);
            printf("Enter new quantity: ");
            scanf("%d", &part.quantity);
            printf("Enter new price: ");
            scanf("%f", &part.price);
            fseek(file, pos, SEEK_SET);
            fwrite(&part, sizeof(Hardware), 1, file);
            found = 1;
            printf("Part updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Part not found.\n");
    }

    fclose(file);
}

void makeSale() {
    FILE *file = fopen(FILENAME, "r+");
    if (!file) {
        perror("Error opening file");
        return;
    }

    int code, quantity;
    printf("Enter code of the part to sell: ");
    scanf("%d", &code);
    printf("Enter quantity to sell: ");
    scanf("%d", &quantity);

    Hardware part;
    int found = 0;
    long pos;
    while ((pos = ftell(file)) && fread(&part, sizeof(Hardware), 1, file)) {
        if (part.code == code) {
            if (part.quantity >= quantity) {
                part.quantity -= quantity;
                fseek(file, pos, SEEK_SET);
                fwrite(&part, sizeof(Hardware), 1, file);
                printf("Sale made successfully.\n");
            } else {
                printf("Not enough stock available.\n");
            }
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Part not found.\n");
    }

    fclose(file);
}
