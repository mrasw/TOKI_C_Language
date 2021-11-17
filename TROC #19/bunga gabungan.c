#include <stdio.h>

int main()
{
    int p,q,total,cek;

    scanf("%d %d",&p,&q);

    total=(p*p)+(q*q)+1;

    cek=total/4;

    if((total%4)==0)
    {
        printf("%d\n",cek);
    }
    else
    {
        printf("-1\n");
    }
}
