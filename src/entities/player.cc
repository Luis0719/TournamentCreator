#include "player.h"
#include <string>

#include "contestant.h"

namespace Tournament {
Player::Player(std::string name): Contestant(name) {}
Player::~Player() {}

std::string Team::GetName() { return name_; }
}