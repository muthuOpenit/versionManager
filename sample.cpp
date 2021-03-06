/**
 * Create a cpp program to find a prime numbers
 **/
#include <iostream>
using namespace std;

int main()
{
  // Declare variales
  int n;
  
  cout << "Enter a positive integer: ";
  cin >> n;

  // check is an integer
  if( is_number(n) ){
    cout << "invalid value given";
    return 0;
  }
   
  findPrime(n); // find is a prime number 
  
  return 0;
}

// validate the given number as integer
bool is_number(string str) {
   for (int i = 0; i < str.length(); i++)
     
   if (isdigit(str[i]) == false)
      return false;
   
  return true;
}

// To check a given number as prime number 
// and print the result to user 
void findPrime( int n ){
  int i;
  bool isPrime = true;


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
}
