#include"header.h"
void infoutR()
{
    int i;char r[10];
    printf("Enter the roll = ");
    scanf("%s",&r);
     for(i=0;i<32;i++)
        {
            if(strcmp(st[i].roll,r)==0)
            {
                printf("\n    INFORMATION \nName = %s\nAddress  = %s\nRoll  = %s\n",st[i].name,st[i].address,st[i].roll);
            }
        }
}
void infoutn()
{
    int i;char n[10];
    printf("Enter the name = ");
    scanf("%s",&n);
     for(i=0;i<32;i++)
        {
            if(strcmp(st[i].name,n)==0)
            {
                printf("\n    INFORMATION \nName = %s\nAddress  = %s\nRoll  = %s\n",st[i].name,st[i].address,st[i].roll);
            }
        }
}
void infoutr()
{

    int i,r;
    printf("Enter the Registration Number = ");
    scanf("%d",&r);
     for(i=0;i<32;i++)
        {
            if(st[i].reg==r)
            {
                printf("\n    INFORMATION \nName = %s\nAddress  = %s\nRoll  = %s\n",st[i].name,st[i].address,st[i].roll);
            }
        }
}
void cgoutR()
{
    int i,j,s;char r[10];
    float c=0;
    printf("Enter the Roll Number = ");scanf("%s",&r);
    printf("Enter the semister number = ");scanf("%d",&s);s=s-1;
    for(i=0;i<32;i++)
    {
        if(strcmp(st[i].roll,r)==0)
        {
            for(j=0;j<6;j++)
            {
                if(st[i].marks[s][j]>=80)
            {
                c=c+4.00;
            }
            else if(st[i].marks[s][j]>=75&&st[i].marks[s][j]<80)
            {
                c=c+3.75;
            }
            else if(st[i].marks[s][j]>=70&&st[i].marks[s][j]<75)
            {
                c=c+3.50;
            }
            else if(st[i].marks[s][j]>=65&&st[i].marks[s][j]<70)
            {
               c=c+3.25;
            }
            else if(st[i].marks[s][j]>=60&&st[i].marks[s][j]<65)
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
            else if(st[i].marks[s][j]>=45&&st[i].marks[s][j]<50)
            {
               c=c+2.25;
            }
            else if(st[i].marks[s][j]>=40&&st[i].marks[s][j]<45)
            {
               c=c+2.00;
            }
            else {printf("0.00");
            menu();}
            }
        }
    }
    printf("Cgpa of semister no %d = %.2f\n",s,c/6);
}
void cgoutn()
{
    int i,j,s;char n[10];
    float c=0;
    printf("Enter the Roll Number = ");scanf("%s",&n);
    printf("Enter the semister number = ");scanf("%d ",&s);s=s-1;
    for(i=0;i<32;i++)
    {
        if(strcmp(st[i].roll,n)==0)
        {
            for(j=0;j<6;j++)
            {
                if(st[i].marks[s][j]>=80)
            {
                c=c+4.00;
            }
            else if(st[i].marks[s][j]>=75&&st[i].marks[s][j]<80)
            {
                c=c+3.75;
            }
            else if(st[i].marks[s][j]>=70&&st[i].marks[s][j]<75)
            {
                c=c+3.50;
            }
            else if(st[i].marks[s][j]>=65&&st[i].marks[s][j]<70)
            {
               c=c+3.25;
            }
            else if(st[i].marks[s][j]>=60&&st[i].marks[s][j]<65)
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
            else if(st[i].marks[s][j]>=45&&st[i].marks[s][j]<50)
            {
               c=c+2.25;
            }
            else if(st[i].marks[s][j]>=40&&st[i].marks[s][j]<45)
            {
               c=c+2.00;
            }
            else {printf("0.00");
            menu();}
            }
        }
    }
    printf("Cgpa of semister no %d = %.2f\n",s,c/6);
}
void cgoutr()
{
    int i,j,s,r;
    float c=0;
    printf("Enter the Registration Number = ");scanf("%d",&r);
    printf("Enter the semister number = ");scanf("%d",&s);s=s-1;
    for(i=0;i<32;i++)
    {
        if(st[i].reg==r)
        {
            for(j=0;j<6;j++)
            {

                if(st[i].marks[s][j]>=80)
            {
                c=c+4.00;
            }
            else if(st[i].marks[s][j]>=75&&st[i].marks[s][j]<80)
            {
                c=c+3.75;
            }
            else if(st[i].marks[s][j]>=70&&st[i].marks[s][j]<75)
            {
                c=c+3.50;
            }
            else if(st[i].marks[s][j]>=65&&st[i].marks[s][j]<70)
            {
                c=c+3.25;
            }
            else if(st[i].marks[s][j]>=60&&st[i].marks[s][j]<65)
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
            else if(st[i].marks[s][j]>=45&&st[i].marks[s][j]<50)
            {#include"header.h"
void infoutR()
{
    int i;char r[10];
    printf("Enter the roll = ");
    scanf("%s",&r);
     for(i=0;i<128;i++)
        {
            if(strcmp(st[i].roll,r)==0)
            {
                printf("\n    INFORMATION \nName = %s\nAddress  = %s\nRoll  = %s\n",st[i].name,st[i].address,st[i].roll);
                break;
            }
        }
}
void infoutn()
{
    int i;char n[20];
    printf("Enter the name = ");
    scanf("%s",n);
     for(i=0;i<128;i++)
        {
            if(strcmp(st[i].name,n)==0)
            {
                printf("\n    INFORMATION \nName = %s\nAddress  = %s\nRoll  = %s\n",st[i].name,st[i].address,st[i].roll);
                break ;
            }
        }
}
void infoutr()
{

    int i,r;
    printf("Enter the Registration Number = ");
    scanf("%d",&r);
     for(i=0;i<128;i++)
        {
            if(st[i].reg==r)
            {
                printf("\n    INFORMATION \nName = %s\nAddress  = %s\nRoll  = %s\n",st[i].name,st[i].address,st[i].roll);
                break ;
            }
        }
}
void cgoutR()
{
    int i,j,d=0,s;char r[10];
    float c=0;
    printf("Enter the Roll Number = ");scanf("%s",&r);
    printf("Enter the semister number = ");scanf("%d",&s);s=s-1;

     for(i=0;i<128;i++)
        {
            if(strcmp(st[i].roll,r)==0)
            {d=1;
            for(j=0;j<6;j++)
            {

                if(st[i].marks[s][j]>=80)
            {
                c=c+4.00;
            }
            else if(st[i].marks[s][j]>=75&&st[i].marks[s][j]<80)
            {
                c=c+3.75;
            }
            else if(st[i].marks[s][j]>=70&&st[i].marks[s][j]<75)
            {
                c=c+3.50;
            }
            else if(st[i].marks[s][j]>=65&&st[i].marks[s][j]<70)
            {
               c=c+3.25;
            }
            else if(st[i].marks[s][j]>=60&&st[i].marks[s][j]<65)
            {
                c=c+3.00;
            }
            else if(st[i].marks[s][j]>=55&&st[i].marks[s][j]<60)
            {
                c=c+2.75;
            }
            else if(st[i].marks[s][j]>=50&&st[i].marks[s][j]<55)
            {
               c=c+2.50;
            }
            else if(st[i].marks[s][j]>=45&&st[i].marks[s][j]<50)
            {
               c=c+2.25;
            }
            else if(st[i].marks[s][j]>=40&&st[i].marks[s][j]<45)
            {
               c=c+2.00;
            }
            else {printf("Got %d \nFailed\n",st[i].marks[s][j]);
            menu();}

            }
            printf("Cgpa of semister no %d   = %.2f\n",s+1,c/6);
            break;
        }
        if(d==1){break;}
    }
    menu();
}
void cgoutn()
{
    int i,j,d=0,s;char n[10];
    float c=0;
    printf("Enter the name  = ");scanf("%s",&n);
    printf("Enter the semister number = ");scanf("%d ",&s);s=s-1;
         for(i=0;i<128;i++)
        {
            if(strcmp(st[i].name,n)==0)
            {d=1;
            for(j=0;j<6;j++)
            {

                if(st[i].marks[s][j]>=80)
            {
                c=c+4.00;
            }
            else if(st[i].marks[s][j]>=75&&st[i].marks[s][j]<80)
            {
                c=c+3.75;
            }
            else if(st[i].marks[s][j]>=70&&st[i].marks[s][j]<75)
            {
                c=c+3.50;
            }
            else if(st[i].marks[s][j]>=65&&st[i].marks[s][j]<70)
            {
               c=c+3.25;
            }
            else if(st[i].marks[s][j]>=60&&st[i].marks[s][j]<65)
            {
                c=c+3.00;
            }
            else if(st[i].marks[s][j]>=55&&st[i].marks[s][j]<60)
            {
                c=c+2.75;
            }
            else if(st[i].marks[s][j]>=50&&st[i].marks[s][j]<55)
            {
               c=c+2.50;
            }
            else if(st[i].marks[s][j]>=45&&st[i].marks[s][j]<50)
            {
               c=c+2.25;
            }
            else if(st[i].marks[s][j]>=40&&st[i].marks[s][j]<45)
            {
               c=c+2.00;
            }
            else {printf("Got %d \nFailed\n",st[i].marks[s][j]);
            menu();}

            }
            printf("Cgpa of semister no %d   = %.2f\n",s+1,c/6);
            break;
        }
        if(d==1){break;}
    }
    menu();
}
void cgoutr()
{
    int i,j,d=0,s,r;
    float c=0;
    printf("Enter the Registration Number = ");scanf("%d",&r);
    printf("Enter the semister number = ");scanf("%d",&s);s=s-1;
     for(i=0;i<128;i++)
        {
            if(st[i].reg==r)
            {d=1;
            for(j=0;j<6;j++)
            {

                if(st[i].marks[s][j]>=80)
            {
                c=c+4.00;
            }
            else if(st[i].marks[s][j]>=75&&st[i].marks[s][j]<80)
            {
                c=c+3.75;
            }
            else if(st[i].marks[s][j]>=70&&st[i].marks[s][j]<75)
            {
                c=c+3.50;
            }
            else if(st[i].marks[s][j]>=65&&st[i].marks[s][j]<70)
            {
               c=c+3.25;
            }
            else if(st[i].marks[s][j]>=60&&st[i].marks[s][j]<65)
            {
                c=c+3.00;
            }
            else if(st[i].marks[s][j]>=55&&st[i].marks[s][j]<60)
            {
                c=c+2.75;
            }
            else if(st[i].marks[s][j]>=50&&st[i].marks[s][j]<55)
            {
               c=c+2.50;
            }
            else if(st[i].marks[s][j]>=45&&st[i].marks[s][j]<50)
            {
               c=c+2.25;
            }
            else if(st[i].marks[s][j]>=40&&st[i].marks[s][j]<45)
            {
               c=c+2.00;
            }
            else {printf("Got %d \nFailed\n",st[i].marks[s][j]);
            menu();}

            }
            printf("Cgpa of semister no %d   = %.2f\n",s+1,c/6);
            break;
        }
        if(d==1){break;}
    }
    menu();
}
               c=c+2.25;
            }
            else if(st[i].marks[s][j]>=40&&st[i].marks[s][j]<45)
            {
               c=c+2.00;
            }
            else {printf("Failed");
            menu();}
            }
        }
    }
    printf("Cgpa of semister no %d = %.2f\n",s,c/6);
}
