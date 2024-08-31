#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int shortest_job_first(vector<int>& arr, int n) {
    int time = 0, waiting_time = 0;
    
    sort(arr.begin(), arr.end());

    for(int i = 0 ; i < n ; i++){
             waiting_time += time;
             time += arr[i];
           
    }

    return waiting_time / n;
}

int main() {
    int n;
    cout << "Enter the number of processor: ";
    cin >> n;

    vector <int> arr(n);
    cout<< "Type each processor execution time:  ";
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    int avg_time = shortest_job_first(arr, n);
    cout << "Average time for execution is: " << avg_time;

}

/*

In the Shortest Job First (SJF) scheduling algorithm, the waiting time for a process is the total time that it has to wait before its execution starts

Example
input: Enter the number of processor: 5
input: Type each processor execution time:  4 3 7 1 2
output: Average time for execution is: 4
*/