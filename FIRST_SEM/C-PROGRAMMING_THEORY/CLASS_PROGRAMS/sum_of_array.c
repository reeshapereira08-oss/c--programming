#include<stdio.h>
// get_array_sum() definition
int get_array_sum(int number[]){
    int sum;
    for(int i=0;i<5;i++){
       sum=sum+number[i];
    }
    return sum;
    
}


int main(){
    int size[5];
    for(int i=0;i<5;i++){
        printf("\nenter %d array size:",i+1);
        scanf("%d",&size[i]);
    }
    //calculate the sum and returns sum
    int total=get_array_sum(size);
    printf("the sum is %d",total);
}