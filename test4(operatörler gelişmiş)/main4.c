#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sayi;
  int sayi2;

  printf("Lutfen iki adet sayi giriniz\n");
  scanf("%d%d",&sayi,&sayi2);


  if (sayi==sayi2)
  {
    printf("2 sayi da birbirine eşittir");
  }

  
  else if (sayi>sayi2)
  {
    printf("Sonuç :%d>%d",sayi,sayi2);
  }


  else if (sayi2>sayi);
  {
    printf("sonuç: %d>%d",sayi2,sayi);
  }
  
  
  
}