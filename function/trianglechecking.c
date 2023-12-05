#include<stdio.h>
  int triangle (int x, int y, int z ){
    int max=x;
    if (max<y)
    max=y;
    if(max<z)
    max=z;
    int valid=0 ;
    if (max==x && max < (y+z))
    valid = 1;
    if (max==y && max < (x+z))
    valid = 1;
    if (max==z && max < (y+x))
    valid = 1;
    if (valid==1)
    {
        printf("Valid");
    }
    else
    {
        printf("Not valid");
    }
    return 0;
}
int main(){
    int x,y,z;
    printf("Enter the first side of triangle: ");
    scanf("%d", &x);
    printf("Enter the second side of triangle: ");
    scanf("%d", &y);
    printf("Enter the third side of triangle: ");
    scanf("%d", &z);
    triangle(x,y,z);
    return 0 ;
}
