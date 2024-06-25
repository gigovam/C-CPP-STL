#include <stdio.h>

int vreme(int h, int min, int sec);

int main()
{
    int hours, minutes, seconds;
    printf("Vnesi cas, minuti i sekundi: \n");
    scanf("%d %d %d", &hours, &minutes, &seconds);
    printf("Vremeto vo sekundi, do 12 chasot e: %d sekundi.", vreme(hours, minutes, seconds));
    return 0;
}


int vreme(int h, int min, int sec) {
    int result;
    if(h < 12) {
        result = (12-(h+1))*60*60 + (60-(min+1))*60 + (60-sec);
        return result;
    }
    else {
        result = (24-(h+1))*60*60 + (60-(min+1))*60 + (60-sec);
        return result;
    }
}
