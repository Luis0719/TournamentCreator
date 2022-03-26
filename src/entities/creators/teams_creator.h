#ifndef TEAMS_CREATOR_H
#define TEAMS_CREATOR_H

#include <vector>

#include "src/entities/contestant.h"
#include "src/entities/creators/contestant_creator.h"

namespace tournament {
class TeamsCreator : public ContestantCreator {
 public:
  virtual std::vector<Contestant> FromArgs() override;
  virtual std::vector<Contestant> FromFile() override;
};
}  // namespace tournament

#endif