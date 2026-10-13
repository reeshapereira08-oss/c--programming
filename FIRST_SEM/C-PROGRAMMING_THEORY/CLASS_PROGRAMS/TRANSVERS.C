#include<stdio.h>
//read array size from keyboard
int read_array_size(){
    int size;
    printf("enter the array size[>4]:");
    scanf("%d",&size);
    return size;
}

int valid_array_size(int array_size){
    if (array_size>4){
        return 1;
    }
    return 0;
}
int main(){
    int isvalid=1;
    int arraysize=0;
    int myarray;
    //int array_size=read_array_size();
    //int isvalid=valid_array_size(array_size);
    while (isvalid==1)
    {
        
        int arraysize=read_array_size();
        int validate=valid_array_size(arraysize);
        if (validate == 1){
            break;
        }
        printf("pls try again.......");
    }

    int my_array
    for (int i=0;i<arraysize;i++){

    }
}

