#include <iostream>
#include <cstring>

bool doSomeComparision(unsigned short x, unsigned short y) {
  // now we are doing some comparision between x and y
  return (x + y < x);  
}

void buggyFunction2() {
    char buffer[10];
    std::strcpy(buffer, "This is a very long string that will overflow the buffer.");
}

void DoSomething()
{
    std::cout << "hello world 5";
}

void useAfterFree();
void DoSomething2();

int main() {
    DoSomething();
    useAfterFree();
    buggyFunction2();
    doSomeComparision(100,200);
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