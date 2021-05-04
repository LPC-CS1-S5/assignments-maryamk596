//the program that generates a random number between 1 to 100 We are going to use the function getRdnum( ) with overloaded parameters. 
//When we call the function 
//getRdnum( ), without parameter, it will return a random number between 1 to 100
//getRdnum(n2), with a parameter, it will return a random number between 1 to n2
//getRdnum(n1, n2), it will return a random number between n1+1 to n2
//Make the overload functions for generating random numbers and also make the main function to drive and test all these overloaded functions.
//(1) Create the program code on your Github classroom repository and commit it.
//(2) Elaborate on your algorithms and explain the debugging experiences

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int getRdnum(void);
int getRdnum(int);
int getRdnum(int, int);

int main() {
        int rdnum;
        srand(time(0));

        cout << "Random number between 0 to 100: " << getRdnum() << endl;
        cout << "Random number between 20 to 100: " << getRdnum(20) << endl;
        cout << "Random number between 30 to 40: " << getRdnum(30, 40) << endl;
}

int getRdnum(void) {
        return rand() % 100 + 1;
}
int getRdnum(int n) {
        int num;
        num = rand() % 20 + 1;
        return num;
}
int getRdnum(int n1, int n2) {
        int num;
        num = rand() % (n2 - n1 + 1) + n1;
        return num;
}