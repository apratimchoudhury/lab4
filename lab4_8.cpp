//Program for finding the total, average, and percentage of the marks of five students
//Include the library
#include<iostream>
using namespace std;
//write the main function
int main() 
{
  //declare variables
  float t,a,p,m1,m2,m3,m4,m5;
  // take and read input
  cout<<"Enter the marks of the 5 subjects (out of 10)"<<endl;
  cout<<"Subject 1:";
  cin>>m1;
  cout<<"Subject 2:";
  cin>>m2;
  cout<<"Subject 3:";
  cin>>m3;
  cout<<"Subject 4:";
  cin>>m4;
  cout<<"Subject 5:";
  cin>>m5;
  if(m1>10||m2>10||m3>10||m4>10||m5>10)
    {
      cout<<"The entered marks are not valid"<<endl;
      return 0;
    }   
  //compute
  t=m1+m2+m3+m4+m5;
  a=t/5;
  p=(t/50)*100;
  //display
  cout<<"The total is "<<t<<endl;
  cout<<"The average is "<<a<<endl;
  cout<<"The percentage  is "<<p<<"%"<<endl;
  return 0;
}

