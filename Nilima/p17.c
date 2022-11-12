#include<stdio.h>
#include<time.h>
#include<math.h>
int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main() {
clock_t start, end;
double execution_time;
start = clock();

int n, flag;
   printf("Enter a positive integer: ");
   scanf("%d", &n);

   // check prime number
   flag = checkPrimeNumber(n);
   if (flag == 1)
      printf("%d is a prime number.\n", n);
   else
      printf("%d is not a prime number.\n", n);

   // check Armstrong number
   flag = checkArmstrongNumber(n);
   if (flag == 1)
      printf("%d is an Armstrong number.", n);
   else
      printf("%d is not an Armstrong number.", n);
   
   
   end = clock();
execution_time = ((double)(end - start))/CLOCKS_PER_SEC;

printf("Execution time %f",execution_time);

}

// function to check prime number
int checkPrimeNumber(int n) {
   int i, flag = 1, squareRoot;

   // computing the square root
   squareRoot = sqrt(n);
   for (i = 2; i <= squareRoot; ++i) {
      // condition for non-prime number
      if (n % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}

// function to check Armstrong number
int checkArmstrongNumber(int num) {
   int originalNum, remainder, n = 0, flag;
   double result = 0.0;

   // store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n) {
      originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
      remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // condition for Armstrong number
   if (round(result) == num)
      flag = 1;
   else
      flag = 0;
   return flag;




   
}





   

