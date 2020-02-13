#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {


  //Bring in file as an object using ifstream
    // ifstream = input file stream
  ifstream file ("./Texts/SampleText.txt");


  //Check if file opened
  if(file.is_open())
  {
    cout << "It worked!\n";
  }


  vector<string> names;

  string input;
  while (file >> input)
  {
    names.push_back(input);
  }

  for(string name : names)
  {
    cout << name << endl;
  }

  return 0;
}
