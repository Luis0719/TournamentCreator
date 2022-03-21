#include "flags.h"

#include <iostream>
#include <vector>

#include "absl/flags/flag.h"

ABSL_FLAG(std::string, teams_source, "",
          "How the tournament is going to be played");

ABSL_FLAG(std::vector<std::string>, teams, std::vector<std::string>{},
          "Comma-listed list of teams");

ABSL_FLAG(std::string, mode, "deathmatch",
          "How the tournament is going to be played");

ABSL_FLAG(bool, league, false, "Create a new league tournament");
ABSL_FLAG(bool, deathmatch, false, "Create a new league tournament");
ABSL_FLAG(bool, groups, false, "Create a new groups tournament");