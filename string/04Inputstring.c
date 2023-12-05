#include<stdio.h>
int main(){
    char str[50]; // in this way \0 will be added// short cut way to inilization of char in arrya
    // scanf("%s",str); // this is one issue
     gets(str); //for taking string inpute
    // printf("%s",str); // to print string
    puts(str);
}