#include<stdio.h>
int main(){
    char ch[2000] = {0};
    char W[15] = {0};
    int i,j,k,l,m,n,o,p;

    m = 0;
    while(1){
        scanf("%c", &W[m]);

        if (W[m] == '\n') break;

        m = m+1;
    }

    n = 0;
    while(1){
        scanf("%c", &ch[n]);

        if (ch[n] =='T' && ch[n-1] == 'X' && ch[n-2] == 'E' && ch[n-3] == 'T' && ch[n-4] == '_' && ch [n-5] == 'F' && ch[n-6] == 'O' && ch[n-7] == '_' && ch[n-8] == 'D' && ch[n-9] == 'N' && ch[n-10] == 'E'){
            break;
        }
        n += 1;
    }

    p = 0;
    for (i = 0; i < n; i++){
        if(W[0] == ch[i] || W[0] == ch[i]+32 || W[0] == ch[i]-32) {
            if(ch[i+m] == ' ' || ch[i+m] == '\n' || W[0] == ch[0]  ) { 
                if(ch[i-1] == ' ' || ch[i-1] == '\n' ||  W[0] == ch[0]+32 || W[0] == ch[0]-32){
                o=o+1;
                for(j=0;j<m; j++) {
                    if(W[j] == ch[i+j] || W[j] == ch[i+j]+32 || W[j] == ch[i+j]-32){
                o=o+1;
                    }
                }
            }
        }

            if(o==m+1){
                p=p+1;
            }
            o=0;
        }
    }

    printf("%d\n",p);

    return 0;

}