// Buran
// Headers for algorithm functions intended for one dimensional arrays. Sorting, min-max, search, counting
#ifndef MIN_MAX_ELEMENT_H_
#define MIN_MAX_ELEMENT_H_


enum {
        POS_NOT_FOUND = -1,
        VAL_NOT_FOUND = -1
};

int max_element(const int *arr, const int num_elements) //! You have to manually set numElemens or do sizeof before passing to the function
{
        int maxVal = *arr;
        for (int i = 1; i < num_elements; i++)
                if (maxVal < arr[i]) maxVal = arr[i];
        return maxVal;
}

int min_element(const int *arr, const int num_elements)
{
        int minVal = *arr;
        for (int i = 1; i < num_elements; i++)
                if (minVal > arr[i]) minVal = arr[i];
        return minVal;
}

int target(const int* arr, const int num_elements, const int find_value) 
{
        int posVal;
        for (int i = 0; i < num_elements; i++) {
                if (find_value == arr[i]) {
                        posVal = i;
                        break;
                }
        }
        if (!posVal)
                return POS_NOT_FOUND;
        else
                return posVal;
}

int count_elements(const int* arr, const int num_elements, const int find_value) 
{
        int count;
        for (int i = 0; i < num_elements; i++) {
                if (find_value == arr[i]) {
                        count++;
                }
        }
        if (!count)
                return VAL_NOT_FOUND;
        else 
                return count;
}

#endif
