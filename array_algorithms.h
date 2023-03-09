// Buran
// Headers for algorithm functions intended for one dimensional arrays. Sorting, min-max, search, counting
#ifndef MIN_MAX_ELEMENT_H_
#define MIN_MAX_ELEMENT_H_

#define ARR_BEGIN 0
#define ARR_BEGIN_PAST_ZERO 1

int max_element(const int *sourceArr, const int numElements) // You have to manually set numElemens or do sizeof before passing to the function
{
        int returnValue = *sourceArr;
        for (int Index = ARR_BEGIN_PAST_ZERO; Index < numElements; Index++)
                if (returnValue < sourceArr[Index]) returnValue = sourceArr[Index];
        return returnValue;
};

int min_element(const int *sourceArr, const int numElements)
{
        int returnValue = *sourceArr;
        for (int Index = ARR_BEGIN_PAST_ZERO; Index < numElements; Index++)
                if (returnValue > sourceArr[Index]) returnValue = sourceArr[Index];
        return returnValue;
};

#endif
