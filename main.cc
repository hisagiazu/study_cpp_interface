#include <string>

#include "test/test_interface.h"
#include "test/test.h"

using namespace std;

int main()
{
    string str("Hello World!!");

    TestInterface* test = new Test(str);
    
    test->Print();

    return 0;
}
