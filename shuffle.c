// Implemetantion of Fisher-Yates shuffling algorithm
#include "shuffle.h"

void shuffle (int* array, size_t size) {
    int i = size;
    srand(time(NULL));

    while(i-- > 1) {
        double u = rand() % 101 / 100.0; 
        int k = (int)(i * u);
        // swap
        int tmp = array[i];
        array[i] = array[k];
        array[k] = tmp;
    }

    return;
}