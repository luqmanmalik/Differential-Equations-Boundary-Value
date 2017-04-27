#include <iostream>
using namespace std;

// function declaration
int factorial(int n);

// C++ stnd_func
int main () {
   int a = 5;
   int f_a;
 
   // calling factorial(a).
   f_a = factorial(a);

   return 0;
}
// define factorial(n)
int factorial(int n) {
   int f_var = 1;
 
   for(int i = 1; i <= n; ++i){
      f_var *= i;
   }
   cout << n << "! = " << f_var << "." << endl;

   return 0; 
}
 