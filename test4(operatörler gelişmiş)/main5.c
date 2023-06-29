#include <stdlib.h>
#include <stdio.h>

int main()
{
    int sayi1;
    int sayi2;
    
    printf("Lutfen iki adet sayi giriniz\n");
    scanf("%d%d",&sayi1,&sayi2);

    if (sayi1>=sayi2)
    {

        if (sayi1==sayi2)
        {
            printf("2 sayida birbirine esittir");
        }

        if (sayi1>sayi2)
        {
            printf("%d>%d",sayi1,sayi2);
        }
        
        
        
    }
    else
    {
      
        printf("%d<%d",sayi1,sayi2);

      
    }


}