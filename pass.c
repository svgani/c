#include <stdio.h>
#include<time.h>
int main ()
{
    int i = 1;
    clock_t begin, end;
    double time_spent;
    begin = clock();
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }
    end = clock();
    time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("#total time taken:%f\n", time_spent);
     return (0);
}
