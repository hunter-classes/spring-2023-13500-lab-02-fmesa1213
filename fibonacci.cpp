/*
Author: Frida Mesa
Course: CSCI-135
Instructor:
Assignment: Lab 2D
This code uses an array of ints to compute and print all Fibonacci numbers from F(0) to F(59).
*/

#include <iostream>
using namespace std;

int main()
{

  long long int fib[60];
 
  fib[0] = 0;
  fib[1] = 1;	
	
	cout << 0 << "\n" << 1 << "\n";
	
for(i = 2; i < 60; i++)
{
fib[i] = fib[i-1] + fib[i-2];
}
for (i = 0; i < 60; i++)
{
printf("%3d %6d\n", i, fib[i]); 
}
return 0;
}
