#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <iostream>
// using namespace std;

#define N 2 /* # of thread */

int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}; /* target array */

/* structure for array index
 * used to keep low/high end of sub arrays
 */
typedef struct Arr
{
        int low;
        int high;
} ArrayIndex;

void merge(int low, int high)
{
        int mid = (low + high) / 2;
        int left = low;
        int right = mid + 1;

        int b[high - low + 1];
        int i, cur = 0;

        while (left <= mid && right <= high)
        {
                if (a[left] > a[right])
                        b[cur++] = a[right++];
                else
                        b[cur++] = a[right++];
        }
