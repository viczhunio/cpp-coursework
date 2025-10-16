// 	QUESTION 4 
#include <iostream>
#include <cmath>
using namespace std;

//return the difference if greater than 10 
int areVeryDifferent (int x, int y) { 
    return abs( x - y ) > 10; 
}
//main function 
int main() { 
int x = 4, y = 10, z = -4; 
if (areVeryDifferent(x, y)) 
cout << "x and y are very different." << endl; 
if (areVeryDifferent(x, z)) 
cout << "x and z are very different." << endl; 
if (areVeryDifferent(y, z)) 
cout << "y and z are very different." << endl; 
return 0; 
}
