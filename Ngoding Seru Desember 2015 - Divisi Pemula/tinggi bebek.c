#include <stdio.h>

int main()
{
    int a,b,c,x=3;
    int temp=0;
    a=b=c=0;

    while(x!=0)
    {
        scanf("%d",&temp);

        if(temp>a)
        {
            c=b;
            b=a;
            a=temp;
        }
        else if(temp>b)
        {
            c=b;
            b=temp;
        }
        else if(temp>c)
        {
            c=temp;
        }
        else{}
        x--;
    }

    
    printf("%d\n%d\n%d\n",c,a,b);


}