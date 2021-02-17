#include <iostream>
#include <iomanip>
using namespace std; 

int main() { 

  double price = 99; 
  int numsold; 
  double originalprice; 
  double discount; 
  double discountamount; 
  double totalprice; 
  
  cout << "Enter units sold: ";
  cin >> numsold; 
  
  cout << setprecision (2) << fixed; 
  
  if (numsold < 0) { 
    cout << "Input Error!\n";
  }
  
  if (numsold >= 10 && numsold <= 19) { 
    discount = .2; 
    originalprice = numsold * price; 
    discountamount = discount * originalprice; 
    totalprice = originalprice - discountamount; 
    cout << "The original amount is $" << originalprice << "\n";
    cout << " The discounted price is $" << totalprice << "\n";
  }
  else if (numsold >= 20 && numsold <= 49){
    discount = .3;
    orginalprice = numsold * price; 
    discountamount = discount * originalprice; 
    totalprice = originalprice - discountamount; 
    cout << "The orignal price is $" << originalprice << "\n";
    cout << " The discounted price is $" << totalprice << "\n";
    }
    else if (numsold >= 50 && numsold <= 99) {
      discount = .4;
      originalprice = numsold * price; 
      discountamount = discount * originalprice; 
      totalprice = originalprice - discountamount; 
      cout << "The original price is $" << originalprice << "\n";
      cout << "The discountedprice is $" << totalprice << "\n";
      } 
      else { 
        if (numsold >= 100) { 
          discount = .5;
          originalprice = numsold * price; 
          discountamount = discount * originalprice; 
          totalprice = originalprice - discountamount; 
          
          cout << "Your original price is " << originalprice << "\n";
          cout << "Your discount is " << discountprice;
          cout << "Your total price is " << totalprice; 
      } 
      else{
        cout<< " Enter a positive number" << endl; 
        exit (0); 
      }
    }
    } 
   
          
