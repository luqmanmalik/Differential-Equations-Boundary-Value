#include <iostream>
using namespace std;

// function declaration
int factorial(int n);

// define factorial(n)
int factorial (int n) {
   int λ = 1;
   for(int i = 1; i <= n; ++i){
      λ *= i;
   }
   return λ; 
}

// Executable
int main () {
   int m = 9;
   int i, j, k, σ;

   for (int i = 1; i <= m; ++i) {
      for (int j = 0; j <= m; ++j) {
         for (int k = 0; k <= m; ++k) {
            // calling factorial(a).
            σ = factorial(i) + factorial(j) + factorial(k);
            if (σ == 100*i + 10*j + k) {
               cout << σ << endl;
            }
         }
      }
   }   
   return 0;
}