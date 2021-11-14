#include <stdio.h>

int main()
{
    int a;
    int arr[100];
    scanf("%d",&a);

    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(a)
    {
        printf("%d",arr[a-1]);
        if(a!=1)
        {
            printf(",");
        }
        a--;
    }
    printf("\n");

}