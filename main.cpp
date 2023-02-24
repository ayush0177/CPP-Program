#include <iostream>
using namespace std;
int addnum(int a, int b) {
  int c = a + b;
  return c;
}
int main() {
  int a;
  cout << "enter the value of a" << endl;
  cin >> a;
  int b;
  cout << "enter the value of b" << endl;
  cin >> b;
  int sum = addnum(a, b);
  cout << "the sum of " << a << " and " << b << " is " <<  sum << endl;
  return 0;
}