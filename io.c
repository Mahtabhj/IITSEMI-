#include"header.h"
void infoutR()
{
    int i;char r[10];
    printf("Enter the roll = ");
    scanf("%s",&r);
     for(i=0;i<128;i++)
        {
            if(strcmp(st[i].roll,r)==0)
            {
                printf("\n\t\t\tINFORMATION \n\tName = %s\n\tAddress  = %s\n\tRoll  = %s\n",st[i].name,st[i].address,st[i].roll);
                break;
            }
        }
}
void infn()
{
    char n[20];int i;
    printf("\t\t\t\t#Please inter Student Name\n\t\t  #Your input:");
    scanf(" ");
    fgets(n,20,stdin);
       for(i=0;i<128;i++)
        {
            if(strcmp(st[i].name,n)==0)
            {
                printf("\n\t\t\tINFORMATION \n\tName = %s\n\tAddress  = %s\n\tRoll  = %s\n",st[i].name,st[i].address,st[i].roll);
                break;
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
                printf("\n\t\t\tINFORMATION \n\t\tName = %s\n\t\tAddress  = %s\n\t\tRoll  = %s\n",st[i].name,st[i].address,st[i].roll);
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
            printf("Name     = %s\nCgpa of semister no %d   = %.2f\n",st[i].name,s+1,c/6);
            break;
        }
        if(d==1){break;}
    }
    menu();
}
void cgna()
{
       char n[20];int i,j,d=0,s;float c=0;
    printf("\t\t\t\t#Please inter Student Name\n\t\t  #Your input:");
    scanf(" ");
    fgets(n,20,stdin);
    printf("Enter the semister number = ");scanf("%d",&s);s=s-1;
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
            printf("Name     = %s\nCgpa of semister no %d   = %.2f\n",st[i].name,s+1,c/6);
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
            printf("Name     = %s\nCgpa of semister no %d   = %.2f\n",st[i].name,s+1,c/6);
            break;
        }
        if(d==1){break;}
    }
    menu();
}
void cgb()
{
    int b,i,s,j,k;float c=0;
    printf("Enter batch no = ");
    scanf("%d",&b);
    printf("Enter semister no = ");
    scanf("%d",&s);s=s-1;
    if(b==11){i=0;k=32;}
    else if (b==10){i=32;k=64;}
    else if (b==9){i=64;k=96;}
    else if (b==10){i=96;k=128;}
       for(;i<k;i++)
        { c=0;
            printf("Name = %s\t\tRoll = %s\t\t\t",st[i].name,st[i].roll);
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
            else {printf("Failed\n",st[i].marks[s][j]);
            break;}

            }
            printf("Cgpa = %.2f\n",c/6);

        }
    }
void cgc()
{
    int i,s,j,k,b;
    printf("Enter the batch no = ");
    scanf("%d",&b);
    printf("Enter semister no = ");
    scanf("%d",&s);s=s-1;
    printf("For course 101 press = 1\ncourse 102 press = 2\ncourse 103 press = 3\ncourse 104 press = 4\ncourse 105 press = 5\ncourse 106 press = 6\n");
    scanf("%d",&j);j=j-1;
    if(b==11){i=0;k=32;}
    else if (b==10){i=32;k=64;}
    else if (b==9){i=64;k=96;}
    else if (b==10){i=96;k=128;}
    for(;i<k;i++)
    {
        printf("Name = %s\t\tMarks =%d\n",st[i].name,st[i].marks[s][j]);
    }
}
