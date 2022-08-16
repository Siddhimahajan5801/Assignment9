#include <stdio.h>
int main(){ 
  int x,a,b,c;

  printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
  printf("2. Check whether a given set of three numbers are lengths of a right angled triangle or not\n");
  printf("3. Check whether a given set of three numbers are lengths of an equilateral triangle or not\n");
  printf("4. Exit\n");

  printf("Enter the variable:\n");
  scanf("%d",&x);

    switch (x){
        case 1:
        printf("Enter the length of the sides of triangle:\n");
        scanf("%d %d %d",&a,&b,&c);
        if (a==b || b==c || a==c)
        printf("It is an isosceles triangle\n");
        break;

        case 2:
        printf("Enter the length of the sides of triangle:\n");
        scanf("%d %d %d",&a,&b,&c);
        if ((a*a+b*b==c*c) || (a*a+c*c==b*b) || (b*b+c*c==a*a))
        printf("It is an right angled triangle\n");
        break;


        case 3:
        printf("Enter the length of the sides of triangle:\n");
        scanf("%d %d %d",&a,&b,&c);
        if (a==b && a==c)
        printf("It is an equilateral triangle\n");
        break;

        case 4:
        printf("Exit");
        break;

        default:
        printf("invalid");
        break;
    }

return 0; 
}