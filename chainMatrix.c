#include <stdio.h>
#include <stdlib.h>

int matrixChain(int arr[], int i, int j)
{
  if (i == j)
  {
    return 0;
  }
  int k, count;
  int min = 656565;
  for (k = i; k < j; k++)
  {
    count = matrixChain(arr, i, k) + matrixChain(arr, k + 1, j) + arr[i - 1] + arr[k] + arr[j];
    if (count < min)
      min = count;
  }
  return min;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Minimum no. of multiplication is %d ", matrixChain(arr, 0, n - 1));
  return 0;
}