#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Kullanicinin girdigi 2 tam sayidan ilkini ikincisi ile kiyaslayip esit olup olmadiklarini esit degillerse ilkinin ikincisinden buyuk mu kucuk mu
    oldugunu bulup ekrana bastiriniz. */

    printf("Iki tam sayi giriniz:\n");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("\n");

    if(a == b)
    {
        printf("Girdiginiz sayilar birbirine esittir.",a,b);
    }

    else

    {
        printf("%d sayisi ile %d sayisi birbirine esit degildir.\n",a,b);
    }

    if(a != b)
    {
        if(a < b)
        {
            printf("%d sayisi %d sayisindan daha kucuktur.",a,b);
        }

        else if(a > b)
        {
            printf("%d sayisi %d sayisindan daha buyuktur.",a,b);
        }

    }

    printf("\n\n\n");

    /* Girilen 2 sayidan ilkinin ikincisinin kati olup olmadigini hesaplayan benzer bir program yaziniz. */

    printf("Iki sayi giriniz:\n");
    int x,y;
    scanf("%d%d",&x,&y);
    printf("\n");

    if(x%y == 0)

    {
        printf("%d sayisi %d sayisinin katidir.\n",x,y);
    }

    else

    {
        printf("%d sayisi %d sayisinin kati degildir.\n",x,y);
    }


    return 0;
}
