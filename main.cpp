#include <iostream>
#include <cstring>

void buggyFunction() {
    char buffer[10];
    std::strcpy(buffer, "This is a very long string that will overflow the buffer... oops!");
}

int main() {
    buggyFunction();
    return 0;
}
