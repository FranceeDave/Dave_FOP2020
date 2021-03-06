#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
  ifstream input;
  input.open("lab11_grade.txt");

  const int SizeArray = 40;

  string students_name[SizeArray];
  double students_grade[SizeArray];

  int i = 0;
  double average_grade = 0;
  string line;

  while(getline(input, line)){
    int nameEndPos = line.find('-') - 1;
    students_name[i] = line.substr(0, nameEndPos);
    int gradeStartPos = line.find('-') + 1;
    int gradeEndPos = line.find('\n');
    students_grade[i] = stod(line.substr(gradeStartPos, gradeEndPos));
    ++i;
  }


// Lowest
  string lowest_name = students_name[0];
  double lowest = students_grade[0];
  for(int i = 0; i < SizeArray; i++){
    if (students_grade[i] < lowest){
      lowest = students_grade[i];
      lowest_name = students_name[i];
    }
  }

  // Highest
  string highest_name = students_name[0];
  double highest = students_grade[0];
  for(int i = 0; i < SizeArray; i++){
    if (students_grade[i] > highest){
      highest = students_grade[i];
      highest_name = students_name[i];
    }
  }
  
  //average
  int sum = 0;
  for (int i = 0; i < SizeArray; i++){
    sum += students_grade[i];
  }
  int average = sum / SizeArray;
  cout << "Average = " << average << '\n';
  
  // Under average
  // ua = under average 
  string ua_name = students_name[0];
  double ua = students_grade[0];
  for(int i = 0; i < SizeArray; i++){
    if (students_grade[i] < average){
      ua = students_grade[i];
      ua_name = students_name[i];
      cout << "Failed = " << ua_name << " - " << ua << '\n';
    }
  }
    cout << endl;
    
  // Above average
  // aa = above average 
  string aa_name = students_name[0];
  double aa = students_grade[0];
  for(int i = 0; i < SizeArray; i++){
    if (students_grade[i] > average){
      aa = students_grade[i];
      aa_name = students_name[i];
      cout << "Pass = " << aa_name << " - " << aa << '\n';
    }
  }

  input.close();

  cout << "Lowest = " << lowest_name << " - " << lowest << '\n';
  cout << "Highest = " << highest_name << " - " << highest << '\n';

  return 0;
}
