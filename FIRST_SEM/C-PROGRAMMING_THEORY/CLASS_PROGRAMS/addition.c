#include<stdio.h>

int main(){
    int choice ,firstnumber, secondnumber,result;
    do
    {
    ("-----welcome to my calculator------\n"); 
    printf("1. addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");
    printf("enter your choice\n:");
    scanf("%d",&choice);
    if(choice == 1){
        //addition
        printf("enter the first number:");
        scanf("%d",&firstnumber);
        printf("enter second number:");
        scanf("%d",&secondnumber);
        result=firstnumber+secondnumber;
        printf("the sum is : %d",result);
    }
    if(choice==2){
        //subtraction        
        printf("enter the first number:");
        scanf("%d",&firstnumber);
        printf("enter second number:");
        scanf("%d",&secondnumber);
        result=firstnumber-secondnumber;
        printf("the diffrence is : %d",result);
    }
    if(choice==3){
        //multiplication
        printf("enter the first number:");
        scanf("%d",&firstnumber);
        printf("enter second number:");
        scanf("%d",&secondnumber);
        result=firstnumber*secondnumber;
        printf("the product is : %d",result);
    }
    if(choice==4){
        //division
        printf("enter the first number:");
        scanf("%d",&firstnumber);
        printf("enter second number:");
        scanf("%d",&secondnumber);
        result =firstnumber/secondnumber;
        printf("the sum is : %d",result);
    }
}while(choice!=5);
    return 0;
}

