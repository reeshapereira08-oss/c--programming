#include<stdio.h>
int main(){
    char word[]="Reesha";
    for (int i=0; word[i] !='\0'; i++) {
        printf(" %c-", word[i]);
    }
    return 0;
}