#include <stdio.h>
#include<time.h>
int main()
{
clock_t start, end;
double execution_time;
start = clock();


    int n, i;
    float num[100], sum = 0.0, avg;

    printf("Enter the numbers of elements: ");
    scanf("%d", &n);

    while (n > 100 || n < 1) {
        printf("Error! number should in range of (1 to 100).\n");
        printf("Enter the number again: ");
        scanf("%d", &n);
    }

    for (i = 0; i < n; ++i) {
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f", avg);
    

 

end = clock();
execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
printf("Execution time %f",execution_time);
}
