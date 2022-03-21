#include "player.h"

#include <string>

#include "src/entities/contestant.h"

namespace tournament {
Player::Player(std::string name) : Contestant(name) {}
Player::~Player() {}

std::string Player::GetName() { return name_; }
}  // namespace tournament