#include"header.h"
void infout()
{
    int c;
    printf("\t\tSearch by ROLL press                 = 1\n\t\tSearch by REGISTRATION NUMBER press  = 2\n\t\tSearch by Name  press                = 3 \n");
    scanf("%d",&c);
    if(c==1)
    {
        infoutR();
    }
    else if(c==2)
    {
        infoutr();
    }
    else {
        infn();
    }
        menu();
}
void cg()
{
    int c;
    printf("\t\tIf you have the ROLL press                = 1\n\t\tIf you have the REGISTRATION NUMBER press = 2\n\t\tIf you have the Name  press               = 3\n");
    scanf("%d",&c);
     if(c==1)
    {
        cgoutR();
    }
    else if(c==2)
    {
        cgoutr();
    }
    else {
        cgna();
    }

    menu();
}

