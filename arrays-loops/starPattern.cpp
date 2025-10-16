// 	QUESTION 4 

#include <iostream>
using namespace std; 

int main () { 
	int n; 
	
	cout << "How many rows (at most 100)? "; 
    cin >> n; 
    
    if (n < 1 || n > 100) return 1;

	int rows[100]; 
	
	cout << "Enter " << n << " row lengths: "; 
	
	for (int i = 0; i < n; i++) {
        cin >> rows[i]; 
    }
	
	for (int i=0; i < n; i++) {
		for (int j=0; j < rows[i]; j++) {
			cout << "*";
		} cout << endl; 
	}
	return 0; 
}
