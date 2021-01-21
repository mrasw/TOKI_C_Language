#include <stdio.h>

int main(){
    char string[101];
    scanf("%[^\n]",string);
    printf("%s\n",string);
}