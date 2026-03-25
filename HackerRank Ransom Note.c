#include <stdio.h>
#include <string.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    char magazine[1000][20], note[1000][20];

    for(int i = 0; i < m; i++)
        scanf("%s", magazine[i]);

    for(int i = 0; i < n; i++)
        scanf("%s", note[i]);

    int used[1000] = {0};

    for(int i = 0; i < n; i++) {
        int found = 0;

        for(int j = 0; j < m; j++) {
            if(!used[j] && strcmp(note[i], magazine[j]) == 0) {
                used[j] = 1;
                found = 1;
                break;
            }
        }

        if(!found) {
            printf("No");
            return 0;
        }
    }

    printf("Yes");
    return 0;
}
