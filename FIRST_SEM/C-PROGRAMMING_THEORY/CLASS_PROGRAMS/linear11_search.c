#include<stdio.h>
int arr[],n;
int linearsearch(int arr[],int n,int key){
    for (int i=0; i<n; i++){
        if (arr[i] == key)
        return i;
    }
    return -1;{
}
int arr[] = {34,7,23,32,5,62};
int n = sizeof(arr)/sizeof(arr[0]);
int pos = linearsearch(arr, n, 23);
}