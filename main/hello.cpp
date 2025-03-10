// File: hello.cpp
#include <numeric>
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  vector<int> universe = {20, 30, -10, 2};
  cout << "Hello, World\n";
  cout << "Hello, Jenkins\n";
  cout << "I have successfully built and run this  \n";
  cout << "The answer to life, universe and everything is: "
       << accumulate(universe.cbegin(), universe.cend(), 0) << endl;
  cout << "-- Douglas Adams" << endl;
  return 0;
}
