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

  char temp = file.get();
  cout << temp << "\n";

  return 0;
}
