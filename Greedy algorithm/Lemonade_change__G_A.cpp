#include <iostream>
using namespace std;

int main() {
    
}

lemonade_chance(arr) {
    five = 0
    ten = 0

    for(int i = 0 ; i < n ; i++) {
        if(arr[i] == 5) {
            five++;
        }

        else if(arr[i] == 10) {
            if(five){
                five--
                ten++
            }
            else return false;
        }
         else {
            if( ten &&  five) {
                ten--
                five--
                
            }
            else if(five>=3) {
                five -= 3
            }
            else return  false;
         }
    }
    return true;
}