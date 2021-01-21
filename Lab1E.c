/***************************************
* EECS2031ON – Lab1E*
* Author: Smith, Taylor *
* Email: tp2smith@my.yorku.ca *
* eecs_username: tp2smith *
* York Student #: 212086005
****************************************/

#include <stdio.h>

float sum(float i, float j);

void greet(int i);

int main()
{  
   int a = 2031, n;
   float x, y;

   greet(a);

   printf("Enter the number of interactions: ");

   scanf("%d",&n);

   for (int i = 1; i <= n; i++) {
       printf("Enter two floats seperated by two ##: ");
       
       scanf("%f##%f", &x, &y);
       
       float su= sum(x,y);
   
       printf( "%.3f + %.3f = %f (%.2f)\n", x,y, su, su);

   }
      return 0;
   
}

/* function definition */
float sum (float i, float j){
   return i+j;             
}

void greet(int i){
   printf("Hello %d!\n", i);
}