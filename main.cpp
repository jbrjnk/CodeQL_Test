#include <iostream>
#include <cstring>

void useAfterFree();

bool checkOverflow(unsigned short x, unsigned short y) {
  // BAD: comparison is always false due to type promotion
  return ((unsigned short)(x + y) < x);  
}

const char secret_token = "d41d8cd98f00b204eabbde98ecf8427e";

void buggyFunction2() {
    char buffer[10];
    std::strcpy(buffer, "This is a very long string that will overflow the buffer.");
    std::cout << "Secret token is: " << secret_token << std::endl;
}

void DoSomething()
{
    std::cout << "hello world 5";
}

void DoSomething2();

int main() {
    DoSomething();
    useAfterFree();
    buggyFunction2();
    checkOverflow(10,20);
    return 0;
}

void useAfterFree() {
    int* ptr = new int(10);
    delete ptr; // Free memory
    std::cout << (*ptr) << std::endl;  // Use after free!
}

void DoSomething2()
{
    // line of the code 1
    // line of the code
    // line of the code
    // line of the code
    // line of the code
    // line of the code
    // line of the code
}

