#include <stdlib.h>
#include <stdio.h>

int main()
{

    int sayi1;
    int sayi2;

    char op;
    printf("Lutfen bir operator giriniz\n");
    scanf("%c",&op);

    printf("Lutfen iki adet sayi giriniz \n ");
    scanf("%d%d",&sayi1,&sayi2);

    
    
    switch (op)
    {
    case '+':printf("%d + %d = %d",sayi1,sayi2,sayi1+sayi2);
    break;

    case '-': printf("%d - %d = %d",sayi1,sayi2,sayi1-sayi2);    
    break;

    case '/': printf("%d / %d",sayi1,sayi2,sayi1/sayi2);
    break;

    case '*' : printf("%d * %d",sayi1,sayi2,sayi1*sayi2);
    break;
    
    default: printf("Islem basarisiz");
        
    }

  return 0 ;
    /*Bölme ve çarpma çalışmıyor sebebini anlamadım*/
}
