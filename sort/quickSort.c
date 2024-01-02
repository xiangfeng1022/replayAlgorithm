/* 快速排序: 时间复杂度O(NlogN) 双指针就是两个索引start end */
#include <stdio.h>

int printArray(int *array, int arraySize)
{   
    int ret = 0;
    for (int idx = 0; idx < arraySize; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }
    return ret;
}

int quickSort(int *array, int start, int end)
{   
    int ret = 0;
    if(start >= end)
    {
        return ret;
    }

     int temp = array[start];
     int left = start;
     int right = end;
    
     while (left < right)
     {
        /* 从右往左找找第一个比基准值小的数 */
        while (array[right] > temp && left < right)
        {
            right--;
        }
        if (left < right)
        {
            array[left] = array[right];
            left++;
        }

        /* 从左往右走找第一个比基准值大的数 */
        while (array[left] < temp && left < right)
        {
            left++;
        }
        if (left < right)
        {
            array[right] = array[left];
            right--;
        }
     }

     array[left] = temp;
     quickSort(array, start, left-1);
     quickSort(array, right+1, end);
     return ret;
     
}

int main()
{   
    int array[] = {3, 7, 8, 1, 9, 6, 5};
    int length = sizeof(array) / sizeof(array[0]);
    quickSort(array, 0, length-1); /* 这边传给函数 start = 0 end = length - 1 */
    printArray(array, length);
     
    return 0;
}