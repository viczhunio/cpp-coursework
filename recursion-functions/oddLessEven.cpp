//	QUESTION 2 
#include <iostream>
using namespace std;

int oddLessEven (int x) {
    //base case 
    if (x == 0) return 0;
    
    //check if last digit even + add or subtract 
    int digit = oddLessEven(x/10); 
    if (x % 10 % 2 == 0) 
        return digit - x % 10; 
    return digit + x % 10;
}

int main () { 
cout << oddLessEven(23) << endl; // prints 1 
cout << oddLessEven(1234) << endl; // prints -2 
cout << oddLessEven(777) << endl; // prints 21 
return 0; 
}
