//BenjaminKramer
//12-9-2020

//An example of a Wage Calculator
//in C++ using the framework established
//on cplusplus.com. I think it would be
//cool to be able to implement a
//PHP API for use in a business.
#include <iostream>
#include <stdlib.h>

using namespace std;

//Global Variables and
//Constants to be used in
//the wage calculator
int hours_worked;
char employee_category;
double net_wage;

const double HOURLY_RATE_MANAGEMENT = 20.60;
const double HOURLY_RATE_WAREHOUSE_WORKERS = 8.30;
const double HOURLY_RATE_INFOTECH_WORKERS = 18.50;
const double TAX_RATE_MANAGEMENT= 0.50;
const double TAX_RATE_WAREHOUSE = 0.20;
const double TAX_RATE_INFOTECH = 0.45;
const double TIME_AND_HALF_M = 30.75;
const double TIME_AND_HALF_W = 12.45;
const double TIME_AND_HALF_I = 27.75;

//main
int main () {
  cout << "\n\t\t\t WAGE CALCULATOR FOR DISCLOSED COMPANY\n" << endl; 
  cout << "\nSELECT CLASSIFICATION: " << endl <<endl;
  cout << "'M' for Management, 'W' for Warehouse, 'I' for InfoTech:[M/W/I]: \n\n";
  cin >> employee_category;
  cout << "" <<endl;
  //Hours the employee worked
  cout << "ENTER HOURS WORKED: ";
  cin >> hours_worked;
  //Checking that the 'hours worked'
  //are a legitimate value
    while(cin.fail() || hours_worked < 0) {
      if(cin.fail()) {
          cin.clear();
          string input;
          cin>>input;
          cout<<"\n\t\""<<input<<"\" Please re-enter hours worked using a value greater than 0: ";
          cin>>hours_worked;
      }
    }

  //Wage calculator for management
    if (hours_worked <= 40) {
      if (employee_category =='m'||employee_category =='M') {
          net_wage = (HOURLY_RATE_MANAGEMENT * hours_worked)-((HOURLY_RATE_MANAGEMENT * hours_worked)*TAX_RATE_MANAGEMENT);
      }
    }
    else {
      if (hours_worked > 40) {
        if (employee_category =='m'||employee_category =='M')
            net_wage = (((HOURLY_RATE_MANAGEMENT * 40)+((hours_worked-40)*TIME_AND_HALF_M))-((HOURLY_RATE_MANAGEMENT * 40)+((hours_worked-40)*TIME_AND_HALF_M))*TAX_RATE_MANAGEMENT);
      }
    }
  //Wage calculator for warehouse workers
    if(hours_worked <= 40) {
        if (employee_category =='w'||employee_category =='W') {
            net_wage = (HOURLY_RATE_WAREHOUSE_WORKERS * hours_worked)-((HOURLY_RATE_WAREHOUSE_WORKERS * hours_worked)*TAX_RATE_WAREHOUSE);
      }
    }
    else {
      if (hours_worked > 40) {
        if (employee_category =='w'||employee_category =='W')
            net_wage = (((HOURLY_RATE_WAREHOUSE_WORKERS * 40)+((hours_worked-40)*TIME_AND_HALF_W))-((HOURLY_RATE_WAREHOUSE_WORKERS * 40)+((hours_worked-40)*TIME_AND_HALF_W))*TAX_RATE_WAREHOUSE);
      }
    }
  //Wage calculator for infotech workers
    if(hours_worked <= 40) {
      if (employee_category =='i'||employee_category =='I') {
            net_wage = (HOURLY_RATE_INFOTECH_WORKERS * hours_worked)-((HOURLY_RATE_INFOTECH_WORKERS * hours_worked)*TAX_RATE_INFOTECH);
      }
    }
    else {
      if (hours_worked > 40) {
        if (employee_category =='i'||employee_category =='I')
            net_wage = (((HOURLY_RATE_INFOTECH_WORKERS * 40)+((hours_worked-40)*TIME_AND_HALF_I))-((HOURLY_RATE_INFOTECH_WORKERS * 40)+((hours_worked-40)*TIME_AND_HALF_I))*TAX_RATE_INFOTECH);
      }
    }

  cout << "\n\n\t\t\t CALCULATIONS" << endl;
  cout << "\t\t\t-------------------" << endl;
  cout << "\t\t\t Employee Category: " << employee_category <<endl;
  cout << "\t\t\t Hours Worked:\t" << hours_worked <<endl;
  cout << "\n\t\t\t NET WAGE: \t$" << net_wage <<endl << endl;

  return 0;
}
