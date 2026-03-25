#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int freq[100000] = {0};
    int found = 0;

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for(int i = 0; i < 100000; i++) {
        if(freq[i] > 1) {
            printf("%d ", i);
            found = 1;
        }
    }

    if(!found)
        printf("-1");
}
