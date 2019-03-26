#include"header.h"
void f1()
{
    int i;
    for(i=0;i<4;i++)
    {
        printf("\n%d student name = ",i+1);
        scanf("%s",&st[i].name);
        printf("\nRoll = ");
        scanf("%d",&st[i].roll);
    }
}
