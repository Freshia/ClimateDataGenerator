#include<stdio.h>
#include<math.h>
#include<time.h>
#include "../lib/generator.h"

//double * pressure_data (int);
int main(){
    srand( (unsigned)time( NULL ) ); 
    double *x;
    x = pressure_data(5);
    for (int i=0;i<5;i++){
         printf("%0.5f\n",*(x+i));
    }
}