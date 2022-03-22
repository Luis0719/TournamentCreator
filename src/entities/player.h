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

  static std::vector<Contestant*> BuildPlayersFromStringList(
      std::vector<std::string> names);
  std::string GetName() override;
};
}  // namespace tournament

#endif