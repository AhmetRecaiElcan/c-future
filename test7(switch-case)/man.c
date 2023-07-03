#include <stdlib.h>
#include <stdio.h>

int main()
{
     int day=4;
     switch (day)
     {
     case 1 :printf("Pazartesi");
     break;
     case 2:printf("Sali");
     break;
     case 3: printf("Carsamba");
     break;
     case 4 :printf("Persembe");
     break;
     case 5:printf("Cuma");
     break;
     case 6: printf("Cmartesi");
     break;
     case 7 : printf("Pazar");
     break;
     default:printf("Gecersiz gun");
        
     }
}