#include"header.h"
void infout()
{
    int c;
    printf("If you have the ROLL press    = 1\nIf you have the REGISTRATION NUMBER press = 3\n");
    scanf("%d",&c);
    if(c==1)
    {
        infoutR();
    }
    else if(c==2)
    {
        infoutr();
    }
        menu();
}
void cg()
{
    int c;
    printf("If you have the ROLL press    = 1\nIf you have the REGISTRATION NUMBER press = 2\n");
    scanf("%d",&c);
     if(c==1)
    {
        cgoutR();
    }
    else if(c==2)
    {
        cgoutr();
    }

    menu();
}

