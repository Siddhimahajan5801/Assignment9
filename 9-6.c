#include<stdio.h>

int main(){

    int x,y;
    printf("Enter a year\n");
    scanf("%d",&y);

    x=((y%4==0 && y%100!=0) || (y%400==0))?1:0;

    switch (x){
        case 1:
           printf("The given year is a leap year\n");
           break;

        case 0:
            printf("The given year is not a leap year\n");
            break;

    }

    return 0;
}