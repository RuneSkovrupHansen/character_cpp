#ifndef CHARACTER_CHARACTER_HPP_
#define CHARACTER_CHARACTER_HPP_

#include <string>

#include "character/types.hpp"

class Character {
    public:
        Character();

    private:
        name name_;
        level level_;
        attribute strength_;
        attribute dexterity_;
        attribute intelligence_;
};

#endif  // CHARACTER_HPP_