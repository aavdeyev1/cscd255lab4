#ifndef LAB4_H
#define LAB4_H

#include <stdio.h>
#include <stdlib.h>


int readMeterValue(char * str);
double determineUsage(int begMeterValue, int endMeterValue);
char readCustomerCode();
double determineCost(double usage, char customerCode);
//str is the "beginning" reading fist, then "ending" value,
/* 444400003 and the ending reading was 444400135, then the customer
used 13.2 gallons of water during the billing period.
lower, on the age, greater than

*/

#endif