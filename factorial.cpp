#include <iostream>
using namespace std;

void factorial(int n);

int main() {
  int n;
  cout << "Please enter a number and press ENTER";
  cin >> n;
  factorial(n);
  return 0;
}

void factorial(int n) {
  int sum = 1, i = 1;
  // for (int i = 1; i <= n; i++)
  //   sum = sum * i;
  //   factorial
  if(i <= n) {
    sum = sum * i;
    i++;
    factorial(i);
  }
  cout << sum;
}
