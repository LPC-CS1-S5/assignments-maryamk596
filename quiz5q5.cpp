#include <iostream>
using namespace std;

int main()
{
  int prime, start, finish;
  cout << "Enter tow numbers and I will tell you all the prime numbers\n";
  cin >> start >> finish; 

  while (start < 1 || start > 100 && finish <=2 || finish >=100 && start > finish)
  {
    cout << "error \n";
    cout << "Enter tow numbers and I will tell you all the prime numbers\n";
    cin >> start >> finish;
    
  }
}