#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        if(i!=a)
        {
            printf("%d+",i);
        }
        else
        {
            printf("%d\n",i);
        }
    }
}