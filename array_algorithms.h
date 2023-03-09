// Buran
// Headers for algorithm functions intended for one dimensional arrays. Sorting, min-max, search, counting
#ifndef MIN_MAX_ELEMENT_H_
#define MIN_MAX_ELEMENT_H_

#define ARR_BEGIN 0
#define ARR_BEGIN_PAST_ZERO 1
#define POS_NOT_FOUND -1

int max_element(const int *__source_arr, const int __num_elements) // You have to manually set numElemens or do sizeof before passing to the function
{
        int __return_value = *__source_arr;
        for (int Index = ARR_BEGIN_PAST_ZERO; Index < __num_elements; Index++)
                if (__return_value < __source_arr[Index]) __return_value = __source_arr[Index];
        return __return_value;
}

int min_element(const int *__source_arr, const int __num_elements)
{
        int __return_value = *__source_arr;
        for (int Index = ARR_BEGIN_PAST_ZERO; Index < __num_elements; Index++)
                if (__return_value > __source_arr[Index]) __return_value = __source_arr[Index];
        return __return_value;
}

int find_one_element(const int* ____source_arr, const int ____num_elements, int __find_value) 
{
        int __return_value;
        for (int Index = ARR_BEGIN; Index < ____num_elements; Index++) {
                if (__find_value == ____source_arr[Index]) {
                        __return_value = Index;
                        break;
        }
        if (!__return_value)
                return POS_NOT_FOUND;
        else return __return_value;
}

#endif
