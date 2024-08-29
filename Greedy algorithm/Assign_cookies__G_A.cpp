#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int assign_cookies(vector<int>& greed, vector<int>& cookies) {

    int a = greed.size();
    int b = cookies.size();

    int n = 0 ,m = 0;

    sort(greed.begin(), greed.end());
    sort(cookies.begin(), cookies.end());

    while( n < a && m < b) {

        if( greed[n] <= cookies[m] ) {
            m++;
        }
        n++;
    }
    return m;
}


int main(){
    
    int c, k;

    cout << "Enter the number of children: ";
    cin >> c;

    cout << "Enter the number of cookies: ";
    cin >> k;

    vector<int> greed(c);
    vector<int> cookies(k);

    cout << "Enter values for greed: ";
    for(int i = 0 ; i < c ; i++ ) {
        cin >> greed[i];
    }

    cout << "Enter values for cookies: ";
    for(int i = 0 ; i < k ; i++ ) {
        cin >> cookies[i];
    }

    int result = assign_cookies(greed, cookies);
    cout << "Number of children will get cookies are: " << result;

}


/*
exemple collected form geek for geek

Input : greed[] = [1, 2, 3], cookie = [1, 1]
Output: 1
Explanation: You can only assign cookie 0 or 1 to child 0.

Input : greed[] = [1, 2], cookie = [1, 2, 3]
Output: 2
Explanation: You can assign cookie 0 to child 0 and cookie 1 to child 1.
*/