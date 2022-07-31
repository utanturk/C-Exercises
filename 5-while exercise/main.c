#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kullanicidan alinan degerden baslayarak 1'e kadar geri sayim yapan programi while dongusu ile yaziniz. */

    printf("Sifirdan buyuk bir sayi giriniz: ");
    int sayi;
    scanf("%d",&sayi);

    while(sayi>=1)

    {
        printf("%d  ",sayi);
        sayi = sayi-1;
    }

    printf("\n\n\n");

    /* 1'den kullanicinin girdigi sayiya kadar olan sayilarin toplamini bulan programi yaziniz. */

    printf("Sifirdan buyuk bir sayi giriniz: ");
    int veri,yedek;
    scanf("%d",&veri);
    yedek=veri;


    int toplam=0;
    while(veri>=1)

    {
        toplam = toplam+veri;
        veri = veri-1;
    }

    printf("1+2+3+4...%d = %d",yedek,toplam);

    printf("\n");


    return 0;
}
