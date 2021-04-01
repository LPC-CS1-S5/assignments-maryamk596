// [2] Make the program that reads the student’s name(string) and two scores(integer) from the text file “students.txt” // 
//Each record of the student has the three fields as follows:


//Read all lines from the file and show the summation and average value of each student.
//Also at the last line, show the total number of students who have an average greater than 80.
//The example of expected output results are as follows:

//Student name : James      Score 1: 100    Score 2: 100    Sum : 200       Avg: 100
//Student name : Orlando  Score 1: 95     Score 2: 90     Sum : 185       Avg: 92.5
//Student name : Tim          Score 1: 100    Score 2: 90     Sum : 190       Avg: 95

//....

// The total number of students who has the average > 80 :  3 students













// ifs >> N; 
for (N = 0; N <= 10; N++){

  ifs >> name;
  ifs >> score1 >> score2;
  cout << "Name : " << name << " ";
  cout << score1 << " "; 
  cout << score2 << endl ; 
  sum = score1 + score2; 
  average = sum /2.0; 
  cout << "average is : " << average << endl;
  cout << "sum is : " << sum << endl;
  total = total + sum; 

  if (average > 80)
    cout << "the student whose average is above 80 are: " << average << " " << name << endl; 
}




ifs.close(); 

}
// I have initialized variables one string for the students name, one integer for students count, two integers for students score and 3 double variables to keep the sum, average and total of the scores. 

//then I used the if.open command to open the text file for the program to read from

