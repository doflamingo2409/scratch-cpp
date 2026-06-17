#include <iostream>
#include <string>

namespace meow{
    std::string x = "cat";
}
namespace bark{
    std::string x = "dog";
}
int main() {
    using namespace meow;
    std::cout << x;

    return 0;
}
