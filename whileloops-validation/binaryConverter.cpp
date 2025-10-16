#include <iostream> 
using namespace std; 
int main () {
    
    int x; 
    
	//Ask user for integer 
    cout << "Enter a positive integer: ";
    cin >> x;
    
	//Validate the integer 
    while (x < 0) { 
        cout << "Invalid input! Try again: ";
        cin >> x;
    }
    
	//Print out the nunmber in reverse binary 
    cout << "Your number in binary reverse is: ";
    
    while (x > 0) {
       cout << x % 2 << " "; 
        x /= 2;
    }
        cout << endl;
        
    
    return 0;
}
