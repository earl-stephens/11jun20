#include <iostream>
#include <math.h>
using namespace std;

void get_divisors(int n);

int main() {
  int n;
  while (true) {
  cout << "\n";
  cout << "Enter a number (0 = Exit) and press ENTER: ";
  cin >> n;
  if (n == 0) {
    return 0;
  }
  get_divisors(n);
  }
}

void get_divisors(int n) {
  int i;
  double sqrt_of_n = sqrt((double) n);
  for (i = 2; i <= sqrt_of_n; i++)
    if (n % i == 0) {
      cout << i << ", ";
      get_divisors(n / i);
      return;
    }
  cout << n;
}
