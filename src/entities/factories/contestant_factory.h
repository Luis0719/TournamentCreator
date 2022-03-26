#ifndef CONTESTANT_FACTORY_H
#define CONTESTANT_FACTORY_H

#include <vector>

#include "src/entities/contestant.h"
#include "src/entities/creators/contestant_creator.h"

namespace tournament {
namespace factory {

std::unique_ptr<std::vector<std::unique_ptr<Contestant>>> CreateContestants();
std::unique_ptr<ContestantCreator> GetContestantCreator();

}  // namespace factory
}  // namespace tournament

#endif