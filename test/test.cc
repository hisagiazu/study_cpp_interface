#include "test.h"

Test::Test(string str):m_str(str)
{
}

void Test::Print()
{
    cout << m_str << endl;
}
