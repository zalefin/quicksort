#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "quicksort.h"

#define N 1000


int main() {
    int buf[N];
    int i;
    int t;

    srand(time(0));

    // populate array
    for (i = 0; i < N; i++) {
        t = rand() % 100;
        buf[i] = (int)t;
    }

    for (i = 0; i < N; i++) {
        printf("%d ", buf[i]);
    }
    printf("\n");
    quickSort(buf, 0, N - 1);
    for (i = 0; i < N; i++) {
        printf("%d ", buf[i]);
    }
    printf("\n");
    
    return 0;
}

