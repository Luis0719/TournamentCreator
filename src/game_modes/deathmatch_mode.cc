#include "src/game_modes/deathmatch_mode.h"

#include "glog/logging.h"
#include "src/entities/contestant.h"
#include "src/entities/null_contestant.h"

namespace tournament {

DeathmatchMode::DeathmatchMode(int round_num)
    : GameMode("Deathmatch", round_num) {}
DeathmatchMode::~DeathmatchMode(){};

void DeathmatchMode::AutomaticSetup() {
  LOG(INFO) << "Automatic Deathmatch setup";
};

void DeathmatchMode::ManualSetup(){};

void DeathmatchMode::NextRound() {
  LOG(INFO) << "Next round";
  Finish();
};

void DeathmatchMode::PlayRound() {
  LOG(INFO) << "Playing round " << round_num_;
};

}  // namespace tournament