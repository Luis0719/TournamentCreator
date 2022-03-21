#include "team.h"

#include <string>

#include "src/entities/contestant.h"

namespace tournament {
Team::Team(std::string name) : Contestant(name) {}
Team::~Team() {}

std::string Team::GetName() { return name_; }
std::vector<Contestant*> Team::GetRoaster() { return roaster_; };
void Team::SetRoaster(std::vector<Contestant*> roaster) { roaster_ = roaster; };
}  // namespace tournament