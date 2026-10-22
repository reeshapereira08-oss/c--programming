#include<stdio.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int m,n;

    printf("enter two numbers:");
    scanf("%d %d", &m, &n);

    printf("Before swap: m=%d, n=%d\n",m,n);
    swap(&m ,&n);

    printf("After swap: m=%d, n=%d\n",m ,n);

    return 0;
}
