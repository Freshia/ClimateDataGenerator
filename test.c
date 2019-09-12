#include<stdio.h>
#include "generator.h"

//double * pressure_data (int);
int main(){
    double *x;
    x = pressure_data(5);
    for (int i=0;i<5;i++){
         printf("%0.5f\n",*(x+i));
    }
}