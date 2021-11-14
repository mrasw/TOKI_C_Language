#include <stdio.h>

int main()
{
    int masukan;
    int arr1[10000];

    scanf("%d",&masukan);

    for(int a=0;a<masukan;a++)
    {
        scanf("%d",&arr1[a]);
    }

    for(int a=0;a<masukan;a++)
    {
        if(arr1[a]<0)
        {
            printf("%d\n",arr1[a]);
        }
    }
    for(int a=0;a<masukan;a++)
    {
        if(arr1[a]==0)
        {
            printf("%d\n",arr1[a]);
        }
    }
    for(int a=0;a<masukan;a++)
    {
        if(arr1[a]>0)
        {
            printf("%d\n",arr1[a]);
        }
    }
}