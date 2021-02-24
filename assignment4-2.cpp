#include <iostream>
using namespace std; 

int main ()
{
  
    int num1, num2;
    
    num1 = 10; 
    num2 = 20;
  
    if ( num1 > 0 ) 
    {
      if ( num2 > 0 )
          cout << " num2 > 0" << endl; 
          // num1 > 0 && num2 > 0 
    }
  
  
    if (num1 > 0 )
        cout  << "num1 > 0" << endl; 
    else if (num2 > 0 )
        cout << " num2 > 0" << endl; 
        // num1 <= 0 and num2 > 0 
    else if ( num3 > 0)
        cout << "num3 > 0 " << endl; 
  
  
  
  return 0; 
}
