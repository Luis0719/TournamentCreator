#include "src/game_modes/groups_mode.h"

#include "glog/logging.h"
#include "src/entities/contestant.h"

namespace tournament {

GroupsMode::GroupsMode(int round_num) : GameMode("Groups", round_num) {}

void GroupsMode::AutomaticSetup() {
  LOG(INFO) << "Automatic Deathmatch setup";
};

Contestant* GroupsMode::GetChampion() { return nullptr; };

bool GroupsMode::IsDone() { return false; };

void GroupsMode::ManualSetup(){};

void GroupsMode::NextRound(){};

void GroupsMode::PlayRound(){};

}  // namespace tournament