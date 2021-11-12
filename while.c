#include <stdio.h>

int main()
{
    char masukan[101];

    while(scanf("%[^\n]%*c", masukan)!=EOF)
    {
        printf("%s\n",masukan);
    }

}