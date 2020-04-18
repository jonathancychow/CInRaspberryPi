#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i, *ptr, sum = 0;

    // Set first argument to n 
    n = atoi(argv[1]);

    // dynamics memory allocation
    ptr = (int*) malloc(n * sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    // printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        sum += atoi(argv[i+2]);
    }

    printf("Sum = %d\n", sum);
    free(ptr);
    return 0;
}
