#include <ctype.h>
#include "lab4.h"


int readMeterValue(char * begORend)
{
    int value;
    printf("Please enter the %s meter value ", begORend);
    scanf("%d", &value);
    while(fgetc(stdin) != '\n'){}

    if (value > 999999999)
    {   printf("Error: The meter’s dial only has nine digits\n");
        exit(2);
    }

    return value;
}


double determineUsage(int begMeterValue, int endMeterValue)
{
    double meterusage;
    if (begMeterValue >= endMeterValue)
        meterusage = 1000000000 - begMeterValue + endMeterValue;

    else
        meterusage = endMeterValue - begMeterValue;
    
    return meterusage/10;
}


char readCustomerCode()
{
    char code;
    printf("Please enter customer's code ");
    scanf("%c", &code);

    return tolower(code);
}


double determineCost(double usage, char customerCode)
{
    double cost;
    double fees;
    int code;
    code = (int) customerCode;

    switch(code)
    {
        case 99: cost = 1000 + usage * .00002; //commercial
            break;
        case 105: //industrial
            if (usage < 4000000.1)
                cost = 1000 + usage * .00002;
            else if (usage < 10000000.1)
                cost = 2000 + usage * .00001;
            else 
                cost = 2500 + usage * .0025;
            break;
        case 114: cost = 15 + usage * .0005; //residential
            break;

        default: 
            printf("Invalid customer code\n");
            exit(2);
    }

    return cost;
}



  void printResults(double cost, double usage, char customerCode, int begMeterValue, int endMeterValue)
  {
      printf("\nThe customer's code is %c\n", customerCode);
      printf("The customer's reading at the beginning of the month was %d\n", begMeterValue);
      printf("The customer's reading at the end of the month was %d\n", endMeterValue);
      printf("The amount of water the customer used is %.1lf gallons\n", usage);
      printf("The customer is being billed for $%.2lf\n", cost);

  }