#ifndef MAX_ELEMENT_H_
#define MAX_ELEMENT_H_
int max_element(const int* sourceArr, const int numElements) // You have to manually set numElements or do sizeof before passing to the function
{
    int returnMaxVal = *sourceArr;
    for (int Index = *(sourceArr+1); Index < numElements; Index++)
    {
        if (returnMaxVal < sourceArr[Index]) returnMaxVal = sourceArr[Index];
    }
    return returnMaxVal;
};
#endif
