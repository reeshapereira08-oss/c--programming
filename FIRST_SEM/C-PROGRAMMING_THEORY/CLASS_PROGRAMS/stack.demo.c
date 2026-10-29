#include<stdio.h>
#define MAX 5
int stack[MAX],top=-1;

void push(int newdata,int size){
    if(top==size-1){
        printf("overflow\n");
        return;
    }
    top++;
    stack[top]=newdata;

    printf("%d is pushed to top of the stack\n",newdata);
}

void pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
        return;
    }
    printf("popped data: %d\n",stack[top]);
    top--;
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements are:\n");

    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main(){
    int size=5;
    int choose,num;

    do{   
        printf("\n1.Push data\n");
        printf("2.Pop data\n");
        printf("3.Display stack\n");
        printf("4.Exit\n");
        printf("enter your choice:");
        scanf("%d",&choose);

        switch (choose)
        {
            case 1:
                printf("enter a number:");
                scanf("%d",&num);
                push(num,size);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program\n");
                break;

            default:
                printf("Invalid option\n");
        }

        printf("-----------------------------------\n");

    } while (choose != 4);

    return 0;
}