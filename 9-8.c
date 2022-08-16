#include <stdio.h>
int main(){ 
int num,choice;

printf("1. negative to positive\n2. positive to negative\n");

printf("Enter your choice\n");
scanf("%d",&choice);

switch(choice){
    
    case 1:
    printf("Enter the number:\n");
    scanf("%d",&num);
    num=num*(-1);
    printf("Converted number is : %d",num);
    break;

    case 2:
    printf("Enter the number:\n");
    scanf("%d",&num);
    num=num*(-1);
    printf("Converted number is : %d",num);
    break;

    default :
    printf("invalid");
    break;
}
return 0; 
}