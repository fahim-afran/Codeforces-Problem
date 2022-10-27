/*
Question 3. codeforces -------->  Vanya and Fence
*/

// Answer --------->

#include <stdio.h>

int main () {
    int i, a, n, h;
    scanf("%d %d", &n, &h);
    int w = 0;
    for (i = 1; i <= n ; i++)
    {
        scanf("%d", &a);
        if(h < a){
            w += 2;
        }
        else{
            w++;
        }
    }
    printf("%d", w);
    return 0;
}