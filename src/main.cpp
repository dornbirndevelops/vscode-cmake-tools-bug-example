#include "a.hpp"
#include "b.hpp"

int main(int, char**)
{
    using namespace foo;
    return a() + b();
}
