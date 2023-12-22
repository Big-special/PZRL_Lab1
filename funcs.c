#include "funcs.h"
#include <stdio.h>
#define FUNCS_C

void selectionSort(double *arr, int n)
{
  for (int i = 0; i < n - 1; i++)
    {
      int maxIndex = i;
      for (int j = i + 1; j < n; j++)
        {
          if (arr[j] > arr[maxIndex])
          {
            maxIndex = j;
          }
        }
      double temp = arr[i];
      arr[i] = arr[maxIndex];
      arr[maxIndex] = temp;
    }
}
