#include<stdio.h>
int main(){
    int my_marks[5];
    int sub_marks [5];//declares an array'sub_marks with SIZe 5 of 'int' type
    //storing data/aarray initialization-array_name[index]=data/value;
    sub_marks[0]=80;
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;
    printf("sub1 mark:%d\n",sub_marks[0]);
    printf("sub2 mark:%d\n",sub_marks[1]);
    printf("sub3 mark:%d\n",sub_marks[2]);
    printf("sub4 mark:%d\n",sub_marks[3]);
    printf("sub5 mark:%d\n",sub_marks[4]);
    //dynamic initialization of 'my_marks'
    printf("++++++++++++++++++++++++++++++++++++++++");
    for(int i=0;i<5;i++){
        printf("\nenter %d subject mark:[int data]",i+1);
        scanf("%d",&my_marks[i]); 

    } 
    //printf("enter first subject mark:[int data]");
    //scanf("%d",&my_marks[0]); //store in first location
    //printf("enter second subject mark:[int data]");
    //scanf("%d",&my_marks[1]); //store in first location   
    //printf("enter third subject mark:[int data]");
    //scanf("%d",&my_marks[2]); //store in first location   
    //printf("enter forth subject mark:[int data]");
    //scanf("%d",&my_marks[3]); //store in first location   
    //printf("enter fifth subject mark:[int data]");
    //scanf("%d",&my_marks[4]); //store in first location   
    printf("*************************************");
    printf("\nmy sub1 mark:%d\n",my_marks[0]);
    printf("my sub2 mark:%d\n",my_marks[1]);
    printf("my sub3 mark:%d\n",my_marks[2]);
    printf("my sub4 mark:%d\n",my_marks[3]);
    printf("my sub5 mark:%d\n",my_marks[4]);
}

