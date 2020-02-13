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

  vector<string> dic;

  string input;
  while (file >> input)
  {
    dic.push_back(input);
  }

  cout << input;


  // This parses every word in the dictionary.
  for(string word : dic)
  {
    cout << word << endl;
  }

  return 0;
}
