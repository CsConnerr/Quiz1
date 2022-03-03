#include<stdio.h>
#include<stdlib.h>

int main(){

   int meal = rand()%4 + 1;
   double pTax, pTip;
   double cost, tax, tip, total;
   printf("Please Enter Tax: ");
   scanf("%lf",&pTax);
   printf("Please Enter Tip: ");
   scanf("%lf",&pTip);
     if(meal==1){
       printf("Salad Cost: $9.95\n");
       cost = 9.95;
   }
   else if(meal==2){
       printf("Soup Cost: $4.55\n");
       cost = 4.55;
   }
   else if(meal==3){
       printf("Sandwich Cost: $13.25\n");
       cost = 13.25;
   }
   else{
       printf("Pizza Cost: $22.35\n");
       cost = 22.35;
   }
   tax = cost*pTax/100;
   tip = cost*pTip/100;
   total =cost + tax + tip;
   printf("Total Tax: $%lf",tax);
   printf("Tip Amount: $%lf",tip);
   printf("Total Cost: $%lf",total);

   return 0;
}