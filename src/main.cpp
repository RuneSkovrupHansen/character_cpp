#include <iostream>

#include "character/character.hpp"

int main(int argc, char *argv[]) {
    std::cout << "Hello World!" << std::endl;

    Character c = Character();

    std::cout << c << std::endl;

    int new_character_level = 5;
    c.set_level(new_character_level);

    std::cout << c << std::endl;

    return 0;
}