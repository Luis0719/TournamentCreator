#ifndef PLAYER_CREATOR_H
#define PLAYER_CREATOR_H

#include <vector>

#include "src/entities/contestant.h"
#include "src/entities/creators/contestant_creator.h"

namespace tournament {
class PlayersCreator : public ContestantCreator {
 public:
  virtual std::vector<Contestant> FromArgs() override;
  virtual std::vector<Contestant> FromFile() override;
};
}  // namespace tournament

#endif