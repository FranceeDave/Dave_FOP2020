#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
 ifstream input;
 input.open("lab11_employee.txt");

const int array_sz = 8;

string name[array_sz];
double salary[array_sz];

int i = 0;
double average_sal = 0;
string line;

while(getline(input, line)) {
  int name_endpos = line.find ('$') - 1;
  name[i] = line.substr(0, name_endpos);
  int salary_startpos = line.find ('$') + 1;
  int salary_endpos = line.find ('\n');
  salary[i]=stod(line.substr(salary_startpos,salary_endpos));
    ++i; 

}

for (int i = 0; i < array_sz; i++){
  cout << name[i] << " - " << salary[i] << endl;
}
cout << endl;

double min = salary[0];
string personmin = name[0];
for (int i = 0; i < array_sz; i++){
  if (salary[i] < min){
    min = salary[i];
    personmin = name[i];
  }
}

double max = salary[0];
string personmax = name[0];
for (int i = 0; i < array_sz; i++){
  if (salary[i] > max){
    max = salary[i];
    personmax = name[i];
  }
}

cout << " Lowest salary is " << personmin << " " << min << endl;
cout << " Highest salary is " << personmax << " " << max << endl;

int sum = 0;
for (int i = 0; i < array_sz; i++){
  sum += salary[i];
}
int average = sum / array_sz;

string undera_name = name[0];
double undera = salary[0];
for(int i = 0; i < array_sz;i++){
  if (salary[i] < average){
    undera = salary[i];
    undera_name = name[i];
    cout << " Under average is : " << undera_name << " " << undera << endl;
  }
}


string abovea_name = name[0];
double abovea = salary[0];
for(int i = 0; i < array_sz;i++){
  if (salary[i] > average){
    abovea = salary[i];
    abovea_name = name[i];
    cout << " Above average is : " << abovea_name << " " << abovea << endl;
  }
}

input.close();
}