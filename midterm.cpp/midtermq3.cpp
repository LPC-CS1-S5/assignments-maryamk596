// [3] Make the program that writes the numbers into the file “numbers.txt”. 
// We are going to make N(defined as 10) random numbers that should be between 1 to 50. When each number is generated, we check the number that is greater than the preceding number. If so, the number will be written into the file "numbers.txt". 
// For example, we assume that there are 10 numbers: 10 5 6 8 3 25 15 10 45 30. 
// In this example, we need to write 6 8 25 45 into a file. 
// We will skip the first number because there is no preceding number. */
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
// in this program i used one function to generate 10 random number in the range 1 to 50. i used a for loop in this function to generate 10 random number. 
// then i used another function to check if the number is greater then the perceding number, in this function i used a static variable to keep the perceding variable value stable so we can compare to next coming variable. i used two if statement 