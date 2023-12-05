// string as pointer 
#include<stdio.h>
int main(){

    // // 1st Method 
    // char str[]="vivek";
    // printf("%s\n",str);
    // str[0]='d';
    // printf("%s",str);
     
    //  // 2nd Method

    // char* str="vivek";
    // printf("%s",str);
    // str[0]='d'; // error
    // printf("%s",str);

    // // 3rd code 

    // char str[]="vivek";
    // printf("%s\n",str);
    // str="vivek"; // error we canot inisilize same string at two place 
    // printf("%s",str);

    // // 4th code

    char* str="vivek";
    printf("%s\n",str);
    str="divek"; // not give error
    printf("%s",str);
}