#include <stdio.h>

void printFrequency(int arr[], int size) {
    
    for (int i = 0; i < size; i++) {
        int count = 1;  
       
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
               
                arr[j] = 0;
            }
        }
        
        if (arr[i] != 0) {
            printf("%d : %d\n", arr[i], count);
        }
    }
}

int main() {
    int arr[] = { 1, 2, 3, 2, 1, 3, 4, 5, 4, 2 }; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    printf("Dizi elemanları ve frekansları:\n");
    printFrequency(arr, size); 
    return 0;
}
