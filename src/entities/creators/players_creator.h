#ifndef PLAYER_CREATOR_H
#define PLAYER_CREATOR_H

#include <vector>

#include "src/entities/contestant.h"
#include "src/entities/creators/contestant_creator.h"

namespace tournament {
class PlayersCreator : public ContestantCreator {
 public:
  std::unique_ptr<std::vector<std::unique_ptr<Contestant>>> CreateContestants()
      override;

 private:
  std::unique_ptr<std::vector<std::unique_ptr<Contestant>>> FromArgs();
  std::unique_ptr<std::vector<std::unique_ptr<Contestant>>> FromFile();
};
}  // namespace tournament

#endif