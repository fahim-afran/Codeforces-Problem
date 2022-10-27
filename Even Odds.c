/*
Question 4. codeforces ----- Even odds
*/

// Answer -------->

#include <stdio.h>

int main () {
    long long n, k, i, x;
    scanf("%lld %lld", &n, &k);
    if(n % 2 == 0){
        x = n / 2;
    }
    else{
        x = n/2 + 1;
    }
    if(k <= x){
        i=(k*2)-1;
    }
    else{
       i=(k-x)*2; 
    }
    printf("%lld",i); 
    return 0;
}