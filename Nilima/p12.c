#include <stdio.h>
#include<time.h>
void cyclicswap(int *a, int *b, int *c);
int main()
{
clock_t start, end;
double execution_time;
start = clock();



    int a, b, c;

    printf("Enter a, b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Value before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    cyclicswap(&a, &b, &c);

    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);
end = clock();
execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
printf("Execution time %f",execution_time);

  }  

void cyclicswap(int *n1, int *n2, int *n3) {
    int temp;
    // swapping in cyclic order
    temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
}


