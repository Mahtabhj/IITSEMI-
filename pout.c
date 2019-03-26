#include"header.h"
void infout()
{int r,i;
     printf("Enter the Roll number = ");
        scanf(" %d",&r);
        for(i=0;i<4;i++)
        {
            if(st[i].roll==r)
            {
                printf("The name of the student is = %s\n%d",st[i].name,st[i].marks[5]);
            }
        }
        menu();
}
void cg()
{
    printf("Enter the Roll number = ");
    int r,i,j;float c=0;
    scanf("%d",&r);
    for(i=0;i<4;i++)
    {
        if(st[i].roll==r)
        {
            for(j=0;j<6;j++)
            {
                if(st[i].marks[j]>=80)
            {
                c=c+4.00;
            }
            else if(st[i].marks[j]>=75&&st[i].marks[j]<80)
            {
                c=c+3.75;
            }
            else if(st[i].marks[j]>=70&&st[i].marks[j]<75)
            {
                c=c+3.50;
            }
            else if(st[i].marks[j]>=65&&st[i].marks[j]<70)
            {
               c=c+3.25;
            }
            else if(st[i].marks[j]>=60&&st[i].marks[j]<65)
            {
                c=c+3.00;
            }
            else if(st[i].marks[j]>=55&&st[i].marks[j]<60)
            {
                c=c+2.75;
            }
            else if(st[i].marks[j]>=50&&st[i].marks[j]<55)
            {
               c=c+2.50;
            }
            else if(st[i].marks[j]>=45&&st[i].marks[j]<50)
            {
               c=c+2.25;
            }
            else if(st[i].marks[j]>=40&&st[i].marks[j]<45)
            {
               c=c+2.00;
            }
            else {printf("0.00");
            menu();}
            }
        }
    }
    printf("%.2f",c/6);
    menu();
}
