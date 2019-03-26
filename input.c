#include"header.h"
void f1()
{
    int i,j;FILE *f;
    f=fopen("info.txt","r");
    for(i=0;i<4;i++)
    {
        fscanf(f,"%s %d",&st[i].name,&st[i].roll);
        for(j=0;j<6;j++)
        {
            fscanf(f,"%d",&st[i].marks[j]);
        }
    }
}
