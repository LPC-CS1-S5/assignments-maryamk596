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


struct A- {
  string Fred;
  string Bumpkin;
  string 456-78-9012
  Scores 43.0,78.0,88.0,77.0,45.0
};
Grade A-;


struct C- {
  string Betty;
  string Rubble;
  string 234-56-7890
  Scores 44.0,90.0,80.0,90.0,46.0
};
Grade C-;


struct F {
  string Cecil;
  string Noshow;
  string 345-67-8901
  Scores 45.0,11.0,-1.0,4.0,43.0
};
Grade F;


struct B+ {
  string Bif;
  string Buff;
  string 632-79-9939
  Scores 46.0,20.0,30.0,40.0,50.0
};
Grade B+;


struct A {
  string Andrew;
  string Airpump;
  string 223-45-6789
  Scores 49.0,1.0,90.0,100.0,83.0
};
Grade A;


struct A+ {
  string Jim;
  string Backus;
  string 143-12-1234
  Scores 48.0,1.0,97.0,96.0,97.0
};
Grade A+;


struct D+ {
  string Art;
  string Carnivore;
  string 565-89-0123
  Scores 44.0,1.0,80.0,60.0,40.0
};
Grade D+;


struct C+ {
  string Jim;
  string Dandy;
  string 087-75-4321
  Scores 47.0,1.0,23.0,36.0,45.0
};
Grade C+;


struct B- {
  string Ima;
  string Elephant;
  string 456-71-9012
  Scores 45.0,1.0,78.0,88.0,77.0
};
Grade B-;


struct B- {
  string Benny;
  string Franklin;
  string 234-56-2890
  Scores 50.0,1.0,90.0,80.0,90.0
};
Grade B-;


struct B {
  string Boy;
  string George;
  string 345-67-3901
  Scores 40.0,1.0,11.0,-1.0,4.0
};
Grade B;


struct C {
  string Harvey;
  string Heffalump;
  string 632-79-9439
  Scores 30.0,1.0,20.0,30.0,40.0
};
Grade C;


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

