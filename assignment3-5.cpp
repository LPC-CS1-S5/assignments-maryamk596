#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 


int main()
{
  int num1, num2, num3;

  strand(time(0)); 

  // declare and initialize variables
  float num1 = random() %100;
        num2 = random() %100; 
        num3 = random() %100;
        sum,
        avg;

  // calculate 
  sum = num1 + num2 + num3;
  avg = sum / 3; 

  //format and output
  cout << setprecision(2)
       << fixed 
       << showpoint 

       << "Your first number is "
       << num1 
       << "\n"

       << "Your second number is "
       << num2
       << "\n"

       << "Your third number is "
       << num3
       << "\n"

       << "The sum of all values is "
       << sum
       <<"\n"

       <<"The average is "
       << avg 
       << "\n";

  return 0;
}