//Program for finding the third angle of a triangle given two angles
//Include the library
#include<iostream>
using namespace std;
//write the main function
int main() 
{
  //declare variables
  float a1,a2,a3;
  // take input
  cout<<"Enter the the first angle in degrees"<<endl;
  //read input
  cin>>a1;
  //take input
  cout<<"Enter the the second angle in degrees"<<endl;
  //read input
  cin>>a2;
  //compute
  a3=180-(a1+a2);
  //display
  if (a3<0)
  {
     cout<<"The entered angles are not valid for a triangle"<<endl;
     return 0;
  }   
  cout<<"The third angle is "<<a3;
  return 0;
}

