#include <stdio.h>
#define N 100000

int main (){

int vetor[N], i, n=1, maior, qtd, j;


while(n!=0){
    scanf("%d", &n);
    if(n!=0){

    for(i=0;i<n && n!=0; i++){
        scanf("%d", &vetor[i]);
        if(i==0){
            maior=vetor[0];
        }
        if (maior<vetor[i])
            maior=vetor[i];
    }
    for(i=0;i<=maior;i++){
        qtd=0;
        for(j=0; j<n; j++){
            if(vetor[j]<=i){
                qtd++;
            }
        }
         printf("(%d) %d\n", i, qtd);
    }
    }
}
return 0;
}
