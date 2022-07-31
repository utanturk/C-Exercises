#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kullanicidan 3 farkli tam sayi girmesini isteyip bu sayilarin en buyuk ve en kucuk olanlarini tespit ederek uygulamada belirtiniz. */

    printf("3 tam sayi giriniz:\n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("\n");

    int max,min;
    max=a;


    if (b>max)
    {
        max=b;
    }

    if (c>max)
    {
        max=c;
    }

    printf("Maximum Sayi: %d\n",max);

    min=a;

    if (b<min)
    {
        min=b;
    }

    if (c<min)

    {
        min=c;
    }

    printf("Minimum Sayi: %d\n",min);


    return 0;
}
