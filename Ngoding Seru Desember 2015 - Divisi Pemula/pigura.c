#include <stdio.h>


int main()
{
    int a,b;
    char c;
    int tengah;

    scanf("%d",&a);
    scanf(" %c",&c);
    scanf("%d",&b);

    for(int i=0;i<a;i++)
    {
        tengah=a/2;
        tengah=a-tengah;
        

        for(int j=0;j<a;j++)
        {        
            if(i==0||i==a-1)
            {
                printf("%d",b);
            }    
            else if(j==0||j==a-1)
            {
                printf("%d",b);
            }
            else if(i==tengah-1&&j==tengah-1&&a%2!=0)
            {
                printf("*");
            }
            else
            {
                printf("%c",c);
            }
        }

        printf("\n");
    }
}