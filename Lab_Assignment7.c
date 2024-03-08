#include <stdio.h>
#include <stdlib.h>

void SwapS(int* array, int a, int b){
    int temp;
    temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

void OutputArr(int arr[], int size, int totalswap){
    int i = 0;
    if(arr[i] == 7){
        printf("Array1: ");
        for(i = 0; i < size; i++){
            printf("%d ", arr[i]);

        }
        printf("Total # of swaps: %d", totalswap);
    }
    if(arr[0] == 10){
        printf("Array2: ");
        for(i = 0; i < size; i++){
            printf("%d ", arr[i]);

        }
        printf("Total # of swaps: %d", totalswap);
    }
}

void SelectSort(int Array[], int n){
    int i, j, min;
    for(i = 0; i < n-1; i++){
        min = i;
        for(j = 0; j < n; j++){
            if(Array[j] < Array[min]){
                min = j;
            }
            if (min != i){
                SwapS(Array, Array[min], Array[i]);
            }
        }
    }
}

void BubbleSort(int Array[], int n){
    int i, j;
    int SwapNum = 0;

    for(i = 0; i < n-1; i++){
        for(j = 0; j < n-1; j++){
            if (Array[j] > Array[j+1]){
                SwapS(Array,j, j+1);
                SwapNum++;
            }
        }
    }
    if(Array[0] == 7)
        OutputArr(Array, n, SwapNum);
    if(Array[0] == 10)
        OutputArr(Array, n, SwapNum);
}

int main(){
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int size1 = sizeof(array1);
    int size2 = sizeof(array2);
    BubbleSort(array1, size1);
    BubbleSort(array2, size2);
}
