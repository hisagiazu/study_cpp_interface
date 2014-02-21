#include <iostream>

#include "interface.h"
#include "main.h"

void CTest::PrintTest()
{
    std::cout << "Hello World!" << std::endl;
}

int main()
{
    ITest* test = new CTest();
    test->PrintTest();
    return 0;
}
