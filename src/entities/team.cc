#include "team.h"

#include <string>

#include "src/entities/contestant.h"

namespace tournament {
Team::Team(std::string name) : Contestant(name) {}
Team::~Team() {}

std::string Team::GetDetails() {
  // TODO(Luis): Print roaster once it's supported?
  return "";
};
}  // namespace tournament