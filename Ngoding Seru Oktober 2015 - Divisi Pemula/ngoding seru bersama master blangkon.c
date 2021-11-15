#include <stdio.h>

int main()
{
    int a,b,c,k,temp=0;

    scanf("%d %d %d %d",&a,&b,&c,&k);

    if(k==0)
    {
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a<c)
        {
            temp=a;
            a=c;
            c=temp;
        }
        if(b<c)
        {
            temp=b;
            b=c;
            c=temp;
        }
    }

    if(k==1)
    {
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a>c)
        {
            temp=a;
            a=c;
            c=temp;
        }
        if(b>c)
        {
            temp=b;
            b=c;
            c=temp;
        }
    }

    printf("%d %d %d\n",a,b,c);
}