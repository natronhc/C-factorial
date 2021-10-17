#include<stdio.h>
#include<conio.h>
int hesap(int sayi){
    int fackt=1;
    for ( ; sayi > 0 ;sayi--)
    {
        fackt *= sayi;
    }
    return fackt;
}
int main(){
    int n;
    printf(" faktoriyelini ogrenmek istediginiz sayiyi giriniz ::: ");
    scanf("%d",&n);
    printf("%d sayisinin faktoriyeli %d",n,hesap(n));
    getch();
    return 0;
}
