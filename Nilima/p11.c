
#include <stdio.h>

#include<time.h>
int main() {
clock_t start, end;
double execution_time;
start = clock();



    int data[5];
    int i=0;
    printf("Enter elements: ");
    for(i=0;i<5;++i)
    	{
	
        scanf("%d", data + i);
    	}

    printf("You entered: \n");
    for (i=0; i < 5; ++i)
        printf("%d\n", *(data + i));
    
    

end = clock();
execution_time = ((double)(end - start))/CLOCKS_PER_SEC;
printf("Execution time %f",execution_time);
}
