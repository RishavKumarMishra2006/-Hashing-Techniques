#include <stdio.h>

int longestConsecutive(int arr[], int n) {
    int maxLen = 0;

    for(int i = 0; i < n; i++) {
        int current = arr[i];
        int length = 1;

        int foundPrev = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == current - 1) {
                foundPrev = 1;
                break;
            }
        }

        if(!foundPrev) {
            while(1) {
                int foundNext = 0;
                for(int j = 0; j < n; j++) {
                    if(arr[j] == current + 1) {
                        foundNext = 1;
                        break;
                    }
                }

                if(foundNext) {
                    current++;
                    length++;
                } else break;
            }
        }

        if(length > maxLen)
            maxLen = length;
    }

    return maxLen;
}
