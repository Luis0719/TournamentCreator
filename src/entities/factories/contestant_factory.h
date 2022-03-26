#ifndef CONTESTANT_FACTORY_H
#define CONTESTANT_FACTORY_H

#include <vector>

#include "src/entities/contestant.h"
#include "src/entities/creators/contestant_creator.h"

namespace tournament {
class ContestantFactory {
 public:
  std::unique_ptr<std::vector<Contestant>> CreateContestants();

 private:
  std::unique_ptr<ContestantCreator> GetContestantCreator();
};
}  // namespace tournament

#endif