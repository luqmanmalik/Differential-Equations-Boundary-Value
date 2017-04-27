#include <iostream>
using namespace std;

// function declaration
int max(int n1, int n2);
 
int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
   int return_value;
 
   // calling a function to get max value.
   return_value = max(a, b);
 
   cout << "Max value is : " << return_value << endl;
 
   return 0;
}

// define function returning the max between two numbers
int max(int n1, int n2)  {
   // local variable declaration
   int result;
 
   if (n1 > n2)
      result = n1;
   else
      result = n2;
 
   return result; 
}
 