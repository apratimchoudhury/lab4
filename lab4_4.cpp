//Program for conversion of days into years weeks and days
//Include the library
#include<iostream>
#include<cmath>
using namespace std;
//write the main function
int main() 
{
  //declare variables
  int d1,d2,w,y;
  // take input
  cout<<"Enter the number of days"<<endl;
  //read input
  cin>>d1;
  //compute
  y=floor(d1/365);
  w=floor((d1%365)/7);
  d2=((d1%365)%7);
  //display
  cout<<"The time interval is "<<y<<" years "<<w<<" weeks "<<d2<<" days "<<endl;
  return 0;
}

