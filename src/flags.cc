#include "flags.h"

#include <iostream>
#include <vector>

#include "absl/flags/flag.h"

ABSL_FLAG(std::string, teams_source, "",
          "How the tournament is going to be played");

ABSL_FLAG(std::vector<std::string>, teams, std::vector<std::string>{},
          "Comma-listed list of teams");

ABSL_FLAG(std::string, tournament_mode, "deathmatch",
          "How the tournament is going to be played");