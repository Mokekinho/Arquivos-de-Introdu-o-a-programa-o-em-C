#include <stdio.h>


int main (){

double n, e, a=1, b, ei;
scanf("%lf %lf", &n, &e);
b=n;
ei=1;
while ( ei > e){
    a = (a+b)/2.0;
    b = n/a;
    ei = (a*a)- n;

    printf("r: %.9lf, err: %.9lf\n", a, ei);
}






return 0;
}
