#include <stdio.h>

int main(void){
    int i,n,x;

    if (scanf("%d", &n) != 1) return 0;

    for (i = 1; i <= n; i++){
        if (i % 3 == 0){
            printf(" %d" , i);
            continue;
        } else {
            x = i;
            while (x > 0){
                if (x % 10 == 3){
                    printf(" %d", i);
                    break;
                }
                x /= 10;
            }
        }
    }

    printf("\n");
    return 0;
}