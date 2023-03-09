#include <stdio.h>
#include "array_algorithms.h"

int main(void)
{
        int Array[16] = {2,17,0,1,2,0,7,1,0,7,9,0,6,8,0,0};
        int something = *Array;
        printf("%d\n", something);

        int Variable1 = min_element(Array, 16);
        int Variable2 = max_element(Array, 16);
        int Variable3 = 5;
        printf("Smallest variable in the array: %d\n", Variable1);
        printf("Largest variable in the array: %d\n", Variable2);
        printf("Position for value 5 found at: %d\n", find_one_element(Array, 16, Variable3));
        printf("Count for value 5: %d\n", count_elements(Array, 16, Variable3));

        

        // Success!
}