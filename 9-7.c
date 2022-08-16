#include <stdio.h>
int main(){ 

   int unit;
   float amount=0,sur_charge;

   printf("Enter the value of total units:\n");
   scanf("%d",&unit);

   switch (unit){
    case 1 ... 50:
    amount=0.50*unit;
    break;

    case 51 ... 150:
    amount=25+(unit-50)*0.75;
    break;

    case 151 ... 250:
    amount=25+75+(unit-150)*1.20;
    break;

    default:
    amount=25+75+120+(unit-250)*1.50;
    break;
   }

   sur_charge=amount*0.20;
   printf("The total amount of electricity bill is %.2f rs.",amount+sur_charge);

return 0; 
}