//	QUESTION 5 
#include <iostream>
using namespace std;

//establish paramters and double 
double countChange (int q, int d, int n, int p) {
	//base case 
    if (q == 0 && d == 0 && n == 0 && p ==0) return 0; 
    
	//sum of each change
    double sumQ = 0.25*q;
    double sumD = 0.10*d;
    double sumN= 0.05*n;
    double sumP= 0.01*p;
    
	//return sum of all change 
    return sumQ + sumD + sumN + sumP;
}
//main function 
int main() { 
int q = 10, d = 5, n = 1, p = 2; 
double x = countChange(q, d, n, p); 
cout << "You have $" << x << "." << endl; 

return 0; 
} 
