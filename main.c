
#include <stdio.h>

int* Bubble_Sort(int* array, int length){
    int tmp=0;
    for(int i = 0; i < length - 1; i++){
        for(int j = 0; j < length - i - 1; j++){
            if(array[j+1] < array[j]){
                tmp = array[j+1];
                array[j+1] = array[j];
                array[j] = tmp;
            }
        }
    }
    return array;
}
