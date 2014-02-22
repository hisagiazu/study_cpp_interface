#include "test/interface.h"
#include "test/test.h"

int main()
{
    ITest* test = new CTest();
    
    test->PrintTest();

    return 0;
}
