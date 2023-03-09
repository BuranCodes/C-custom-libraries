#include <stdio.h>
#include "array_algorithms.h"

int main(void)
{
        int Array[16] = {2,17,5,1,2,5,7,1,2,7,9,4,6,8,4,0};
        int something = *Array;
        printf("%d\n", something);

        int Variable1 = min_element(Array, 16);
        int Variable2 = max_element(Array, 16);
        printf("Smallest variable in the array: %d\n", Variable1);
        printf("Largest variable in the array: %d\n", Variable2);

        // Success!
}