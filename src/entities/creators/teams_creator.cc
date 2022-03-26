#include "src/entities/creators/teams_creator.h"

#include <vector>

#include "absl/flags/flag.h"
#include "absl/memory/memory.h"
#include "glog/logging.h"
#include "src/entities/contestant.h"
#include "src/entities/team.h"
#include "src/flags.h"

namespace tournament {
std::unique_ptr<std::vector<std::unique_ptr<Contestant>>>
TeamsCreator::CreateContestants() {
  if (absl::GetFlag(FLAGS_teams).size() > 0) {
    return FromArgs();
  }

  if (absl::GetFlag(FLAGS_teams_src) != "") {
    return FromFile();
  }

  throw "Invalid teams' configuration";
}

std::unique_ptr<std::vector<std::unique_ptr<Contestant>>>
TeamsCreator::FromArgs() {
  auto result = absl::make_unique<std::vector<std::unique_ptr<Contestant>>>();

  for (auto& name : absl::GetFlag(FLAGS_teams)) {
    LOG(INFO) << "Creating team: " << name;
    (*result).push_back(absl::make_unique<Team>(name));
  }

  return result;
}

std::unique_ptr<std::vector<std::unique_ptr<Contestant>>>
TeamsCreator::FromFile() {
  return {};
};
}  // namespace tournament