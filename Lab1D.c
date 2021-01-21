/***************************************
* EECS2031ON – Lab1D *
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
   int a = 2031;
   float x, y;

   greet(a);
   
   printf("Enter two floats seperated by two ##: ");
   
   scanf("%f##%f", &x, &y);

   float su= sum(x,y);
   
   printf( "%f + %f = %f\n", x,y, su);

   return 0;

}

/* function definition */
float sum (float i, float j){
   return i+j;             
}

void greet(int i){
   printf("Hello %d!\n", i);
}

