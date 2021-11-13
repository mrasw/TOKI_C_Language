#include <stdio.h>

int main()
{
    int masukan,x,temp,total;
    int a,b,c,d,e;

    scanf("%d",&masukan);

    while(masukan!=0)
    {
        a=b=c=d=e=0;
        total=0;
        scanf("%d",&x);

        for(int i=0; i<x;i++)
        {
            scanf("%d",&temp);

            //3 6 5 4 2 1
            /*
                a=6
                b=5
                c=3
                d=0
                e=0
            */

            if(temp>a)
            {
                e=d;
                d=c;
                c=b;
                b=a;
                a=temp;
            }
            else if(temp>b)
            {
                e=d;
                d=c;
                c=b;
                b=temp;
            }
            else if(temp>c)
            {
                e=d;
                d=c;
                c=temp;
            }
            else if(temp>d)
            {
                e=d;
                d=temp;
            }
            else if(temp>e)
            {
                e=temp;
            }
        }

        total=a+b+c+d+e;

        printf("%d\n",total);

        masukan--;
    }
}