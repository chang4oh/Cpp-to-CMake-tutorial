#include <iostream>
using namespace std;

int add(int a, int b);  // function declaration
int multiply(int a, int b);

int main() {
  int resultAdd = add(5,3);
  int resultMul = multiply(5,3);
  cout << "Add: " << resultAdd << endl << "Multiply: " << resultMul << endl;
  return 0;
}