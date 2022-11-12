
#include<stdio.h>
#include<time.h>
int main()
{

clock_t start, end;
double execution_time;
start = clock();

     int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
    
    
 

end = clock();
execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
printf("Execution time %f",execution_time);
}
