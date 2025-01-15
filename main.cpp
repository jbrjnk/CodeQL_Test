#include <iostream>
#include <cstring>

// Comment
// Comment 2
// Comment 3
// Comment 4



void buggyFunction2() {
    char buffer[10];
    std::strcpy(buffer, "This is a very long string that will overflow the buffer xxyyzz");
}

void useAfterFree() {
    int* ptr = new int(10);
    delete ptr;
    std::cout << *ptr << std::endl; // Use after free
}

void anotherUseAfterFree() {
    int* ptr = new int(10);
    delete ptr;
    std::cout << *ptr << std::endl; // Use after free
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    buggyFunction2();
    useAfterFree();
    anotherUseAfterFree();
    return 0;
}
