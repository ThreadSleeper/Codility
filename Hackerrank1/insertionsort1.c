#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int ar_size, int *  ar) {
    int i;
    int x=ar[ar_size];
for (i=ar_size; i>=0; i--) {
   if (ar[i-1] > x)
       {
       ar[i]=ar[i-1];
   }
    else {
        ar[i] = x;
    }
}
}
