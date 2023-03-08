<<<<<<< HEAD:max_element.h
#ifndef MAX_ELEMENT_H_
#define MAX_ELEMENT_H_
int max_element(const int* sourceArr, const int numElements) // You have to manually set numElements or do sizeof before passing to the function, since C does not track array sizes
=======
#ifndef MIN_MAX_ELEMENT_H_
#define MIN_MAX_ELEMENT_H_
int max_element(const int* sourceArr, const int numElements) // You have to manually set numElemens or do sizeof before passing to the func
>>>>>>> a9d2478 (merged files):min_max_element.h
{
    int returnMaxVal = *sourceArr;
    for (int Index = *(sourceArr+1); Index < numElements; Index++)
    {
        if (returnMaxVal < sourceArr[Index]) returnMaxVal = sourceArr[Index];
    }
    return returnMaxVal;
};
<<<<<<< HEAD:max_element.h
#endif
=======

int min_element(const int* sourceArr, const int numElements)
{
    int returnMinVal = *sourceArr;
    for (int Index = *(sourceArr+1); Index < numElements; Index++)
    {
        if (returnMinVal > sourceArr[Index]) returnMinVal = sourceArr[Index];
    }
    return returnMinVal;
};
#endif
>>>>>>> a9d2478 (merged files):min_max_element.h
