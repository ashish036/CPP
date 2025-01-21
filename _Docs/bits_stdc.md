# `#include <bits/stdc++.h>` in C++

`#include <bits/stdc++.h>` is a non-standard, but commonly used preprocessor directive in C++ programming, especially in competitive programming. It includes nearly all standard C++ library headers in one go.

## What Does It Do?

When you include `#include <bits/stdc++.h>`, it automatically includes most standard C++ library headers, such as:

- `<iostream>`
- `<vector>`
- `<algorithm>`
- `<cmath>`
- `<string>`
- And many others...

This saves time by including all required headers without needing to explicitly specify each one.

## Why it is not working in my machine?
- #include <bits/stdc++.h> is not part of the C++ standard; it’s a convenience offered by GCC. Since Clang doesn’t implement this, it is not available on macOS with the Clang compiler.

## Why Use It?

### Advantages:
1. **Convenience**: Avoids the need to write multiple `#include` statements for various headers.
2. **Speed in Competitive Programming**: In competitive programming, time is crucial. It allows faster coding by including all the necessary libraries at once.

### Drawbacks:
1. **Not Part of C++ Standard:** #include <bits/stdc++.h> is a GCC extension, not a standard header, and may not be supported by other compilers like Clang or MSVC.
2. **Increased Compilation Time:** Including all libraries unnecessarily increases the compilation time, which may slow down larger projects.
3. **Namespace Pollution:** It includes all standard library functions in the global namespace, which might cause conflicts in larger or complex projects.

### Recommended Practice
- In production or real-world code, it’s better to include only the headers you need. This improves code readability, reduces compilation time, and avoids namespace issues.

### Example:
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3};
    sort(vec.begin(), vec.end());
    for (int num : vec) {
        cout << num << " ";
    }
    return 0;
}
```
