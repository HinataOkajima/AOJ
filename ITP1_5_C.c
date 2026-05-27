#include <stdio.h>

int main(){
    int m,n;

    while(1){
        scanf("%d %d", &m, &n);

        if (m == 0 && n == 0) break;

        for (int i = 1; i <= m; i++){
            for(int j = 1; j <=n; j++){

                if ((i + j) % 2 == 0){
                    printf("#");

            }else{
                printf(".");
            }
        }
        printf("\n");
        }
        printf("\n");
    }
return 0;
}