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


  string line;
  getline(file, line);
  cout << line << "\n";

  return 0;
}
