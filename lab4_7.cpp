//Program for finding the area of an equilateral triangle
//Include the library
#include<iostream>
#include<math.h>
using namespace std;
//write the main function
int main() 
{
  //declare variables
  float a,A;
  // take input
  cout<<"Enter the side of the equilateral triangle"<<endl;
  //read input
  cin>>a;
  //compute
  A=sqrt(3)*0.25*a*a;
  //display
  cout<<"The area of the triangle is "<<A<<endl;
  return 0;
}

