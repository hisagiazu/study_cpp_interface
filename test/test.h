#ifndef INCLUDED_TEST
#define INCLUDED_TEST

#include <iostream>
#include <string>

#include "test_interface.h"

using namespace std;

class Test:public TestInterface
{
public:
    Test(string str);
    ~Test();
    void Print();
private:
    string m_str;
};

#endif
