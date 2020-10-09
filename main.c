#include"lab4.h"

int main()
{
  char customerCode;
  double usage, cost;
  int begMeterValue, endMeterValue;

  begMeterValue = readMeterValue("beginning");
  endMeterValue = readMeterValue("ending");

  usage = determineUsage(begMeterValue, endMeterValue);
  
  customerCode = readCustomerCode();

  cost = determineCost(usage, customerCode);

  /*printResults(cost, usage, customerCode, begMeterValue, endMeterValue);
  */
  //printf("%lf", cost);
  //char coust = 'r';
    //coust = (int) coust;
    //printf("%d", coust);
  return 0;   
}// end main

