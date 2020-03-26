// This is a comment 
#include <stdio.h> 
#include <stdlib.h>

int main() 
{ 
    int i = 1; 
    int count = 300000000;
    int limit = 20;
    for (i=11; i<=count; i++){
       int j = 1 ;
       for (j=1; j<= limit; j++){
              if(i%j != 0){
                     break;
              }
              if(j == limit){
                     printf("%d is the answer\n",i);
              }
       }

    }
 
    return 0; 
} 