#include <stdio.h>
#define N 100010
int main()
{
    int n=1, v[N], i, d, num, k=0, j, c[10]={9,8,7,6,5,4,3,2,1,0};
    while(n>0){ 
        scanf("%d %d", &n, &d);

        if (n>0){
            scanf("%d",&num);
            
    
            for(i=n-1; i>=0;i--){
                v[i]=num%10;
                num=(num-num%10)/10; 
                  
            }

            for(i=0;i<10 && d!=0;i++){
                for(j=k;j<n && d!=0;j++){
                    if(v[j]==c[i]&& (n-j)>=d){
                        k=j+1;
                        printf("%d", v[j]);
                        d--;
                        
                        i=0;
                    }
                }
            }
            printf("\n");
            n=1;
            d=1;  
            k=0; 
                     
           
        }
    }
   
    return 0;
}