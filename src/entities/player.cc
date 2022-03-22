#include "player.h"

#include <string>

#include "src/entities/contestant.h"

namespace tournament {
Player::Player(std::string name) : Contestant(name) {}
Player::~Player() {}

std::vector<Contestant*> Player::BuildPlayersFromStringList(
    std::vector<std::string> names) {
  std::vector<Contestant*> result;
  for (auto name : names) {
    result.push_back(new Player(name));
  }

  return result;
}

std::string Player::GetName() { return name_; }
}  // namespace tournament