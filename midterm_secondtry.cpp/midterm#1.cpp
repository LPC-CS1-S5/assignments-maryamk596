/*[1] Show the result of the following code and elaborate on the process of the loop iterations and how many iterations it has. (20pts).  */
#include <iostream>
using namespace std;

int main()
{ 
    const int N=5, M=5;
      int   i, j;
      for (i=0;i<N;i++){
          for(j=i; j<M-i; j++)
            cout << " (" << i << "," << j << " )" ; 
          cout << endl;
      }
}

