//* [4] the program that generates a random number between 1 to 100 We are going to use the function getRdnum( ) with overloaded parameters. 
//When we call the function 
//getRdnum( ), without parameter, it will return a random number between 1 to 100
//getRdnum(n2), with a parameter, it will return a random number between 1 to n2
//getRdnum(n1, n2), it will return a random number between n1+1 to n2
//Make the overload functions for generating random numbers and also make the main function to drive and test all these overloaded functions.*/
#include < iostream>
#include < fstream>
#include <ctime> 
using namespace std; 

int getRdnum(); // 10 to 100
int getRdnum( int n2); // random number 1 to n2
int getRdnum(int n1, int n2); // random number n1+1 to n2

int main()
{
  int random; 
  srand(time(0));
  int n1 = 10; 
  int n2 = 100; 

  cout << "Random number 1 to 100 " << getRdnum() << endl;
  cout << "Random number 1 to n2: " << getRdnum(n2) << endl; 
  cout 
}