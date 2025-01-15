#include <iostream>
#include <cstring>






void useAfterFree() {
    int* ptr = new int(10);
    delete ptr;
    std::cout << *ptr << std::endl; // Use after free
}

int main() {
    useAfterFree();
    return 0;
}
