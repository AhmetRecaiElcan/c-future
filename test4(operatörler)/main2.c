#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int sayi;
  printf("Lutfen bir sayi giriniz\n");
  scanf("%d",&sayi);

  if (sayi%2 == 0)
  {
    printf("Sayiniz cifttir");
  }
  if (sayi%2 ==1)
  printf("Sayiniz tektir");
}