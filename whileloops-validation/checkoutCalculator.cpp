#include <iostream> 
using namespace std; 
int main () {
    
    int x;
    double total = 0.0; 
    
	//Prompt user and 0 to stop 
    while (true) { 
        cout << "Enter the price of an item (enter 0 to stop): ";
        cin >> x;
        
    if (x==0) {
        break;
        }
        total  += x; 
    }
   
    //Sum of the prices entered 
    cout << "Your checkout total is $"<< total << ". ";
    if ( total > 100 ) {
        cout << "That's expensive!";
    }
    
        
    
    return 0;
}
