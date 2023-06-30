#include <stdio.h>
#define N 9
int main(){

    int v[N], n, i, j, qtd, p, x, y, g, men, k;

    scanf("%d", &n);

    for(i=0; i<n;i++){
        qtd=0;
        for(j=0;j<N;j++){
            scanf("%d", &v[j]);
            qtd=qtd+v[j];
        }
        qtd=qtd-100;

        for(j=0;j<N;j++){
            men=v[j];
            k=j;
            for(p=j+1;p<N;p++){
                if(men>v[p]){
                    men=v[p];
                    k=p;
                }
            }
            g=v[j];
            v[j]=v[k];
            v[k]=g;
        }

        for(j=0;j<N;j++){
            for(p=0;p<N;p++){
                if(v[j]+v[p]==qtd){
                    x=j;
                    y=p;
                }
            }
        }

        for(j=0;j<N;j++){
            if(j!=x && j!=y){
                printf("%d\n", v[j]);
            }
        }


    }





    return 0;
}
