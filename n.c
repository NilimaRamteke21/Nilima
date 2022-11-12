
# include<stdio.h>
# include<time.h>

int main() {
clock_t start, end;
double execution_time;
start = clock();

printf("hello");
end = clock();
execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
printf("Execution time =%f",execution_time);
}
