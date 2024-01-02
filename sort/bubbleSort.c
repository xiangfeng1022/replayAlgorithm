/* 冒泡排序: 两个数进行两两比较，将大的数进行交换，每一轮将最大的数放到最后 */
#include <stdio.h>

#define BUFFER_SIZE 6

int swap(int *val1, int *val2)
{
    int ret = 0;
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
    return ret;
}

int printArray(int *array, int arraySize)
{   
    int ret = 0;
    for (int idx = 0; idx < arraySize; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }
    return ret;
}

/* 时间复杂度O(n^2)*/
void bubbleSort01(int *array, int length)
{
    if (array == NULL)
    {
        return;
    }
    for (int end = length; end > 0; end--)
    {
        for (int begin = 1; begin < length; begin++)
        {
            if (array[begin] < array[begin - 1])
            {
                swap(&array[begin], &array[begin - 1]);
            }
        }
    }
}

void bubbleSort02(int *array, int length)
{   
     if (array == NULL)
    {
        return;
    }
    int sorted = 1;
    for (int end = length; end > 0; end--)
    {
        /* 已经排好序标志 */
        sorted = 1;
        for (int begin = 1; begin < length; begin++)
        {
            if (array[begin] < array[begin - 1])
            {
                swap(&array[begin], &array[begin - 1]);
                /* 没有排好序标志 */
                sorted = 0;
            }
        }
        if (sorted == 1)
        {
            break; // 跳出本次循环
        }
    }
}

void bubbleSort03(int *array, int length)
{
     if (array == NULL)
    {
        return;
    }
    int sortedIndex = 0;
    for (int end = length; end > 0; end--)
    {   
        /* 已经排好序的索引 */
        sortedIndex = 1;
        for (int begin = 1; begin < length; begin++)
        {
            if (array[begin] < array[begin - 1])
            {
                swap(&array[begin], &array[begin - 1]);
                /* 更新排好序的索引 */
                sortedIndex = begin;
            }
        }
        /* 更新 */
        end = sortedIndex;
    }
}

int main()
{

    int array[BUFFER_SIZE] = {11, 36, 24, 107, 23, 65};
    int length = sizeof(array) / sizeof(array[0]);
    bubbleSort01(array, length);

    printArray(array, length);

    return 0;
}