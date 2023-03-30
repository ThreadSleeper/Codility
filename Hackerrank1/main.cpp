#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int ar_size, int *  ar) {
    int i;
    int x=ar[ar_size-1];
for (i=ar_size-1; i>0; i--) {
   if (ar[i-1] > x)
       {
       ar[i]=ar[i-1];
   }
    else {
        ar[i] = x;
    return;
    }
}
ar[i]=x;

}

using namespace std;

int main() {
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        scanf("%d", &_ar[_ar_i]);
    }

    insertionSort(_ar_size, _ar);
        for (_ar_i=0; _ar_i<_ar_size; _ar_i++) {
        printf ("%d\n", _ar[_ar_i]);
    }
    return 0;
}
