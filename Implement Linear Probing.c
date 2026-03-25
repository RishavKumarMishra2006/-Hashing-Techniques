#include <stdio.h>

void linearProbing(int hash_size, int arr[], int n) {
    int hash[hash_size];
    
    for(int i = 0; i < hash_size; i++)
        hash[i] = -1;

    for(int i = 0; i < n; i++) {
        int key = arr[i];
        int index = key % hash_size;

        while(hash[index] != -1) {
            index = (index + 1) % hash_size;
        }

        hash[index] = key;
    }

    for(int i = 0; i < hash_size; i++)
        printf("%d ", hash[i]);
}
