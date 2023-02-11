/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: Lab2B
Wrote a program that asks the user to input two integers L and U 
(representing the lower and upper limits of the interval), 
and print out all integers in the range L ≤ i < U separated by spaces. 
*/

#include <iostream>
using namespace std;

int main()
{

int lower;
int upper;

cout << "Enter lower limit " << endl;
cin >> lower;
cout << "Enter Upper limit " << endl;
cin >> upper;

for(int i = lower;i < upper;i++)
{
cout << i << " " << endl;
}
  return 0;
}
