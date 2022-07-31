#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kullanicidan girmesini istediginiz a, b, c ve x tam sayi degerlerini kullanarak ax² + bx + c aritmetik isleminin sonucunu hesaplayan ve ekrana
     bastiran programi yaziniz. */

    int a,b,c,x,sonuc;

    printf("Yapilacak islem: ax^2 + bx + c\n\n\n");

    printf("Sirasiyla a,b,c,x degerlerini giriniz:\n");
    scanf("%d%d%d%d",&a,&b,&c,&x);
    sonuc = a*x*x+b*x+c;

    printf("Islem sonucu: %d\n",sonuc);


}
