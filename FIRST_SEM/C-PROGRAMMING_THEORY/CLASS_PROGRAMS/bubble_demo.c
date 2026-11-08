#include<stdio.h>
int main(){
    int size;
    
    int i;
    printf("enter array size: ");
    scanf("%d",&size);
    
    int r[size];
    for(i = 0; i < size; i++){
        printf("enter %d array elements:",i+1);
        scanf("%d",&r[i]);
    }

    //bubble sort logic
    int j, temp, swaps = 0;

    for(i = 0; i < size - 1; i++)
    {
        for(j = 0; j < size - i - 1; j++)
        {
            if(r[j] > r[j + 1])
            {
                temp = r[j];
                r[j] = r[j + 1];
                r[j + 1] = temp;

                swaps++;
            }
        }
    }    
    printf("array elements are:");
    for(i = 0; i < size; i++){
        printf("%d\t",r[i]);
    }
    

    return 0;
}