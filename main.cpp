#include <iostream>
#include <cstring>

void buggyFunction() {
    char buffer[10];
    std::strcpy(buffer, "This is a very long string that will overflow the buffer");
}

int main() {
    buggyFunction();
    return 0;
}
