#include "src/entities/creators/players_creator.h"

#include <vector>

#include "src/entities/contestant.h"

namespace tournament {
std::vector<Contestant> PlayersCreator::FromArgs() { return {}; }

std::vector<Contestant> PlayersCreator::FromFile() { return {}; };
}  // namespace tournament