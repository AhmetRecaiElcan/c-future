#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int sayi2;
    sayi2=18;
    int sayi;
    printf("Lutfen yasinizi giriniz\n");
    scanf("%d",&sayi);

    if (sayi>=sayi2)
    {
        printf("Tebrikler yasal olarak oy kullanabilirsiniz...");
    }
    else
    {
        printf("Malesef yasal olarak oy kullanamazssiniz");
    }

}