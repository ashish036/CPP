/*
Given a array containing N integers,and an number S denoting a target sum.

Find all distinct integers that can add up to form target sum. The numbers in each triplet should be ordered in 
ascending order. and triplets should be ordered too.

Return empty array if no such triplet exists.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int> > tripletSumsFunc(vector<int> nums, int target) {
    vector<vector<int> > triplets;
    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size() - 2; i++) {
        int sum = nums[i];
        int j = i+1, k = nums.size() - 1;
        while(j < k) {
            int sum = nums[i]+ nums[j] + nums[k];
            if (sum == target) {
                triplets.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
            } else if (sum > target) {
                k--;
            } else {
                j++;
            }
        }
    }
    return triplets;

}

int main() {
    vector<int> input;
    int n, target = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num;
        cout << "Enter element " << i + 1 << ": ";
        cin >> num;
        input.push_back(num);
    }

    cout << "Enter the target sum: ";
    cin >> target;

    vector<vector<int> > tripletSums;
   tripletSums = tripletSumsFunc(input, target);

    for(auto triplet : tripletSums){
        for(auto num : triplet){
            cout << num << " ";
        }
        cout << endl;
    }
}

/* Brute Force approach
- Get all the permutations of the array and extract all the permutations having the sum equal to target sum.
*/

/* Optimized approach
- Sort the array
- Start from the smallest element, and then for each element, find the two elements that add up to target sum.
- If the sum is less than target, move to next element.
- If the sum is greater than target, move to next smaller element.
- If the sum is equal to target, add the pair to the result and move to next two elements.
- Repeat this process until all elements are checked.
*/