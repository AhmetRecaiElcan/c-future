#include <stdlib.h>
#include <stdio.h>

int main ()
{
    int i;
    for ( i = 1; i <9; i++){
        if (i==5)
        {
            continue;;
        }
        if (i==8)
        {
            break;
        }
        
         
       printf("%d\n",i);
    }
    
}