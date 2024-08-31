#include <iostream>
#include <string>
using namespace std;

bool valid_parenthesis(string s, int index, int count) {
    if( count < 0 ) {
        return false;
    }
    if( index == s.length() ) {
        return count == 0;
    }
    if(s[index] == '(') {
        return valid_parenthesis(s, index + 1 , count + 1);
    }
    if(s[index] == ')') {
        return valid_parenthesis(s, index + 1 , count - 1);
    }
   
    return ( valid_parenthesis(s, index + 1 , count) );
}

int main() {
    string stg;
    cout << "Enter the string: ";
    cin >> stg;

    bool result = valid_parenthesis(stg, 0, 0);
    if(result) {
        cout << "Valid";
    }
    else {
        cout << "Invalid";
    }


}

/*
Example
Enter the string: (*()
Invalid

Enter the string: ()**()*()
Valid


*/