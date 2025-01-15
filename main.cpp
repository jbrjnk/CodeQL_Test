#include <iostream>
#include <cstring>

void buggyFunction2() {
    char buffer[10];
    std::strcpy(buffer, "This is a very long string that will overflow the buffer xxyyzz");
}

void useAfterFree() {
    int* ptr = new int(10);
    delete ptr;
    std::cout << *ptr << std::endl; // Use after free
}

void DoSomething()
{
    std::cout << "hello world";
}

int main() {
    DoSomething();
    useAfterFree();
    buggyFunction2();
    return 0;
}
