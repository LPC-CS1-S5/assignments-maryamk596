//Make your program that asks for two user input num1 and num2 (integer) and calculate the integer division n1/n2 if n1 > n2. Otherwise n2/n1. And then, the result must be written into the file "question5.txt". If the two numbers are the same, we will stop the program.

#include <iostream> 
#include <fstream>
using namespace std; 

void getInout(int &, int &); 
int isSame(int, int);
int intDivision(int, int); 
void fileWrite(ofstream &, int);

int main()
{
  int num1, num2; 
  int div; 

  ofstream ofs;
  ofs.open("question5.txt");
  if (ofs.fail())
  {
    cerr << "File open Error\n"; 
    exit(0);
  }
  while(1)
  {
    getInput(num1, num2); 
    if (isSame(num1, num2))
      break; 
    div = intDivision(num1, num2); 
    fileWrite(ofs, div);
  }
  ofs.close();
}

void getInput(int &n1, int &n2)
{
  cout << "enter the 1st number: " << endl; 
  cin >> n1; 
  cout << "enter the 2nd number: " << endl; 
  cin >> n2; 
}
int isSame(int n1, int n2)
{
  if (n1 == n2)
    return(1); 
  return(0);
}

int intDivision(int n1, int n2)
{
  int result;
  if (n1 > n2)
  {
    result = (n1 / n2); 
  }
  else 
    result = (n1 / n2); 
    return result;

}
void fileWrite (ofstream &ofs, int div)
{
    ofs << div << endl;
    if(ofs.fail())
    {
      cerr << "File Write Errror: \n"; 
      exit(0); 
    }
}