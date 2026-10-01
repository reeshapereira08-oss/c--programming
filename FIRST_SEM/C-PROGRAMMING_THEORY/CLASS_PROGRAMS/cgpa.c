#include<stdio.h>
int roll_num;
float cgpa=0,total=0,average=0;
float sub1,sub2,sub3,sub4,sub5;
void getstudentdata(); 
void cgpa_of_student();
void gettotal();
void getaverage();
void displaystudentsetails();
int main() {
    getstudentdata();
    cgpa_of_student();
    gettotal();
    getaverage();
    displaystudentsetails();
    
    average=total/5;
    total=sub1+sub2+sub3+sub4+sub5;
    printf("enter roll number:%d",roll_num);
    printf("enter marks of subject1:%f",sub1);
    printf("enter marks of subject2:%f",sub2);
    printf("enter marks of subject3:%f",sub3);
    printf("enter marks od subject4:%f",sub4);
    printf("enter marks of subject5:%f",sub5);
    }

    int main(){
        getstudentdata();
        cgpa_of_student();
        gettotal();
        getaverage();
        displaystudentsetails();
        

    }

    

