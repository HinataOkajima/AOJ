#include<stdio.h>
int main(){
   char x[1005];
   while(1){
    scanf("%s", x);

    if (x[0] == '0') break;

    long long sum = 0;
    int r = 0;

    while (x[r] != '\0'){
        int value = x[r] - '0';
        sum += value;
        r++;
    }
    printf("%lld\n", sum);
   }

    return 0;
}
