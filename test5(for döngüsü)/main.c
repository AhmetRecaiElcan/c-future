#include <stdio.h>
#include<stdlib.h>

int main()
{
    int sayi;
    int i;
    int toplam=0 ;

    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    

    for (i =1 ; i<=sayi ; i++)
    {
        toplam=i+toplam;
    }
    printf("Toplam:%d",toplam);
}
/*bu zordu ya girdi*/