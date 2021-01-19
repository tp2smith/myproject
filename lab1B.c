#include <stdio.h>

main()
{
    int m, d, y;
    printf("Enter month, day and year separated by spaces: ");

    scanf("%d %d %d", &m, &d, &y);

    printf("The input '%1$d %2$d %3$d' is reformatted as %3$d/%1$d/%2$d and %3$d-%1$d-%2$d \n", m,d,y);

}