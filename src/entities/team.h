#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "contestant.h"
#include "player.h"

namespace tournament {
class Team : public Contestant {
 public:
  Team(std::string name);
  ~Team();

  std::string GetName() override;
  std::vector<Player> GetRoaster() override;
  void SetRoaster(std::vector<Player>) override;
};
}  // namespace tournament

#endif