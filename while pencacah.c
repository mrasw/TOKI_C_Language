#include <stdio.h>

int main()
{
    int a = 0;

    int b;
    while(scanf("%d",&b)!=EOF)
    {
        a = a + b;        
    }

    printf("%d\n",a);
}