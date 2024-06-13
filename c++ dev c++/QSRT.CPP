#include <stdio.h>
#define sz 5
void printArray(int array[], int l,int r) {
  for (int i = l; i <=r; ++i) {
    printf("%d  ", array[i]);
  }
}
void swap(int *a, int *b) {

  int t = *a;
  printf("\tswap between %d and %d\t",*a,*b);
  *a = *b;
  *b = t;
}
int partition(int array[], int low, int high) {

  int pivot = array[high];
  printf("\n\tPivot=%d",pivot);
 
  int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;

      swap(&array[i], &array[j]);
    }
    printf("\n\t");
    printArray(array,0,sz-1);

  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}
int main() {
  int a[] = {1,5,7,8,9};
  printf("Unsorted Array\n");
  printArray(a,0,sz-1);

  quickSort(a, 0, sz - 1);

  printf("\nSorted array in ascending order: \n");
  printArray(a,0,sz-1);
}
