#include <stdio.h>

#define BUFFER_SIZE 6

int printArray(int *array, int arraySize)
{   
    int ret = 0;
    for (int idx = 0; idx < arraySize; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }
    return ret;
}

int insertSort01(int *array, int length)
{
    int ret = 0;
    int cmp = 0;
    for (int idx = 1; idx < length; idx++)
    {   
        cmp = array[idx];
        for (int jdx = idx; jdx >= 0; jdx--)
        {
            if (cmp < array[jdx - 1])
            {
                array[jdx] = array[jdx - 1];
            }
            else
            {
                array[jdx] = cmp;
                break;
            }
        }
    }

    return ret;
}

int insertSort02(int *array, int length)
{
    int ret = 0;
    
    return ret;
}

int main()
{   
    int array[BUFFER_SIZE] = {11, 36, 24, 107, 23, 65};
    int length = sizeof(array) / sizeof(array[0]);


    return 0;
}