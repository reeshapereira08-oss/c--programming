#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    p=(int *)malloc(5 * sizeof(int));
    p[2] = 25;
    printf("%d\n", p[2]);
    free(p);
    return 0;
}