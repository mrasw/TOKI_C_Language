#include <stdio.h>

int main()
{
    int s,n,d;

    scanf("%d %d %d",&s,&n,&d);

    for(int i =0;i<n;i++)
    {
        
        printf("%d\n",s);
        s=s+d;
    }
}