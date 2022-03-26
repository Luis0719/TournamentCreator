#include "src/entities/creators/players_creator.h"

#include <vector>

#include "absl/flags/flag.h"
#include "absl/memory/memory.h"
#include "glog/logging.h"
#include "src/entities/contestant.h"
#include "src/entities/player.h"
#include "src/flags.h"

namespace tournament {
std::unique_ptr<std::vector<std::unique_ptr<Contestant>>>
PlayersCreator::CreateContestants() {
  if (absl::GetFlag(FLAGS_players).size() > 0) {
    return FromArgs();
  }

  if (absl::GetFlag(FLAGS_players_src) != "") {
    return FromFile();
  }

  throw "Invalid players' configuration";
}

std::unique_ptr<std::vector<std::unique_ptr<Contestant>>>
PlayersCreator::FromArgs() {
  auto result = absl::make_unique<std::vector<std::unique_ptr<Contestant>>>();

  for (auto& name : absl::GetFlag(FLAGS_players)) {
    LOG(INFO) << "Creating player: " << name;
    (*result).push_back(absl::make_unique<Player>(name));
  }

  return result;
}

std::unique_ptr<std::vector<std::unique_ptr<Contestant>>>
PlayersCreator::FromFile() {
  return {};
};
}  // namespace tournament