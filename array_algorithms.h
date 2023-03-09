// Buran
// Headers for algorithm functions intended for one dimensional arrays. Sorting, min-max, search, counting
#ifndef MIN_MAX_ELEMENT_H_
#define MIN_MAX_ELEMENT_H_

#define ARR_BEGIN 0
#define ARR_BEGIN_PAST_ZERO 1

#define POS_NOT_FOUND -1
#define VAL_NOT_FOUND -1

int max_element(const int *source_arr, const int num_elements) //! You have to manually set numElemens or do sizeof before passing to the function
{
        int return_value = *source_arr;
        for (int i = ARR_BEGIN_PAST_ZERO; i < num_elements; i++)
                if (return_value < source_arr[i]) return_value = source_arr[i];
        return return_value;
}

int min_element(const int *source_arr, const int num_elements)
{
        int return_value = *source_arr;
        for (int i = ARR_BEGIN_PAST_ZERO; i < num_elements; i++)
                if (return_value > source_arr[i]) return_value = source_arr[i];
        return return_value;
}

int find_element(const int* __source_arr, const int __num_elements, const int __find_value) 
{
        int return_value;
        for (int i = ARR_BEGIN; i < num_elements; i++) {
                if (find_value == source_arr[i]) {
                        return_value = i;
                        break;
                }
        }
        if (!return_value)
                return POS_NOT_FOUND;
        else return return_value;
}

int count_elements(const int* __source_arr, const int __num_elements, const int __find_value) 
{
        int return_value;
        for (int i = ARR_BEGIN; i < num_elements; i++) {
                if (find_value == source_arr[i]) {
                        return_value++;
                }
        }
        if (!return_value)
                return VAL_NOT_FOUND;
        else return return_value;
}

#endif
