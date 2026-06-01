#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);

    int tenants[4][3][10] = {0};

    for (int i = 0; i < n; i++){
        int b, f, r, v;
        scanf("%d %d %d %d", &b, &f, &r, &v);
        tenants[b-1][f-1][r-1] += v;
    }

    for (int b = 0; b < 4; b++) {
        for (int f = 0; f < 3; f++){
            printf(" ");
            for (int r = 0; r < 10; r++){
                printf("%d", tenants[b][f][r]);

                if (r < 9) printf(" ");
            }
            printf("\n");
        }
        if (b < 3){
            printf("####################\n");
        }
    }

    return 0;
}