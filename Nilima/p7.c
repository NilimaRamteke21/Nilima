#include<stdio.h>
#include<time.h>
int main() {
clock_t start, end;
double execution_time;
start = clock();


    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu", n, fact);
    }

  



end = clock();
execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
printf("Execution time =%f",execution_time);
}
