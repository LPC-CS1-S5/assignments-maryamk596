#include <iostream> 
#include <fstream>
#include <cstdlib>
using namespace std;
int getRdnum (void)
{
  int rdnum;
  rdnum = rand() % 50; 
  for (int i = 0; i < 10; i++)
  {
    rdnum = (rand () % 50) + 1; 
    cout << rdnum << endl; 
  }
} 
int isGreater(int &n)
{
  static int perc = 0;
  if (perc ==0)
  {
    perc = n; 
    return (0);
  }
  if (perc < n)
  {
    perc = n; 
    return(1);
  }
  else 
  {
    perc = n; 
    return(0); 
  }

}
int getRdnum();
int isGreater (int &); 
int main() 
{

  int rdnum, i = 10, j = 10;
  ofstream ofs; 
  ofs.open("numbers.txt");
  if(ofs.fail())
  {
    cerr << "Error! can not open file:" << endl;
    exit(0);
  }
  while (i < 10)
  {
    rdnum = getRdnum();
    j = isGreater(rdnum);

    if (j == 1)
  {
    ofs << rdnum << endl; 
    }
  }
}