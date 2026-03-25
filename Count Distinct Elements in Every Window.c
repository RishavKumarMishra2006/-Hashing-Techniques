#include <stdio.h>
#include <stdlib.h>

void countDistinct(int arr[], int n, int k) {
    for(int i = 0; i <= n - k; i++) {
        int count = 0;

        for(int j = i; j < i + k; j++) {
            int isDistinct = 1;

            for(int p = i; p < j; p++) {
                if(arr[p] == arr[j]) {
                    isDistinct = 0;
                    break;
                }
            }

            if(isDistinct) count++;
        }

        printf("%d ", count);
    }
}
