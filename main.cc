#include "interface.h"
#include "test.h"

int main()
{
    ITest* test = new CTest();
    test->PrintTest();
    return 0;
}
