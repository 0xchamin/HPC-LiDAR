// move example
#include <utility>      // std::move
#include <iostream>     // std::cout
#include <vector>       // std::vector
#include <string>       // std::string
using namespace std;
int main () {
  string foo = "foo-string";
  string bar = "bar-string";
  vector<string> myvector;

  myvector.push_back (foo);                    // copies
  myvector.push_back (move(bar));         // moves

  cout << "myvector contains:";
  for (string& x:myvector) cout << ' ' << x;
  cout << '\n';

  return 0;
}