# [Vectors](https://www.geeksforgeeks.org/vector-in-cpp-stl/?ref=lbp)
- In C++, vector is a dynamic array with the ability to resize itself automatically when an element is inserted or deleted. It is the part Standard Template Library (STL) and provide various useful functions for data manipulation.
- When the vector is full, it will double its size.
- Vectors elements can be accessed in O(1) time.
- Unlike arrays, vectors are passed by value to a function, need to use & operator to pass it by reference.


### 2D vector
- A 2D vector may have different number of elements in its 1D vectors.
``` cpp
    vector<vector<int>> arr = {
        {1,2},
        {1,2,3,4},
        {1,2,3}
    }
    vector<vector<int>> arr1(5,vector<int>(3,0));
```



### Sorting of vector
``` cpp
 vector<int>  v = {4,2,6,7};
 int n = v.size()
 sort(v.begin(), v.end());
 sort(v.begin(), v.begin() + n);
 ```