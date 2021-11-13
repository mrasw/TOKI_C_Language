#include <stdio.h>

int main()
{
    int n,d,conduk=0,b=0;
    int angka[100005];
    int ambil[100005];

    scanf("%d %d", &n, &d);

    for(int a=0; a<n; a++)
    {
        scanf("%d",&angka[a]);

        ambil[a] = d+angka[a];

        while (angka[a] > ambil[b])
        {
            b++;
        }

        if(angka[a]==ambil[b]) conduk++;
        
    }

    printf("%d\n",conduk);
}
