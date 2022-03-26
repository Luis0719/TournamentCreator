#ifndef CONTESTANT_CREATOR_H
#define CONTESTANT_CREATOR_H

#include <vector>

#include "src/entities/contestant.h"

namespace tournament {
class ContestantCreator {
 public:
  virtual std::vector<Contestant> FromArgs() = 0;
  virtual std::vector<Contestant> FromFile() = 0;
};
}  // namespace tournament

#endif