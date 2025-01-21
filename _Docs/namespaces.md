# Namespaces in C++

A **namespace** in C++ is a container that groups related identifiers such as variables, functions, classes, and more under a unique name. This helps organize code, avoid naming conflicts, and make large projects more manageable.

---

## Key Features
1. **Encapsulation**: Group related code logically.
2. **Avoid Naming Conflicts**: Prevent collisions between identifiers, especially when working with libraries.
3. **Modular Design**: Enhance code organization and maintainability.

---


## Syntax
```cpp
namespace NamespaceName {
    // Variables, functions, classes, etc.
    int myVar;
    void myFunction() {
        // Function code
    }
}

// Accessing namespace members
NamespaceName::myFunction();
```

## Different types of namespaces
1. Basic namespace (standard usage)
``` cpp
namespace MyNamespace {
    int myVar = 42;
    
    void myFunction() {
        std::cout << "Inside myFunction!" << std::endl;
    }
}

int main() {
    MyNamespace::myFunction();  // Calling function inside the namespace
    std::cout << MyNamespace::myVar << std::endl;  // Accessing variable inside the namespace
    return 0;
}
```
2.	Anonymous namespaces (for limiting scope to a single file).
``` cpp
namespace {
    int localVar = 100;
    
    void helperFunction() {
        std::cout << "Inside helperFunction!" << std::endl;
    }
}

int main() {
    helperFunction();  // Calls the function from anonymous namespace
    std::cout << localVar << std::endl;  // Access the variable from anonymous namespace
    return 0;
}
```
3.	Inline namespaces (for versioning and seamless integration).
``` cpp
#include <iostream>

namespace V1 {
    void printMessage() {
        std::cout << "Message from Version 1!" << std::endl;
    }

    int add(int a, int b) {
        return a + b;
    }
}

namespace V2 {
    inline namespace V1 {  // V1's functions are directly accessible in V2
        void printMessage() {
            std::cout << "Message from Version 2!" << std::endl;
        }

        // You can still use the functions from V1 directly
        void demonstrateV1Functionality() {
            int result = add(3, 4);  // Uses V1's add function directly
            std::cout << "Result from V1 add function: " << result << std::endl;
        }
    }
}

int main() {
    // Calls V2's version of printMessage
    V2::printMessage();

    // Calls V1's version of printMessage using inline namespace
    V1::printMessage();

    // Calls a V2 function that uses V1's add function
    V2::demonstrateV1Functionality();

    return 0;
}
```

4.	Namespace aliasing (for simplifying long namespace names).
``` cpp
namespace LongNamespaceName {
    void longFunction() {
        std::cout << "Inside LongNamespaceName" << std::endl;
    }
}

// Alias for the namespace
namespace LN = LongNamespaceName;

int main() {
    LN::longFunction();  // Accesses the function using the alias
    return 0;
}
```
5.	Using directives (to bring a namespace’s content into the current scope).
``` cpp
namespace MathUtils {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
}

// Using directive: brings everything from MathUtils into the current scope
using namespace MathUtils;

int main() {
    std::cout << add(3, 4) << std::endl;        // No need to qualify with MathUtils::
    std::cout << subtract(7, 2) << std::endl;  // No need to qualify with MathUtils::
    return 0;
}
```
6.  Nested namespaces (to structure complex projects).
``` cpp
namespace Outer {
    namespace Inner {
        void nestedFunction() {
            std::cout << "Inside Inner namespace" << std::endl;
        }
    }
}

int main() {
    Outer::Inner::nestedFunction();  // Accessing a function in the nested namespace
    return 0;
}
```
