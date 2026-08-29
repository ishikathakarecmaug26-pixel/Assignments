#include <iostream>
using namespace std;

struct Layout1
{
    char c1;
    int i;
    char c2;
};

struct Layout2
{
    int i;
    char c1;
    char c2;
};

int main()
{
    cout << "Size of Layout1 : " << sizeof(Layout1) << " bytes" << endl;
    cout << "Size of Layout2 : " << sizeof(Layout2) << " bytes" << endl;

    /*
        Struct Padding Explanation:

        1. The sizes of Layout1 and Layout2 can differ because
           the members are arranged in different orders.

        2. Padding is extra unused memory added by the compiler
           between members so that data is properly aligned in memory.

        3. Member order matters because it can change the amount
           of padding required. This is important when defining
           network packet headers or hardware register maps,
           where the exact memory layout matters.
    */

    return 0;
}