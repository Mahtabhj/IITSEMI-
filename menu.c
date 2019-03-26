#include"header.h"
void menu()
{
    printf("If you want to know the information press Y\n");
    char c;
    int r,i;
    scanf(" %c",&c);
    if (c=='Y')
    {
        printf("Enter the Roll number = ");
        scanf(" %d",&r);
        for(i=0;i<4;i++)
        {
            if(st[i].roll==r)
            {
                printf("The name of the student is = %s",st[i].name);
            }
        }
    }
    else {printf("\nNot exists");}
    menu();
}
