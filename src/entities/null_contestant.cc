#include "null_contestant.h"

#include <string>

#include "src/entities/contestant.h"

namespace tournament {
NullContestant::NullContestant() : Contestant("") {}
NullContestant::~NullContestant() {}
}  // namespace tournament