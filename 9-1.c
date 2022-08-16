#include<stdio.h>

int main(){
    //program to display number of days in that month

    int m;
    printf("Enter the month\n");
    scanf("%d",&m);

     if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
       m=1;

    if (m==4 || m==6 || m==9 || m==11)
     m=3;

    switch (m){

    case 1:
    printf("This month has 31 days\n");
    break;

    case 2:
    printf("This month has 28/29days\n");
    break;

    case 3:
    printf("This month has 30 days\n");
    break;

    default :
    printf("Enter a valid month\n");
    break;

    }

    return 0;
}