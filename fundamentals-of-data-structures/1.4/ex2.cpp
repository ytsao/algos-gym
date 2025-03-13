#include <iostream>

using namespace std;

int main(){
  int n, result;
  int a[1000];
  cin >> n;
  if (n < 0){
    throw "n is zero.";
  }

  for (int i = 0; i < n; ++i){
    result += a[i];
  }
  cout << "sum of the first " << n << " numbers " << result;

  return result;
}
