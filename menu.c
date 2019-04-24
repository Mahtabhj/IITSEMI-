
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
        printf("For individual Batch result press = 1\n         Student result press = 2\nMarks of an individual course press = 3\n");
        scanf("%d",&r);
        if(r==1)
        {
            cgb();
        }
        else if (r==2) {
        cg();}
        else {cgc();}
    }
    menu();
}


