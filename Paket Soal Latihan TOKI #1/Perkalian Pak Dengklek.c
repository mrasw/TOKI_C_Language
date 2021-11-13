#include <stdio.h>

int main()
{
    int a,b,kali,jumlah=0;

    scanf("%d %d",&a,&b);
    int simpana, simpanb;
    while(a>0)
    {
        simpana=a%10;
        int c = b;
        while (c >0)
        {   
            simpanb=c%10;
            kali = simpana * simpanb;
            jumlah = jumlah + kali;
            c = c/10;

        }       
        a=a/10;        
    }

    printf("%d\n",jumlah);
}
