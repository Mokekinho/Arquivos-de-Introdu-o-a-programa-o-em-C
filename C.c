#include <stdio.h>

int main (){

long long int x, y, z;

scanf("%lld", &x);
printf("%lld\n", x);
while(x>=10 ){

    y=x/10;
    z=x%10;
    x=(y*3) +z;
    printf("%lld\n", x);
}

return 0;
}
