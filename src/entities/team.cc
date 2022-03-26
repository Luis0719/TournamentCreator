#include "team.h"

#include <string>

#include "src/entities/contestant.h"

namespace tournament {
Team::Team(std::string name) : Contestant(name) {}
Team::~Team() {}
}  // namespace tournament