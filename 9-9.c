#include <stdio.h>
int main(){ 
int num,x;

printf("Enter the number\n");
scanf("%d",&num);

x=(num%2==0)?1:2;

switch (x){
    case 1:
    printf("Nearest upper odd number is : %d \n",num+1);
    break;

    case 2:
    printf("It is an odd number already, Enter an even number\n");
    break;
}

return 0; 
}