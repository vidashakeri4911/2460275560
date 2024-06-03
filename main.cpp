

#include <iostream>
using namespace std;
int main()
{
  int number;
  int baghi;
  int sum = 0;

  cout << "enter number : ";
  cin >> number;

  while(number != 0)
  {

      baghi = number % 10;
      sum = sum * 10 + baghi;
      number /= 10;

  }
      cout << "reverse value is "<< sum << endl;

       return 0;
}
