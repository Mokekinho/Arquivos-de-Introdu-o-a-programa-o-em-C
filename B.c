#include <stdio.h>

int main() {

 long long int a, b, c ;
 long double z, d;
 char l;

 scanf("%lld %lld %lld %c", &a, &b, &c, &l);


 if(l=='A'){
        d= b/2.0;
        z= c/2.0;

        a= a + (z*5 + d*3);
        printf("%lld\n", a);
 }

 if(l=='B'){
        d= a/3.0;
        z= ((c/2.0)*5)/3.0;

        b= b + (z*2 + d*2);
        printf("%lld\n", b);
 }


 if(l=='C'){
        d= a/5.0;
        z= (((b/2.0)*3)/5.0);

        c= c + (z*2 + d*2);
        printf("%lld\n", c);
 }







    return 0;
}
