// This is a comment 
#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
    int i = 1; 
    
    //atoi convert ascii string to integer
    int count = atoi(argv[1]);
    int limit = atoi(argv[2]);

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