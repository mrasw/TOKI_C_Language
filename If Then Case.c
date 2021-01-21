#include <stdio.h>

//menggunakan if else

int main(){
    int a;
    scanf("%d",&a);
    if (a>0&&a<10)
    {
        printf("satuan\n");
    }
    else if (a>9&&a<100)
    {
        printf("puluhan\n");
    }
    else if (a>99&&a<1000)
    {
        printf("ratusan\n");
    }
    else if (a>999&&a<10000)
    {
        printf("ribuan\n");
    }
    else if (a>9999&&a<100000)
    {
        printf("puluhribuan\n");
    }
    
    
}