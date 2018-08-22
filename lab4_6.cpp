//Program for finding the area of a triangle
//Include the library
#include<iostream>
using namespace std;
//write the main function
int main() 
{
  //declare variables
  float a,b,h;
  // take input
  cout<<"Enter the base of the triangle"<<endl;
  //read input
  cin>>b;
  //take input
  cout<<"Enter the height of the triangle"<<endl;
  //read input
  cin>>h;
  //compute
  a=0.5*b*h;
  //display
  cout<<"The area of the triangle is "<<a<<endl;
  return 0;
}

