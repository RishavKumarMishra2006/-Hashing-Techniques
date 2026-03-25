#include <stdio.h>
#include <string.h>

void findItinerary(char from[][20], char to[][20], int n) {
    int startIndex = -1;

    for(int i = 0; i < n; i++) {
        int found = 0;
        for(int j = 0; j < n; j++) {
            if(strcmp(from[i], to[j]) == 0) {
                found = 1;
                break;
            }
        }
        if(!found) {
            startIndex = i;
            break;
        }
    }

    char start[20];
    strcpy(start, from[startIndex]);

    while(1) {
        int found = 0;
        for(int i = 0; i < n; i++) {
            if(strcmp(start, from[i]) == 0) {
                printf("%s -> %s\n", from[i], to[i]);
                strcpy(start, to[i]);
                found = 1;
                break;
            }
        }
        if(!found) break;
    }
}
