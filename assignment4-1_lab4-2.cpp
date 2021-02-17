#include <iostream>
using namespace std; 


int main ()
{
  const double w02= 1.10;
  const double w06 = 2.20;
  const double w10 = 3.70; 
  const double w20 = 4.80;
  double RATE, weight, distance;
  double total_price;
  
  cin >> weight >> distance ; 
  
  if ((weight < 0) || (weight > 20))
    exit (0);
  
  
  if (weight <= 2) 
    RATE = w02;
  else if (weight < 6) // 2-6
    RATE = w06; 
  else if (weight < 10) 
    RATE = w10;
  else if (weight < 20) 
    RATE = w20;
  
  if ((distance < 10) || (distance > 3000))
    exit (0);
  
   if (distance > 500) 
   total_price = distance / 500 * RATE; 
  cout <, " Total price: " total_price << endl;cout << "Weight: " weightt << endl; 
  cout  << "Distance: " distance << endl; 
}
