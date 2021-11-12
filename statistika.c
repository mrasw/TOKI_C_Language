#include <stdio.h>

int main()
{
    int b, max, min, masukan[1000];

    scanf("%d",&b);

    for (int a=0;a<b;a++)
    {
        scanf("%d",&masukan[a]);
    }

    max=masukan[0];
    min=masukan[0];

    for(int a=0;a<b;a++)
    {
        if(masukan[a]>max)
        {
            max=masukan[a];
        }
        else if(masukan[a]<min)
        {
            min=masukan[a];
        }
    }

    printf("%d %d\n",max,min);
}