#include <stdio.h>

int main()
{
    int n,m,vi,vj;

    scanf("%d %d",&n,&m);

    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&vi,&vj);
    }

    printf("%d\n",((2*n)-3-m));
}