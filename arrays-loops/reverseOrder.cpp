// question 3 

#include <iostream>
using namespace std; 

int main() {
    int n; 
    string words [100]; 
    
    cout << "How many words (at most 100)? "; 
    cin >> n; 
    
    if (n < 1 || n > 100) return 1; 
    
    cout << "Enter all word(s) below: ";
    
    for (int i = 0; i < n; i++) {
        cin >> words[i]; 
    }
    
    cout << " I will now print your word(s) in reverse order: "; 
        for (int i = n - 1; i >= 0; i--) {
        cout << words[i] << " "; 

    return 0;
    }
}
