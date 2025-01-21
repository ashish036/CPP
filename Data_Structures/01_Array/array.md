# Array
 An array is a collection of elements of the same type placed in the contiguous memory location.
 ``` cpp
 int arr[100];
 int arr[100] = {0};
 int arr[100] = {1,2,3};
 int a = {1,2,3};
 - All the above is called as static memory allocation
```
``` cpp
 - Sorting of array
 int n = sizeof(arr) / sizeof(arr[0]);
 sort(arr, arr + n);
 ```

