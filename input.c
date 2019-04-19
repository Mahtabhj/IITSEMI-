#include"header.h"
void f1()
{
    int i,j,k;FILE *f;
    f=fopen("info.txt","r");
    for(i=0;i<32;i++)
    {
        fscanf(f,"%d ",&st[i].serial);
        fgets(st[i].name,20,f);
        fscanf(f,"%s %s %d",&st[i].address,&st[i].roll,&st[i].reg);
        for(j=0;j<8;j++)
        {
            for(k=0;k<6;k++)
            {
                fscanf(f,"%d",&st[i].marks[j][k]);
            }
        }
    }
}
