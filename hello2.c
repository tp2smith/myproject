#include <stdio.h>

/*function definition*/

int sum (int i, int j) {
    int val = i+j;
    return val;
}

int main ()
{
    int x = 2, y = 3;
    int su  = sum(x,y);
    printf("sum is %d\n", su);
}