#include <stdio.h>

typedef struct {
    int number;
    char string[4];
} Table;

void stringToNumber(char *string);
void numberToString(int number);

int main()
{
    int choice;
    FILE *file = fopen("datoteka.dat", "w");

    if(!file) {
        printf("Error opening the file.");
    }

    Table array[9] = {
        {2, "ABC"},
        {3, "DEF"},
        {4, "GHI"},
        {5, "JKL"},
        {6, "MNO"},
        {7, "PQR"},
        {8, "STU"},
        {9, "VWX"},
        {0, "YZ"},
        };

    for(int i=0; i<9; i++) {
        fwrite(&array[i], sizeof(Table), 1, file);
    }

    fclose(file);

    printf("For converting from string to number enter 0, for number to string 1:\n");
    scanf("%d", &choice);
    if(choice == 0) {
        printf("Enter string: \n");
        char *string;
        scanf("%s", &string);
        stringToNumber(string);
    }
    else if(choice == 1) {
        printf("Enter number: \n");
        int number;
        scanf("%d", &number);
        numberToString(number);
    }
    return 0;
}

void stringToNumber(char *string) {
    FILE *file = fopen("datoteka.dat", "r");

    if(!file) {
        printf("Error opening the file.\n");
        return;
    }

    printf("%s", string[0]);
}

void numberToString(int number) {
    printf(" ");
}
