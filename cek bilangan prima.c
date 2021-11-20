#include <stdio.h>

int main()
{

    int n;

    scanf("%d",&n);
    int masukan[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&masukan[i]);
    }

    for(int i=0;i<n;i++)
    {
        int prime=1;

        if(masukan[i]==1)
        {
            prime=0;
        }

        for(int j=2;j*j<=masukan[i];j++)
        {
            if(masukan[i]%j==0)
            {
                prime=0;
                break;
            }
        }

        

        if(prime)
        {
            printf("YA\n");
        }
        else
        {
            printf("BUKAN\n");
        }
    }
}