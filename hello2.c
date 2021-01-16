#include <stdio.h>

/*function definition*/

int sum (int i, int j, int k) {
    int val = i+j+k;
    return val;
}

int main ()
{
    int x = 2, y = 3, z = 5;
    int su  = sum(x,y,z);
    printf("sum is %d\n", su);
}