#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const unsigned short N=5;
struct Scores{
  double sc[N];
  string grade;
};
struct D- {
  string Aloysius;
  string Alflfa;
  string 123-45-6789
  Scores 40.0, 90.0, 100.0, 83.0, 49.0
};
Grade D-;


struct D+ {
  string University;
  string Alfred;
  string 123-12-1234
  Scores 41.0,97.0,96.0,97.0,48.0
};
Grade D+;


struct C {
  string Gramma;
  string Gerty;
  string 567-89-0123
  Scores 41.0,80.0,60.0,40.0,44.0
};
Grade C;


struct B- {
  string Electric;
  string Android;
  string 087-65-4321
  Scores 42.0,23.0,36.0,45.0,47.0
};
Grade B-;

void printstruct (D-);
int main()
{
  ifstream ifs;
  
  ifs.open ("grades.bin");
  if (! ifs ){
    cout << "File Open Error : Sure that there is the file grades.bin \n";
    exit (0);
  }

  while ( ifs.read((char *)&g, sizeof(g))){
    printstruct(g);
  }
}
void printstruct (Grade g)
{
    cout << "Name : " << g.first << " " << g.last << "\t" << " SSN: " << g.ssn << "\n";
    cout << "\tScores: " ;
  for(int i=0; i<N;i++)
  cout << showpoint << setprecision(2) << g.score.sc[i] << "\t" ;
    cout << "Grade " << g.D- << endl;
}

