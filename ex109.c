#include <stdio.h>

int main (){

int n, i, soma=0;
scanf("%d", &n);
printf("%d = ",n);
for(i=1; i<n; i++){
    if(n%i==0){
        if(i==1){
            printf("%d ",i);
            soma=soma +i;
        }
        else{
            printf("+ %d ",i);
            soma=soma+ i;
        }

    }
}
if(soma==n){
    printf("=  %d (NUMERO PERFEITO)\n", soma);
}
else{
    printf("=  %d (NUMERO NAO E PERFEITO)\n", soma);
}
return 0;
}
