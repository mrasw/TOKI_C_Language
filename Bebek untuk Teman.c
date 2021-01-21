#include <stdio.h>

int main(){
    /*
    n sebgaia varibel jumlah bebek yg dimiliki pak dangklek
    m sebagai variabel jumlah teman pak dangklek
    a sebagai variabel bebek yang didapat oleh tiap teman
    b sebagai variabel sisa bebek pak dangklek
    */
    int a,b,n,m;
    scanf("%d %d",&n ,&m);
    a=n/m;
    b=n%m;
    printf("masing-masing %d\n",a);
    printf("bersisa %d\n",b);
}