#ifndef MIN_ELEMENT_H_
#define MIN_ELEMENT_H_
int min_element(const int* sourceArr, const int numElements) // You have to manually set numElemens or do sizeof before passing to the func
{
    int returnMinVal = *sourceArr;
    for (int Index = *(sourceArr+1); Index < numElements; Index++)
    {
        if (returnMinVal > sourceArr[Index]) returnMinVal = sourceArr[Index];
    }
    return returnMinVal;
};
#endif