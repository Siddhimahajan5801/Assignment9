#include <stdio.h>
int main(){ 

int day;

printf("Enter the day number of a week\n");
scanf("%d",&day);

switch (day){
    case 1:
    printf("Hello! Have a great Monday.\n");
    break;

    case 2:
    printf("Happy Tuesday!!\n");
    break;

    case 3:
    printf("Have a wonderful Wednesday.\n");
    break;

    case 4:
    printf("Happy Thursday.\n");
    break;

    case 5:
    printf("Have a good Friday.\n");
    break;

    case 6:
    printf("Its super Saturday.\n");
    break;

    case 7:
    printf("Happy Sunday!!\n");
    break;

    default:
    printf("Enter a valid day number\n");
    break;
    
}

return 0; 
}