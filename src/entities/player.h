#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "src/entities/contestant.h"

namespace tournament {
class Player : public Contestant {
 public:
  Player(std::string name);
  ~Player();

  std::string GetName() override;
};
}  // namespace tournament

#endif