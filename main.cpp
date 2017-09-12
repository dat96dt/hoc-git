#include <iostream>
#include <cstdint>
#include <cassert>

using namespace std;


int main()
{
    int i=7;
    char* p2 = reinterpret_cast<char*>(&i);
        if(p2[0] == 7)
            std::cout << "This system is little-endian\n";
        else
            std::cout << "This system is big-endian\n";

    return 0;
}
