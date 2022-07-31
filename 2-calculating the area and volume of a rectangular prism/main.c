#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kullanicidan dikdörtgenler prizmasina ait yükseklik ve taban kenarlarý degerlerini alarak prizmanýn taban alaný, yanal alaný, toplam alan ve hacim
    degerlerini hesaplayip ekrana bastiran kodu yaziniz. */

    printf("Bilgilendirme: Dikdortgenin taban kenarlari a,b yuksekligi h\n\n\n");

    printf("a,b,h degerlerini giriniz:\n");
    float a,b,h;
    scanf("%f%f%f",&a,&b,&h);
    printf("\n");

    float taban,yanal,hacim;
    taban = a*b;
    yanal = 2*(a+b)*h;
    hacim = a*b*h;

    printf("Taban Alani: %.2f\n",taban);
    printf("Taban Alanlar Toplami: %.2f\n",taban*2);
    printf("Yanal Alani: %.2f\n",yanal);
    printf("Toplam Alan: %.2f\n",taban*2+yanal);
    printf("Hacim: %.2f\n",hacim);





    return 0;
}
