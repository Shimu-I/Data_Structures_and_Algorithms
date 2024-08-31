#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Item {
    public:
    int value;
    int weight;
};

bool comp(Item val1, Item val2) {
//comparator
    
    double p1 = (val1.value / val1.weight);
    double p2 = (val2.value / val2.weight);

    if( p1 >= p2) return true;
    else return false;
}

double knapsack ( vector<Item> arr, int we)  {
    sort(arr.begin(), arr.end(), comp);
    int total_value = 0;

    for(int i = 0 ; i < arr.size() ; i++) {
        if( arr[i].weight < we) {
            total_value += arr[i].value;
            we -= arr[i].weight;
        }
        else{
            double p = arr[i].value / arr[i].weight;
            total_value += p * we;
            break;
        }
    }
    return total_value;
}


int main(){
    int n;
    cout << "Enter the number of item: ";
    cin >> n;

    vector<Item> item(n);

    cout << "Enter each item value and weight: ";
    for(int i = 0 ; i < item.size() ; i++) {
        cin >> item[i].value >> item[i].weight;
    }

    cout << "Enter the maximum capacity of the item: ";
    int w;
    cin >> w;

    double result = knapsack(item, w);
    cout << "Total profit:  " << result;

}


/*
Example

//cout << "Item " << i + 1 << ": ";

Enter the number of item: 4
Enter each item value and weight: 
20 10 
200 50
100 20
60 10
Enter the maximum capacity of the item: 90
Total profit:  380

*/
