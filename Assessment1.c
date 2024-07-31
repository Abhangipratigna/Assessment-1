#include <stdio.h>

int main()
{
   float num1, num2, res;
   int choice;

   while (choice){
      printf("\n-----------Menu--------------\n");
      printf("1. Addition\n");
      printf("2. Subtraction\n");
      printf("3. Multiplication\n");
      printf("4. Division\n");


      printf("Enter Your Choice:");
      scanf("%d", &choice);

      printf("Enter first numbr: ");
      scanf("%f", &num1);


      printf("Enter second numbr: ");
      scanf("%f", &num2);

       switch(choice)
      {
         case 1:
            res = num1+num2;
            printf("\nAddition = %0.2f", res);
            break;
         case 2:
            res = num1-num2;
            printf("\nSubtraction = %0.2f", res);
            break;
         case 3:
            res = num1*num2;
            printf("\nMultipliction = %0.2f", res);
            break;
         case 4:
            res = num1/num2;
            printf("\nDivision = %0.2f", res);
            break;

         default:
            printf("\NInvalid choice !!!! ");

      }
            printf("-------------------------\n");

   }


}


