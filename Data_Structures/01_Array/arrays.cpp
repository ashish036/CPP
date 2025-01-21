#include <iostream>

using namespace std;

int main() {
    int marks [100];
    int n = 0;
    cout << "Enter the number of students" << endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    sort(marks, marks + n);

    for(int i = 0; i < n; i++) {
        cout << i << "- student: marks : "<< marks[i] << endl;
    } 



    return 0;  
}