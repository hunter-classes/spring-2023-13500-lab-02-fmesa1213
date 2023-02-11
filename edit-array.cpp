/*
Author: Frida Mesa
Course: CSCI-135
Instructor:
Assignment: Lab 2C
Wrote a program that creates an array of 10 integers, and provides the user 
with an interface to edit any of its elements. 
*/

#include <iostream>
using namespace std;

int main()
{
int i;
int v;
int myData[10];
  
for(i = 0; i < 10; ++i)
{
  myData[i] = 1;
}
   
  do {
  cout << endl;
  for(int i = 0; i < 10; ++i)
  {
  cout << myData[i] << " ";
  }

    cout << endl << endl;
    cout << "Input index: ";
    cin >> i;
    cout << "Input value: ";
    cin >> v;

    if(i >= 0 && i < 10)

    {myData[i] = v;}

  } while(i >= 0 && i < 10);

  cout << "\nIndex out of range. Exit." << endl;

  return 0;
}
