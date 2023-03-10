#include <stdio.h>
#include "array_algorithms.h"

int main(void)
{
        int Array[5] = {1,5,7,1,2};
        int Variable1 = min_element(Array, 5);
        int Variable2 = max_element(Array, 5);
        int Variable3 = 5;
        size_t arr_len = sizeof(Array)/sizeof(*Array);

        printf("Smallest variable in the array: %d\n", Variable1);
        printf("Largest variable in the array: %d\n", Variable2);
        printf("Position for value 5 found at: %d\n", target(Array, arr_len, Variable3));
        printf("Count for value 5: %d\n", count_elements(Array, arr_len, Variable3));


        sort_small(Array, 5);

        for (int i = 0; i < 5; i++) {
                printf("Index and value: %d    |    %d\n", i, Array[i]);
        }
        
        sort_large(Array, 5);

        for (int i = 0; i < 5; i++) {
                printf("Index and value: %d    |    %d\n", i, Array[i]);
        }
        

        // Success!
}
