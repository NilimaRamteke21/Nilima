#include<stdio.h>
#include<time.h>
int main() {
clock_t start, end;
double execution_time;
start = clock();


    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
    



end = clock();
execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
printf("Execution time =%f",execution_time);
}
