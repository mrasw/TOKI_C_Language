#include <stdio.h>

int main()
{
    int a,b,l, masukan,biaya;

    scanf("%d",&masukan);
    while(masukan!=0)
    {
        scanf("%d %d %d",&a,&b,&l);

        if(l>2000)
        {
            l=l-2000;
            
            biaya=a+ (b* (l/100));
            printf("%d\n",biaya);
        }
        else
        {
            printf("%d\n",a);
        }
        masukan--;
    }

}
