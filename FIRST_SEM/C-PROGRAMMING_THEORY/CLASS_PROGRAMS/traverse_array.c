#include<stdio.h>
int main(){
    int size[5];
    int sum;
    printf("enter the size of the array[>4]:");
    scanf("%d",&size);
    if (size[5]<4){
    printf("invalid size");
    }
    else{
    printf("valid size");
    }
    for(int i=0;i<5;i++){
        printf("\nenter %d array size:[int size]",i+1);
        scanf("%d",&size[i]); }
    printf("\narray size:%d\n",size[0]);
    printf("array size:%d\n",size[1]);
    printf("array size:%d\n",size[2]);
    printf("array size:%d\n",size[3]);
    printf("array size:%d\n",size[4]);
    printf(" Array Elements:%d",&size[0],"%d",&size[1],"%d",&size[2],"%d",&size[3]+size[4]);
    sum=size[0]+size[1]+size[2]+size[3]+size[4];
    printf("size array sum is:",&sum);

}