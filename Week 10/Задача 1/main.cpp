#include <iostream>
#include <malloc.h>
#include "File.h"
#include "FileSystem.h"


template <class T>
bool testForMemoryLeak(T (*function)()) {
    struct mallinfo before, after;
    before = mallinfo();
    function();
    after = mallinfo();

    if (after.uordblks - before.uordblks == 0) {
        std::cout << "No memory leaks!\n";
    }
    else {
        std::cout << "MEMORY LEAK!\n";
    }
    
    return (after.uordblks - before.uordblks) == 0;
}

void testfs() {
    FileSystem fs;
    fs.addSubDirectory(Directory("Test", 0));
}

int main() {
    testForMemoryLeak(testfs);

    return 0;
}