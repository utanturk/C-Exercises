#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Kullanici tarafindan girilen reel sayinin asagidaki f fonksiyonuna gore f(x) degerini hesaplayan programi yaziniz.
    f(x) = x³+13x²+47x+5            (20 puan)
    */

    printf("Bir reel sayi giriniz: ");
    float x;
    scanf("%f",&x);
    printf("\n");

    float fx=x*x*x+13*x*x+47*x+5;
    printf("f(x) = x^3 + 13x^2 + 47x + 5\n");
    printf("f(%.2f) = %.2f\n",x,fx);

    printf("\n\n");


    /*
    Kullanici tarafindan girilen 2 tam sayinin carpiminin isaretini sayilari carpmadan bulan programi yaziniz.   (40 puan)
    */

    printf("Iki tam sayi giriniz:\n");
    int a,b;
    scanf("%d%d",&a,&b);

    if((a<0 && b<0) || (a>0 && b>0))
    {
        printf("Sayilarinizin carpimlari pozitiftir.\n");
    }

    else if((a<0 && b>0) || (a>0 && b<0))
    {
        printf("Sayilarinizin carpimlari negatiftir.\n");
    }

    else if (a==0 || b==0)
    {
        printf("Carpma islemi sonucu 0'dir.\n");
    }

    printf("\n\n");

    /*
    while dongusu ile 0 ile kullanicidan alinan sayi arasindaki 17'nin kati olan tum sayilari ekrana bastiriniz.        (25 puan)
    Programinizi her satirda 10 eleman olacak sekilde duzenleyin.       (15 puan)
    */

    printf("En az 3 basamakli bir tam sayi giriniz: ");
    int sayi;
    scanf("%d",&sayi);

    int i,satir;
    i=0;
    satir=0;

    while(i<=sayi)
    {
        if(sayi%17==0)
        {
            printf("%10d", sayi);

            satir++;

            if(satir%10==0)
            {
                printf("\n");
            }
        }

        sayi--;
    }


    printf("\n");
    return 0;
}
