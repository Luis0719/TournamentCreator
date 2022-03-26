#include "src/entities/factories/contestant_factory.h"

#include <vector>

#include "src/entities/contestant.h"
#include "src/entities/creators/contestant_creator.h"

namespace tournament {

std::unique_ptr<std::vector<Contestant>>
ContestantFactory::CreateContestants() {}

std::unique_ptr<ContestantCreator> ContestantFactory::GetContestantCreator() {}

}  // namespace tournament
