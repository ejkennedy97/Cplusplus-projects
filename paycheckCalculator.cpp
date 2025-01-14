// Paycheck Calculator

/* Overview: This program will calculate the gross pay, deductions, and net pay of an employee based on the number of hours worked
Eastern Oregon University
CS221 Assignment
*/

#include <iostream>
using namespace std;


void initialize(int &x, int &y, char &z){
  x = 0;
  y = 0;
  z = ' ';
}

void getHoursRate(double &hours, double &rate){
  cout << "Enter hours worked: ";
  cin >> hours;
  cout << "Enter hourly rate: ";
  cin >> rate;
}

double payCheck(double hours, double rate){
  if (hours <= 40){
    return hours * rate;
  } else {
    return 40 * rate + (hours - 40) * rate * 1.5;
  }
}

void printCheck(double hours, double rate, double amount){
  cout << "Hours worked: " << hours << endl;
  cout << "Hourly rate: " << rate << endl;
  cout << "Amount paid: " << amount << endl;
}

  int main() {
    int x, y;
    char z;
    double rate, hours, amount;

    initialize(x,y,z);
    getHoursRate(hours,rate);
    amount = payCheck(hours,rate);
    printCheck(hours,rate,amount);

    return 0;
  }


  