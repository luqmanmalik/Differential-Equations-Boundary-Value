#include <iostream>
using namespace std;

int main(){
   int n;
   int factorial = 1;

   cout << "Enter a positive integer: ";
   cin >> n;

   for(int i = 1; i <= n; ++i){
      factorial *= i;
   }

   cout << n << "! = " << factorial << "." << endl;    
   return 0;
}