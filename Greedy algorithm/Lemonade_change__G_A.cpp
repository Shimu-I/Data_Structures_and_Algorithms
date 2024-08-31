#include <iostream>
#include <vector>
using namespace std;

bool lemonade_chance(vector <int> arr, int n) {
    int five = 0;
    int ten = 0;

    for(int i = 0 ; i < n ; i++) {
        if(arr[i] == 5) {
            five++;
        }

        else if(arr[i] == 10) {
            if(five){
                five--;
                ten++;
            }
            else return false;
        }
         else {
            if( ten &&  five) {
                ten--;
                five--;
                
            }
            else if(five >= 3) {
                five -= 3;
            }
            else return  false;
         }
    }
    return true;
}


int main() {
    int n;
    cout << "Enter the size of  the vector: ";
    cin >> n;

    vector <int> arr(n);

    cout << "Enter the element of the vector: ";
    for(int i = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }

    bool result = lemonade_chance(arr, n);

    if(result) {
        cout << "The Lemonade stand can make a profit ";
    }
    else  {
        cout << "The Lemonade stand can not make a profit ";
    }

    return 0;
    
}

/*
Example  
input: Enter the size of  the vector: 5
input: Enter the element of the vector: 5 5 5 10 20
output: The Lemonade stand can make a profit

input: Enter the size of  the vector: 5
input: Enter the element of the vector: 5 5 10 10 20
input: The Lemonade stand can not make a profit

*/

