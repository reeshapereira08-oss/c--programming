#include<stdio.h>

void add_to_number(int first,int second){     //function definition
    int sum;
    //int first=100;
    //int second=200;
    sum=first+second;
    printf("The sum is %d\n",sum);
}

int main(){
add_to_number(30,27);
add_to_number(100,270);
printf("\npgm terminated");
}