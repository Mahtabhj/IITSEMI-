#include"header.h"
void f1()
{
    int i;FILE *f;
    f=fopen("info.txt","r");
    if(f==NULL)printf("no file");
    else {printf("\nfile open");}
    for(i=0;i<4;i++)
    {
        printf("\n%d student name = ",i+1);
        fscanf(f,"%s %d",&st[i].name,&st[i].roll);
    }
}
