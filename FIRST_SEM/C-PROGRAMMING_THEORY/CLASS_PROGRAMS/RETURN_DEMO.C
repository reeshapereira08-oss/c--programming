#include<stdio.h>
int rollno;
float marks=0,total,average,sum,CGPA;
float sub1,sub2,sub3,sub4,sub5;
void getStudentData(){
    printf("enter roolnumber");
    scanf("%d",&rollno);}

float gettotal(){
    printf("enter roll number:%d",rollno);
    printf("enter marks of subject1:");
    scanf("%f",&sub1);
    printf("enter marks of subject2:");
    scanf("%f",&sub2);
    printf("enter marks of subject3:");
    scanf("%f",&sub3);
    printf("enter marks od subject4:");
    scanf("%f",&sub4);
    printf("enter marks of subject5:");
    scanf("%f",&sub5);

    sum=sub1+sub2+sub3+sub4+sub5;
    return sum;
}
float getaverage(){
    average=sum/5;
    return average;
}
float getCGPA(){
    CGPA=average*3;
    return CGPA;
}

int main(){
   getStudentData();
   total=gettotal();
   float average=getaverage();
   float CGPA=getCGPA();

printf("the total is %f",total);
printf("the average is %f",average);
printf("the cgpa is %f",CGPA);
}
