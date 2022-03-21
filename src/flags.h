#ifndef FLAGS_H
#define FLAGS_H

#include <string>
#include <vector>

#include "absl/flags/declare.h"

ABSL_DECLARE_FLAG(std::string, teams_source);
ABSL_DECLARE_FLAG(std::vector<std::string>, teams);
ABSL_DECLARE_FLAG(std::string, tournament_mode);

#endif