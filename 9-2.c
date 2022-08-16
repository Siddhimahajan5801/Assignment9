#include <stdio.h>
int main(){ 
    int x,a,b;
    printf("1. Addition\n2. Substraction\n3. Multiplication\n4. Division\n5. exit\n");

    printf("Enter your choice\n");
    scanf("%d",&x);

    switch (x) {
        case 1:
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        printf("Addition is %d",a+b);
        break;

        case 2:
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        printf("Substraction is %d",a-b);
        break;

        case 3:
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        printf("Multiplication is %d",a*b);
        break;

        case 4:
        printf("Enter two numbers: ");
        scanf("%d %d",&a,&b);
        printf("Division is %d",a/b);
        break;

        case 5:
        printf("Exit the program");
        break;

    }

return 0; 
}