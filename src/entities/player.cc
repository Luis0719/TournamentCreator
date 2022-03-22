#include "player.h"

#include <memory>
#include <string>

#include "absl/memory/memory.h"
#include "src/entities/contestant.h"

namespace tournament {
Player::Player(std::string name) : Contestant(name) {}
Player::~Player() {}

std::unique_ptr<std::vector<std::unique_ptr<Contestant>>>
Player::BuildPlayersFromStringList(std::vector<std::string> names) {
  auto result = absl::make_unique<std::vector<std::unique_ptr<Contestant>>>();
  for (auto name : names) {
    result->push_back(absl::make_unique<Player>(name));
  }

  return result;
}

std::string Player::GetName() { return name_; }
}  // namespace tournament