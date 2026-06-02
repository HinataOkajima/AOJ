#include<stdio.h>
int main(){
    int r,c,i,j,k,sum;
    int num[101][101];
    scanf("%d %d",&r,&c);
    r++;c++;
        for(i=0;i<r-1;i++){
            for(j=0;j<c-1;j++){
                scanf("%d",&num[i][j]);
            }
        }
        for(i=0;i<r-1;i++){
            sum=0;
            for(j=0;j<c;j++){
                if(j==c-1){
                    num[i][j]=sum;
                }
                sum+=num[i][j];
            }
        }
        for(i=0;i<c;i++){
            sum=0;
            for(j=0;j<r;j++){
                if(j==r-1){
                    num[j][i]=sum;
                    continue;
                }
                sum+=num[j][i];
            }

        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(j>0){
                    printf(" ");
                }
                printf("%d",num[i][j]);
            }
            printf("\n");
        }
    return 0;
}

