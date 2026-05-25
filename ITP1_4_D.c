#include <stdio.h>

int main(){
    int n, x;
    int i;
    int mn = 1000000, mx = -1000000;
    long long sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x < mn){
            mn = x;
        }
        if (x > mx){
            mx = x;
        }

        sum += x;
    }

    printf("%d %d %lld\n", mn,mx,sum);

    return 0;
}
