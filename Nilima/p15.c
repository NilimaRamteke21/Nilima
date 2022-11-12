
#include <stdio.h>
#include <math.h>
#include<time.h>
int convert(long long);
int main()
{
clock_t start, end;
double execution_time;
start = clock();
// convert binary to decimal



// function prototype



  long long n;
  printf("Enter a binary number: ");
  scanf("%lld", &n);
  printf("%lld in binary = %d in decimal", n, convert(n));
  execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
printf("Execution time %f",execution_time);


   

}

// function definition
int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
} 


