#include <bits/stdc++.h>

using namespace std;

#define lu long unsigned int
#define MAX_N 200

lu memo[MAX_N] = { 0, 1 };
bool mem[MAX_N] = { true, true };

lu fib(int n) {
  if (mem[n] == false) {
    memo[n] = fib(n - 1) + fib(n - 2);
    mem[n] = true;
  }

  return memo[n];
}

int main() {
	int n;
	cin >> n;

  cout << fib(n) << endl;

  return 0;
}
