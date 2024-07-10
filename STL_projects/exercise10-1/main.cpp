#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Object created." << std::endl;
    }

    ~MyClass() {
        std::cout << "Object destroyed." << std::endl;
    }
};

void throwPointer() {
    MyClass* ptr = new MyClass();
    throw ptr;
}

int main() {
    try {
        throwPointer();
    } catch (MyClass* ptr) {
        std::cout << "Caught a pointer to MyClass." << std::endl;
    }

    std::cout << "End of main." << std::endl;
    return 0;
}
