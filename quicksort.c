#include "quicksort.h"


void quickSort(int *arr, int lo, int hi) {
    int p = hi;
    int r;
    if (hi - lo > 0) {
        r = partition(arr, lo, hi, p);
        quickSort(arr, lo, r-1);
        quickSort(arr, r, hi);
    }
}


int partition(int *arr, int lo, int hi, int p) {
    int pivot = arr[p];
    int l = lo;
    int i;

    for (i = lo; i < hi; i++) {
        if (arr[i] <= pivot) {
            swap(arr, l, i);
            l++;
        }
    }
    swap(arr, l, hi);
    return l;
}


void swap(int *arr, int i, int j) {
    int t;
    t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}
