#include <stdio.h>

int rollno[5];
char name[5][30];
int marks[5][5];
int total[5];
float average[5], percentage[5];
int result[5];

//function to get student details
void getStudentData()
{
    int i,j;

    for (i=0; i<5; i++)
    {
        printf("\nEnter details of student %d\n",i + 1);

        printf("enter roll number:");
        scanf("%d", &rollno[i]);

        printf("enter name:");
        scanf("%s", name[i]);

        for (j=0; j<5; j++)
        {
            printf("enter marks of subject %d:",j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
}

//Function to calculate total marks
void getTotal()
{
    int i,j;

    for (i = 0;i < 5; i++)
    {
        total[i]=0;

        for (j=0;j<5;j++)
        {
            total[i]=total[i] + marks[i][j];
        }
    }
}
//Function to calculate average and percentage
void getAveragePercentage()
{
    int i;

    for (i=0;i<5;i++)
    {
        average[i]=total[i]/5.0;
        percentage[i]=(total[i]/500.0) * 100;
    }
}

//Function to check result
void getResult()
{
    int i,j;

    for (i = 0; i < 5; i++)
    {
        result[i]=1;

        for (j = 0; j < 5; j++)
        {
            if (marks[i][j] < 35)
            {
                result[i] = 0;
                break;
            }
        }
    }
}

//Function to display result
void displayResult()
{
    int i,j;

    printf("\n-------------STUDENT RESULT SHEET-------------\n");
    printf("%-8s %-10s %4s %4s %4s %4s %4s %8s %9s %13s %8s\n",
           "RollNo", "Name", "S1", "S2", "S3", "S4", "S5",
           "Total", "Average", "Percentage", "Result");


    for (i=0;i<5;i++)
    {  
        printf("%-8d %-12s",rollno[i], name[i]);

        for (j=0;j<5;j++)
        {
        printf("%4d",marks[i][j]);
        }

        printf("%8d %10.2f %13.2f%%       ",total[i],average[i],percentage[i]);

        if (result[i]==1)
        {
            printf("PASS\n");
        }
        else
        {
            printf("FAIL\n");
        }    
    }
}

int main()
{
    getStudentData();
    getTotal();
    getAveragePercentage();
    getResult();
    displayResult();

    return 0;
}