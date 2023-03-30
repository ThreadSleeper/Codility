#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int ar_size, int *  ar) {
    int i;
    int x,j,_ar_i;
for (i=1; i<ar_size; i++) {
    x = ar[i];
    j = i-1;
   while ((ar[j] > x) && j>=0)
       {
       ar[j+1]=ar[j];
       j = j - 1;
   }
   ar[j + 1] = x;
            for (_ar_i=0; _ar_i<ar_size; _ar_i++) {
        printf ("%d ", ar[_ar_i]);
    }
    printf ("\n");
}


}

int main(void) {

   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
   scanf("%d", &_ar[_ar_i]);
}

insertionSort(_ar_size, _ar);

   return 0;
}
