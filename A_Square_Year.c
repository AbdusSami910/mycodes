#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int s;
        scanf("%d", &s);
        int f = 0;
        
        for (int i = 0; i <= 99 && !f; i++) {
            for (int j = 0; j <= 99; j++) {
                if ((i + j) * (i + j) == s) {
                    printf("%d %d\n", i, j);
                    f = 1;
                    break;
                }
            }
        }
        
        if (!f) {
            printf("-1\n");
        }
    }
    
    return 0;
}
