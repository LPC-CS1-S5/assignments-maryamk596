//Write a program that  stores the following values in //five different variables:

//28, 32, 37, 24, and 33.

//The program should first calculate the sum of these //five variables and store the result in a separate //variable named sum . 
//Then, the program should divide the sum variable by 5 //to get the average.
//Display the sum and average with precision 3 on the //screen.


#include <iostream> 
#include <iomanip>
using namespace std; 

int main(){
    int n1 = 28;
    int n2 = 32;
    int n3 = 37; 
    int n4 = 24; 
    int n5 = 33; 
    int sum;
    float average; 

    sum = n1 + n2 + n3 + n4 + n5; 
    avergae = sum/5.0f;
    

    cout << setprecision(3) << average; 


    return 0; 
    
}