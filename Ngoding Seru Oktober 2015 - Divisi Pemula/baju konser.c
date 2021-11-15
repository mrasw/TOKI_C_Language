#include <stdio.h>

int main()
{
    int b,p,l;

    scanf("%d %d %d",&b,&p,&l);

    if(b<11&&p<41&&l<91)
    {
        printf("S\n");
    }
    else if(b<=14 && p<=60 && l<=120)
    {
        printf("M\n");
    }
    else if(b<=18 && p<=80 && l<=180)
    {      
        printf("L\n");        
    }
    else
    {
        printf("X\n");
    }
}