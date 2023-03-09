// Buran
// Headers for algorithm functions intended for one dimensional arrays. Sorting, min-max, search, counting
#ifndef MIN_MAX_ELEMENT_H_
#define MIN_MAX_ELEMENT_H_


enum {
        POS_NOT_FOUND = -1,
        VAL_NOT_FOUND = -1
};

int max_element(const int *arr, const int arr_len) //! You have to manually set arr_len or do sizeof before passing to the function
{
        int maxVal = *arr;
        for (int i = 1; i < arr_len; i++)
                if (maxVal < arr[i]) maxVal = arr[i];
        return maxVal;
}

int min_element(const int *arr, const int arr_len)
{
        int minVal = *arr;
        for (int i = 1; i < arr_len; i++)
                if (minVal > arr[i]) minVal = arr[i];
        return minVal;
}

int target(const int* arr, const int arr_len, const int target) 
{
        int posVal;
        for (int i = 0; i < arr_len; i++) {
                if (target == arr[i]) {
                        posVal = i;
                        break;
                }
        }
        if (!posVal)
                return POS_NOT_FOUND;
        else
                return posVal;
}

int count_elements(const int* arr, const int arr_len, const int target) 
{
        int count;
        for (int i = 0; i < arr_len; i++) {
                if (target == arr[i]) {
                        count++;
                }
        }
        if (!count)
                return VAL_NOT_FOUND;
        else 
                return count;
}

#endif
