#include <iostream>
#include <cstdlib>
#include <cstring>

int main() {
    struct cross_zero {
        int number_of_players;
        int symbols;
        int cells;
        int vertical_lines;
        int horisontal_lines;
        int time_to_move;
        int max_time;
        char name[15];
    };
    using Cross_zero = struct cross_zero;
    Cross_zero Game;
    Game.number_of_players = 2;
    Game.symbols = 3;
    Game.cells = 9;
    Game.vertical_lines = 2;
    Game.horisontal_lines = 2;
    Game.time_to_move = 30;
    Game.max_time = 600;
    strcpy(Game.name, "Cross Zero");

    std::cout <<"Players: " << Game.number_of_players << std::endl;
    std::cout <<"Symbols: " << Game.symbols << std::endl;
    std::cout <<"Cells: " << Game.cells << std::endl;
    std::cout <<"V_Lines: " << Game.vertical_lines << std::endl;
    std::cout <<"H_Lines: "<< Game.horisontal_lines << std::endl;
    std::cout <<"Time: " << Game.time_to_move << std::endl;
    std::cout <<"Max_time: " << Game.max_time << std::endl;
    

    return 0;

}