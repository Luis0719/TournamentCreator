#include "player.h"

#include <memory>
#include <string>

#include "absl/memory/memory.h"
#include "src/entities/contestant.h"

namespace tournament {
Player::Player(std::string name) : Contestant(name) {}
Player::~Player() {}
}  // namespace tournament