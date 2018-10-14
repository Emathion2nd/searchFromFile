#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "linearSearch.h"
using namespace std;

int main(){

  const int size = 10000000;
  vector<string> A(size);
  string read;
  ifstream infile;
  infile.open("C:\\Users\\Amanuel\\Desktop\\Emathio\\Fall 2018\\Algorithms\\Assignment\\Program 2\\wordlist.txt");
  if (!infile.is_open())
    perror("error while opening file");
  int k = 0;
  for(int i= 0; i < 1000000; i++) {

    infile >> read;
    if(read[0] == ',' || read[0] == '.' || read[0] == ':' || read[0] == '!' || read[0] == '?' || read[0] == ';')
      continue;

    A[k] = read;
    k++;
  }

  cout << "Number a-bed = " << linearSearch("a-bed", A, k);


  cout << "size = " << k << endl;

  infile.close();

  return 0;
}