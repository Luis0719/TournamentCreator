#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>

#include "src/entities/contestant.h"

namespace tournament {
class Player : public Contestant {
 public:
  Player(std::string name);
  ~Player();

  static std::unique_ptr<std::vector<std::unique_ptr<Contestant>>>
  BuildPlayersFromStringList(std::vector<std::string> names);
};
}  // namespace tournament

#endif