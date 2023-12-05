#include <stdio.h>
#include <string.h>
struct student // data type created
{
    int id;
    float marks;
    char fav;
    char name[100];
} modi, melodi, godi; // data trpe create and variable decleration on same time :

// struct student modi, melodi, godi ; // Global variable

int main()
{
    // struct student modi, melodi, godi ; // Local variable
    modi.id = 420;
    melodi.id = 421;
    godi.id = 422;

    modi.marks = 220;
    melodi.marks = 250;
    godi.marks = 230;

    modi.fav = 'p';
    melodi.fav = 'p';
    godi.fav = 'p';

    strcpy(modi.name, " Modi is the best singer ");
    strcpy(melodi.name, " Melodi is Gf of modi ");
    strcpy(godi.name, " godi is left hand of modi ");

    printf(" the id of modi = %d\n", modi.id);
    printf(" the marks of modi = %.2f\n", modi.marks);
    printf(" the favrout charactor of modi = %c\n", modi.fav);
    printf(" the favrout charactor of modi = %s\n", modi.name);
    printf("-----------------------------------------\n");
    printf(" the id of melodi = %d\n", melodi.id);
    printf(" the marks of melodi = %.2f\n", melodi.marks);
    printf(" the favrout charactor of melodi = %c\n", melodi.fav);
    printf(" the favrout charactor of modi = %s\n", melodi.name);
    printf("-----------------------------------------\n");
    printf(" the id of godi = %d\n", godi.id);
    printf(" the marks of godi = %.2f\n", godi.marks);
    printf(" the favrout charactor of godi = %c\n", godi.fav);
    printf(" the favrout charactor of modi = %s\n", godi.name);
    printf("-----------------------------------------\n");
    return 0;
}