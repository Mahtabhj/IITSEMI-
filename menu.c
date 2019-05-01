
#include"header.h"
void menu()
{
    printf("\n\t\tFor the information press : I\n\t\tFor the result            : R\n");
    char c;
    int r,i;
    scanf(" %c",&c);
    if (c=='I')
    {
       infout();
    }
    else if(c=='R')
    {
        printf("\t\tFor individual Batch result    press   = 1\n\t\tFor individual student result          = 2\n\t\tMarks of an individual course          = 3\n");
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


