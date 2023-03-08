#include <stdio.h>
#include "min_max_element.h"

int main(void) {
    int Array[5] = {5,3,4,1,2};

    int Variable1 = min_element(Array, 5);
    int Variable2 = max_element(Array, 5);
    printf("Smallest variable in the array: %d\n", Variable1);
    printf("Largest variable in the array: %d\n", Variable2);

    // Success!
}