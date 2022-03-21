#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "src/entities/contestant.h"

namespace tournament {
class Team : public Contestant {
 public:
  Team(std::string name);
  ~Team();

  std::string GetName() override;
  std::vector<Contestant*> GetRoaster() override;
  void SetRoaster(std::vector<Contestant*> roaster) override;
};
}  // namespace tournament

#endif