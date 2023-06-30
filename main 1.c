/*os nmeros devem ser ate 9999 passar disso esta fora do escopo
quarta ordem--> 1000 ate 9999
terceira ordem --> 100 ate 999
segunda ordem -->   10 ate 99
primeira ordem --> 0 ate 9*/

#include <stdio.h>

int main(){

int n,m=0, c=0, d=0, u=0, na;

scanf("%d", &n);

if(n>9999){
    printf("Numero invalido!\n");
}
else {
    if ((n>=1000)&&(n<=9999)){// quarta geraçao
    m = n/1000;
    na = n%1000;
    c = na/100;
    na = na%100;
    d = na/10;
    u = na%10;

    printf("(quarta ordem) = %d = ", n);
    if (m==1) {printf("%d unidade de milhar +", m);}
    else {printf("%d unidades de milhar + ", m);}
    if (c==0)
       ;
    else if (c==1)
        printf("%d centena ", c);
         else printf(" %d centenas + ", c);
    if (d==0)
       ;
    else if (d==1)
        printf("%d dezena ", d);
         else printf("%d dezenas ", d);

    if (u==0)
        ;
    else if(u==1)
        printf("+ %d unidade ", u);
        else printf("+ %d unidades ", u);

    printf("= %d + ", m*1000);
    if (c!=0)
      printf("%d + ", c*100);

    if (d!=0)
     printf ("%d ", d*10);

    if(u!=0)
        printf("+ %d\n", u);
    }


}
return 0;
}
