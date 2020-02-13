#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {

  ifstream file ("./Texts/SampleText.txt");


  //Check if file opened
  if(file.is_open())
  {
    cout << "It worked!\n";
  }


  string one_line;
  int line_number = 1;
  while (getline(file, one_line)) {

    cout << line_number << one_line << "\n";
    line_number ++;
  }

  return 0;
}
