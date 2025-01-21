#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr1(5, 0); // {0,0,0,0,0}


    // Vector methods
    int size = arr.size(); // number of elements
    int capacity = arr.capacity(); // Actual memory allocates
    arr.push_back(0); // time_complexity : O(1)
    arr.pop_back(); // time_complexity : O(1) 
    int val = arr.at(2); // Return element at 2nd index

    arr.insert(arr.begin() + 1, val); // Insert val at the index 1
    arr.emplace(arr.begin() +1, val); // Insert val at the index

    arr.erase(arr.begin() + 1); // Erase element at index 1

    auto it = find(arr.begin(), arr.end(), 5); //Return the iterator to the value 5
    arr.erase(it); // Erase element at iterator
    arr.shrink_to_fit(); // Reduce memory usage by freeing space
    fill(arr.begin(), arr.end, 5) // 


    // Iterating through vector
    for(auto i : arr) {
        cout << i << " ";
    }

}