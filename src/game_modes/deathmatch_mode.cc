#include "src/game_modes/deathmatch_mode.h"

#include "glog/logging.h"
#include "src/entities/contestant.h"

namespace tournament {

DeathmatchMode::DeathmatchMode(int round_num)
    : GameMode("Deathmatch", round_num) {}

void DeathmatchMode::AutomaticSetup() {
  LOG(INFO) << "Automatic Deathmatch setup";
};

Contestant* DeathmatchMode::GetChampion() { return nullptr; };

bool DeathmatchMode::IsDone() { return false; };

void DeathmatchMode::ManualSetup(){};

void DeathmatchMode::NextRound(){};

void DeathmatchMode::PlayRound(){};

}  // namespace tournament