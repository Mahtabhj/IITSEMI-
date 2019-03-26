#include"header.h"
void menu()
{
    printf("\nIf you want to know the information press : Y\nIf you want to know cgpa press            : R\n");
    char c;
    int r,i;
    scanf(" %c",&c);
    if (c=='Y')
    {
       infout();
    }
    else if(c=='R')
    {
        cg();
    }
    menu();
}


