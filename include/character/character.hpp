#ifndef CHARACTER_CPP_CHARACTER_HPP_
#define CHARACTER_CPP_CHARACTER_HPP_

#include <iostream>
#include <string>

#include "character/types.hpp"

class Character {
    public:
        Character();

        character_name get_name() const;
        bool set_name(character_name);

        character_level get_level() const;
        bool set_level(character_level);

        character_attribute get_strength() const;
        character_attribute get_dexterity() const;
        character_attribute get_intelligence() const;

        friend std::ostream& operator<<(std::ostream& os, const Character& c);

    private:
        character_name name_;
        character_level level_;
        character_attribute strength_;
        character_attribute dexterity_;
        character_attribute intelligence_;

        // Specify MIN and MAX members as static const, to ensure
        // that they are uniform across all instances (static) and
        // that they are not changed (const).

        static const character_level MIN_LEVEL_;
        static const character_level MAX_LEVEL_;
        static const character_level MIN_NAME_LENGTH_;
        static const character_level MAX_NAME_LENGTH_;
};

#endif  // CHARACTER_CPP_CHARACTER_HPP_