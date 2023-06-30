#include <stdio.h>

int main() {

int n, f1, f2,i,p, flag=0;
scanf("%d %d %d", &n, &f1, &f2);

for(i=0; i<n;i++){
  scanf("%d", &p);

  if(i>1){
    if (p == f1 + f2){
        printf("OK\n");
    }
    else{
        printf("Nao e Fibonacci\n");
        flag=1;
    }

  }
  else{ printf("OK\n");

  }

f1=f2;
f2=p;

}



if (flag==0){
    printf("A serie informada e de Fibonacci");
}



return 0;
}
