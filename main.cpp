#include <iostream>

class ITest
{
public:
    virtual void PrintTest() = 0;
};

class CTest:public ITest
{
public:
    void PrintTest();
};

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
