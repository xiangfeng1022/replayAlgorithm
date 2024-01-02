/* 选择排序: 找到遍历的最小值放到前面位置 相较于冒泡排序 减少了交换次数 
            时间复杂度O(n^2)*/
#include <stdio.h>
#if 0
#define BUFFER_SIZE 7

int selectSort(int *buffer, int len)
{
    int ret = 0;
    int sub = 0;
    for (int pos = 0; pos < len; pos++)
    {
        int min = buffer[pos];
        for (int idx = pos + 1; idx < len; idx++)
        {

            if (buffer[idx] < min)
            {
                min = buffer[idx];
                sub = idx;
            }

        }
        int temp = buffer[pos];
        buffer[pos] = min;
        buffer[sub] = temp;
    }
    return ret;
}

int main()
{
    int buffer[BUFFER_SIZE] = {1, 30, 24, 5, 58, 12, 39};
    int len = sizeof(buffer) / sizeof(buffer[0]);

    selectSort(buffer, len);

    for (int idx = 0; idx < len; idx++)
    {
        printf("buffer[%d] = %d\n", idx, buffer[idx]);
    }
    return 0;
}
#endif

#define BUFFER_SIZE 7

int selectSort(int *array, int length)
{   
    int ret = 0;
    int minValue = 0;
    int minIndex = 0;
    for (int pos = 0; pos < length; pos++)
    {
        minValue = array[pos];
        for (int begin = pos + 1; begin < length; begin++)
        {
            if (minValue > array[begin])
            {
                minValue = array[begin];
                minIndex = begin;
            }
        }

        if (minValue < array[pos])
        {
            int temp = array[pos];
            array[pos] = minValue;
            array[minIndex] = temp;
        }
    }
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


int main()
{
    int array[BUFFER_SIZE] = {1, 30, 24, 5, 58, 12, 39};
    int length = sizeof(array) / sizeof(array[0]);    
    selectSort(array, length);
    printArray(array, length);
}