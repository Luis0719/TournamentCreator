#ifndef CONTESTANT_CREATOR_H
#define CONTESTANT_CREATOR_H

#include <vector>

#include "src/entities/contestant.h"

namespace tournament {
class ContestantCreator {
 public:
  virtual std::unique_ptr<std::vector<std::unique_ptr<Contestant>>>
  CreateContestants() = 0;
  virtual ~ContestantCreator(){};
};
}  // namespace tournament

#endif