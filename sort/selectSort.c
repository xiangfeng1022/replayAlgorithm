/* 选择排序 */
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

int selectSort(int *buffer, int len)
{
    for (int pos = 0; pos < len; pos++)
    {
        
    }

}

int main()
{
    int buffer[BUFFER_SIZE] = {1, 30, 24, 5, 58, 12, 39};
    int len = sizeof(buffer) / sizeof(buffer[0]);
    

}