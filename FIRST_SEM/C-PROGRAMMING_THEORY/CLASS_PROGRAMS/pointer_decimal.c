#include<stdio.h>
int main(){
    int x=10;//integer values x stores 10
    int *p;//integer pointer stores the address of x
    p=&x;
    printf("%d\n",x);//display the value of x
    printf("%p\n",&x);//display the value of address
    printf("%p\n",p);
    return 0;
}