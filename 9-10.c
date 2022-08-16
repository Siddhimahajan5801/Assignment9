#include <stdio.h>
#include<math.h>
int main(){ 

  float a,b,c,r1,r2,imag;
  float d;

    printf("Enter the coefficients of quadratic eqation\n");  //quadratic equation -->a*x^2+b*x+c
    scanf("%f %f %f",&a,&b,&c); 

    d=(b*b)-(4*a*c);  //d=discriminant

    switch (d>0){
        case 1:
        r1=((-b+sqrt(d))/(2*a));
        r2=((-b-sqrt(d))/(2*a));
        printf("The two distinct and real roots are %.2f and %.2f\n ",r1,r2);
        break;

        case 0:
        switch (d<0){
            case 1:
            r1=r2= -b/(2*a);
            imag=sqrt(-d)/(2*a);
            printf("Two distinct complex roots are %.2f+%.2fi and  %.2f-%.2fi\n",r1,imag,r2,imag);
            break;

            case 0:
            r1=r2= -b/(2*a);
            printf("Two equal and real roots are %.2f and %.2f\n",r1,r2);
            break;

        }
    }

return 0; 
}