#include <stdio.h>

int main (){
    int x, y;

    while(1){
        scanf("%d %d", &x, &y);

        if (x == 0 && y == 0){
            break;
        }

        int c = 0;

        for (int i = 1; i <= x; i++){
            for (int j = i + 1; j <= x; j++){
                for (int k = j + 1; k <= x; k++){
                    if (i + j + k == y){
                        c++;
                    }
                }
            }
        }
        printf("%d\n", c);
    }
    return 0;
}