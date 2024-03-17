#include<stdio.h>
#include<conio.h>
int main() {
    int x, n;
    scanf("%d%d",&x,&n);
    long long p = 1; //smallest values of n
    long long term = x;
    int c = 0; //counter for no of multiplications
    while(n > 0) {
        if(n % 2 == 1){
            p *= term;
            c++;
        }
        term = term * term;
        c++;
        n = n/2;

    }
    printf("%lld\n",p);
    printf("%d", c);

    return 0;
}