#include "src/entities/factories/contestant_factory.h"

#include <vector>

#include "absl/flags/flag.h"
#include "absl/memory/memory.h"
#include "glog/logging.h"
#include "src/entities/contestant.h"
#include "src/entities/creators/contestant_creator.h"
#include "src/entities/creators/players_creator.h"
#include "src/entities/creators/teams_creator.h"
#include "src/flags.h"

namespace tournament {
namespace factory {
std::unique_ptr<std::vector<std::unique_ptr<Contestant>>> CreateContestants() {
  auto contestant_creator = GetContestantCreator();
  return contestant_creator->CreateContestants();
};

std::unique_ptr<ContestantCreator> GetContestantCreator() {
  if (absl::GetFlag(FLAGS_teams).size() > 0 ||
      absl::GetFlag(FLAGS_teams_src) != "") {
    LOG(INFO) << "Using teams creator";
    return absl::make_unique<TeamsCreator>();
  }

  if (absl::GetFlag(FLAGS_players).size() > 0 ||
      absl::GetFlag(FLAGS_players_src) != "") {
    LOG(INFO) << "Using players creator";
    return absl::make_unique<PlayersCreator>();
  }

  throw "Invalid contestant inputs";
}

}  // namespace factory
}  // namespace tournament
