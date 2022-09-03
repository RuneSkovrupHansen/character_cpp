#include "character/character.hpp"

Character::Character()
    : name_("no_name"),
      level_(0),
      strength_(0),
      dexterity_(0),
      intelligence_(0) {}

const character_level Character::MIN_LEVEL_ = 1;
const character_level Character::MAX_LEVEL_ = 100;
const character_level Character::MIN_NAME_LENGTH_ = 1;
const character_level Character::MAX_NAME_LENGTH_ = 10;

character_name Character::get_name() const { return name_; }
bool Character::set_name(character_name value) {
    if (value.length() < MIN_NAME_LENGTH_ ||
        value.length() > MAX_NAME_LENGTH_) {
        return false;
    }
    name_ = value;
    return true;
}

character_level Character::get_level() const { return level_; }
bool Character::set_level(character_level value) {
    if (value < MIN_LEVEL_ || value > MAX_LEVEL_) {
        return false;
    }
    level_ = value;
    return true;
}

character_attribute Character::get_strength() const { return strength_; }
character_attribute Character::get_dexterity() const { return dexterity_; }
character_attribute Character::get_intelligence() const {
    return intelligence_;
}

std::ostream& operator<<(std::ostream& os, const Character& c) {
    // Should this function use getters? Probably.
    os << "Character, name: " << c.name_ << ", level: " << c.level_;
    return os;
}