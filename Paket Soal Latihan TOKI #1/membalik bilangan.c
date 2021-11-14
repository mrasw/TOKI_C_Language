#include <stdio.h>

int main()
{
    int masukan;
    int a,count;

    scanf("%d",&masukan);

    for(int i=0;i<masukan;i++)
    {
        count=0;
        scanf("%d",&a);
        while (a!=0)
        {
            count=(count*10)+(a%10);
            a=a/10;
        }
        printf("%d\n",count);
    }
}