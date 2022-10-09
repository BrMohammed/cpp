#include "A.hpp"
#include "C.hpp"
#include "B.hpp"
#include "Base.hpp"

int main()
{
    Base * i;
    i = generate();
    identify(*i);
    identify(i);
}