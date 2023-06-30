#include <stdio.h>

int main (){
int flag=0;
float n, i=1, j=1, d=0;
 scanf("%f", &n);

 for(i=1; i<1000; i++){
   for(j=1000; j>1;  j--){
    if(i/j==n&& flag==0){
            printf("%.0f/%.0f\n", i, j);
            flag=1;


            }
   }
 }


return 0;
}
