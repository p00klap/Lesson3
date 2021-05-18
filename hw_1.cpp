#include <iostream>
#include <cstdlib>
#include <cstring>

int main() {
    int flower = 72;
    float w(1.23456);
    double p(1.2345678);

    char word;
    word = 'A';

    bool z = true;

    std::cout << true << " " ;
    
    printf("%c\n", flower);
    printf("%d\n", word);
    {
        int var = 44;
        std::cout << var << " " ;  // printf("%c\n" / "%d\n", var); ?? nemnogo ne ponyal pochemu nelzya tak...
    }
    //setlocale(LC_ALL, "russian");

    const double lk = 3.1234124124;

    std::cout << lk << std::endl;

    enum card {chervi, piki, bubna, tref};

    using Card = enum card;

    Card currentCard = bubna;
    
    typedef int someWords;
    someWords c = 50;

    std::cout << "Viberite 1 kartu iz " << c << "! ";

    std::cout << "Vasha karta pod nomerom " << currentCard << "!" << " Pozdravlyau!!!";
    
    return 0;
}
