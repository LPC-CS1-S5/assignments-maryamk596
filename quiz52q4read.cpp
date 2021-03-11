#include <iostream>
#include <fstream>

using namespace std; 

int main()
{ 
  ifstream ifs; 

  int num;
  string nam; 

  ifs.open("employee.txt");
  if (ifs.fail())
  {
    cerr << "File open error\n";
    exit (0); 
  }

  int i = 0; 
  while (ifs >> name)
  {
    ifs >> name; 
    i++; 
  }

  ifs.close();
}