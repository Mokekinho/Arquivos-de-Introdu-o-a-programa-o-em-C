/* os numeros devem ser até 9999 passar disso está fora do escopo
   quarta ordem --> 1000 até 9999  --> mcdu
   terceira ordem --> 100 até 999
   segunda ordem --> 10 até 99
   primeira ordem --> 0 até 9
 */
 #include <stdio.h>
  
 int main(){
   int n, m=0, c=0, d=0, u=0, na;
   scanf("%d", &n);
   if(n>9999)
     printf("Numero invalido!\n");
    else {if((n>=1000)&&(n<=9999))   //quarta geração
           { m = n/1000;
             na = n%1000;
             c = na/100;
             na = na%100;
             d = na/10;
             u = na%10;
            printf("(quarta ordem) %d = ",n);
            if(m==1)
              printf("%d unidade de milhar ",m);
             else printf("%d unidades de milhar ",m);
            if(c==0)
              ;
              else if(c==1)
                    printf("+ %d centena ", c);
                   else printf("+ %d centenas ", c);
            if(d==0)
              ;
              else if(d==1)
                    printf("+ %d dezena ", d);
                   else printf("+ %d dezenas ", d);
            if(u==0)
              ;
              else if(u==1)
                     printf("+ %d unidade ",u);
                    else printf("+ %d unidades ",u);
           printf("= %d ", m*1000);
           if(c!=0)
            printf("+ %d ",c*100);
           if(d!=0)
             printf("+ %d ",d*10);
           if(u!=0)
             printf("+ %d\n",u);
         }else if((n>=100)&&(n<=999))   //terceira geração
           { c = n/100;
             na = n%100;
             d = na/10;
             u = na%10;
            printf("(terceira ordem) %d = ",n);
            if(c==1)
               printf("%d centena ", c);
             else printf("%d centenas ", c);
            if(d==0)
              ;
              else if(d==1)
                    printf("+ %d dezena ", d);
                   else printf("+ %d dezenas ", d);
            if(u==0)
              ;
              else if(u==1)
                     printf("+ %d unidade ",u);
                    else printf("+ %d unidades ",u);
           printf("= %d ", c*100);
           if(d!=0)
             printf("+ %d ",d*10);
           if(u!=0)
             printf("+ %d\n",u);
         }else if((n>=10)&&(n<=99))   //segunda geração
           { d = n/10;
             u = n%10;
            printf("(segunda ordem) %d = ",n);
            if(d==1)
               printf("%d dezena ", d);
             else printf("%d dezenas ", d);
            if(u==0)
              ;
              else if(u==1)
                     printf("+ %d unidade ",u);
                    else printf("+ %d unidades ",u);
           printf("= %d ", d*10);
           if(u!=0)
             printf("+ %d\n",u);
         }else {   //primeira ordem
              u = n;
              printf("(primeira ordem) %d = ",n);
            if(n==1)
               printf("%d unidade ", n);
             else printf("%d unidades ", n);
           printf("= %d ", n);
         }
        }
 
 return 0;
 }
