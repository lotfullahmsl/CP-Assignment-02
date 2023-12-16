#include <iostream>
using namespace std;

int main() {
    
    int User_Input = 0, Result = 0;
    cout << "Enter a Number: ";
    cin >> User_Input;
    
    if (User_Input < 0 || User_Input > 101) {
        Result = -1; 
    }
    
    else if (User_Input >= 0 && User_Input <= 5) {
        Result = 0; 
    }
    
    else if (User_Input >= 6 && User_Input <= 12) {
        Result = 1; 
    }
    
    else if (User_Input >= 13 && User_Input <= 19) {
        Result = 2; 
    }
    
    else if (User_Input >= 20 && User_Input <= 50) {
        Result = 3; 
    }
    
    else if (User_Input >= 51 && User_Input <= 60) {
        Result = 4; 
    }
    
    else if (User_Input >= 61 && User_Input <= 101) {
        Result = 5;
    }

    cout << "Result is: " << Result;

    return 0;
}

