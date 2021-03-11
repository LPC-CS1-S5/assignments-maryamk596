#include < iostream> 
#include < iomanip>
#include <fstream>
#include <string> 
using namespace std; 


int main; 
{
  ifstream ifs;
  int ID;
  string name, dep; 
  double salary; 


  ifs.open("employee.txt");
  if (ofs.fail())
    cerr << "File Open Error";
    exit (0);
  }

  cout << "Please enter the number of employees: \n"; 
  cin >> N;
  ofs << N << endl; 

  for (int i = 0; i < N; i++)
  {
    cout << "Please enter the ID, name, department, and salary for this employee, in that order: \n";
    cin >> id >> name >> dep >> salary; 
    ifs << id << endl; 
    ifs << name << endl; 
    ifs << dep << endl; 
    ifs << salary << endl; 

    ifs.close();
    cout << "File written \n";
    return 0;
    {}
  }
}