#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int a[] = {1, 2, 54, 26, 4, 44, 12, 3,2,4,2,1,1,1, 7, 11, 34, 45, 77, 31, 31, 233, 93, 55};

int main()
{
    void quicksort(int a[], int start, int end);
    int n = sizeof(a) / 4;
    quicksort(a, 0, n - 1);
    /*
快速排序
*/
    for (int i = 0; i < n; i++)
    {
        printf("%5d\n", a[i]);
    }

    system("pause");
    return 0;
}

void quicksort(int a[], int start, int end)
{
    int left = 0;
    int right = 0;
    int mid = 0;
    if (start < end)
    {
        mid = a[start];
        left = start;
        right = end;
        while (left < right)
        {
            while (left < right && a[right] >= mid)
                --right;
            a[left] = a[right];
            while (left < right && a[left] <= mid)
                ++left;
            a[right] = a[left];
        }
        a[left] = mid;
        quicksort(a, start, left - 1);
        quicksort(a, left + 1, end);
    }
}