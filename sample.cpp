/**
 * Create a cpp program to find a prime numbers
 **/
#include <iostream>
using namespace std;

int main()
{
  // Declare variales
  int n, i;
  bool isPrime = true;

  cout << "Enter a positive integer: ";
  cin >> n;

  if( is_number(n) ){
    cout << "invalid value given";
    return 0;
  }
     
  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  
  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";

  return 0;
}

bool is_number(string str) {
   for (int i = 0; i < str.length(); i++)
     
   if (isdigit(str[i]) == false)
      return false;
   
  return true;
}
