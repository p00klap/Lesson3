#include <iostream>

int main() {

    enum type_of_symbols {x, o, _};

    using KN = enum type_of_symbols;

    KN type1 = x;
    KN type2 = o;
    KN type3 = _;

    std::cout << type1 << std::endl;
    std::cout << type2 << std::endl;
    std::cout << type3 << std::endl;
    
return 0;
}
  