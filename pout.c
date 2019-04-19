#include"header.h"
void infout()
{
    int c;
    printf("If you have the ROLL press    = 1\nIf you have the NAME press = 2\nIf you have the REGISTRATION NUMBER press = 3\n");
    scanf("%d",&c);
    if(c==1)
    {
        infoutR();
    }
    else if(c==2)
    {
        infoutn();
    }
    else if(c==3)
    {
        infoutr();
    }
        menu();
}
void cg()
{
    int c;
    printf("If you have the ROLL press    = 1\nIf you have the NAME press = 2\nIf you have the REGISTRATION NUMBER press = 3\n");
    scanf("%d",&c);
     if(c==1)
    {
        cgoutR();
    }
    else if(c==2)
    {
        cgoutn();
    }
    else if(c==3)
    {
        cgoutr();
    }

    menu();
}

