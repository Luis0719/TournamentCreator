#include "team.h"

#include <string>

#include "contestant.h"
#include "player.h"

namespace tournament {
Team::Team(std::string name) : Contestant(name) {}
Team::~Team() {}

std::string Team::GetName() { return name_; }
std::vector<Player> Team::GetRoaster() { return roaster_; };
void Team::SetRoaster(std::vector<Player> roaster) { roaster_ = roaster; };
}  // namespace tournament