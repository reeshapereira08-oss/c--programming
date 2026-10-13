#include<stdio.h>
// get_array_sum() definition
int get_array_sum(int number[], int n){     
    if(n==0){
        return 1;
    }
    return number[n-1]+
get_array_sum(number, n-1);    
}

int main(){
    int size[5];
    for(int i=0;i<5;i++){
        printf("\nenter %d array size:",i+1);
        scanf("%d",&size[i]);
    }
    //calculate the sum and returns sum
    int total=get_array_sum(size, 5);
    printf("the sum is %d",total);
    return 0;
}