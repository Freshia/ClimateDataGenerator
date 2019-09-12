#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "generator.h"

#define MAX_COUNT_NUMBER = 100;
//double * presure_data (int count);

double *humidity_data(int count){
  static double humidity_values[100];
  double relative_humidity = 0;
    for(int i;i<count;i++){
        int random = rand() % (77 - 55) +55;
        relative_humidity = random + (rand() % (10 - 0) +0)*0.1;
        double dew_point = (100-relative_humidity)/5;
        random = rand() % (42 - 15) +15;
        double temperature = random + (rand()% (10 - 0) +0)*0.1;
        double humidity = 100.00 * ((611 * exp(5423 * ((1 / 273)) - (1 / (dew_point + 273)))
                              ) / (611 * exp(5423 * ((1 / 273) - (1 / temperature)))));
        humidity_values[i]= humidity;
    }
   return humidity_values;
}
double *wind_speed_data(int count){
    static double wind_speed_values[100];
    double wind_speed = 0;
    double longitude = 0;
    for(int i;i<count;i++){
       int random = rand() % (102 - 98) +98;
       longitude = random + (rand() % (10 - 0) +0)*0.1;
       printf("longitude:%02f",longitude);
       wind_speed = 0.0001 * longitude;
       wind_speed_values[i]=wind_speed;

    }
    return wind_speed_values;
}
double *pressure_data(int count){
    static double pressure_values[100];
    double pressure = 0;
    for(int i=0;i<=count;i++){
        int random = rand() % (42 - 15) +15;
        double temperature = random + (rand() % (10 - 0) +0)*0.1;
        pressure = 101325 * exp(((0.00 - 9.81) * 0.0289644 * (200)) /
                                     (8.31444598 * (temperature + 273)));
        pressure_values[i] = pressure;
    }
    return pressure_values;
}


// int main() {
//    srand( (unsigned)time( NULL ) );  
//     double *x;
//     x = wind_speed_data(3);
//     for(int i=0;i<3;i++){
//       printf("%0.5f\n",*(x+i));
//     }
   
//}