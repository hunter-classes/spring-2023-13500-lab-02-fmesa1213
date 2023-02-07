/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Lab2A

Wrote a program which asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program should keep asking to re-enter until a valid number is input.
After a valid value is obtained, print this number n squared.
*/

#include <iostream>
using namespace std;

int main ()
{
  int number;
  int square;
  
cout << "Please enter an integer:" << endl;
  cin >> number; 

  while (number <= 0 || number >= 100)  
  {
    cout << "Please re-enter:" << endl; 
    cin >> number;

    } 
  
  if ((0 < number) && (number < 100)) 
  {
    square = number*number;
    cout<< "Number squared is " << square <<endl;
  } 
  return 0;
}
