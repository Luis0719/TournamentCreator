#include "src/game_modes/groups_mode.h"

#include "glog/logging.h"
#include "src/entities/contestant.h"

namespace tournament {

GroupsMode::GroupsMode(int round_num) : GameMode("Groups", round_num){};
GroupsMode::~GroupsMode(){};

void GroupsMode::AutomaticSetup() { LOG(INFO) << "Automatic Groups setup"; };

void GroupsMode::ManualSetup(){};

void GroupsMode::NextRound() {
  LOG(INFO) << "Next round";
  Finish();
};

void GroupsMode::PlayRound() { LOG(INFO) << "Playing round " << round_num_; };

}  // namespace tournament