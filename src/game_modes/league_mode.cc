#include "src/game_modes/league_mode.h"

#include "glog/logging.h"
#include "src/entities/contestant.h"

namespace tournament {

LeagueMode::LeagueMode(int round_num) : GameMode("League", round_num){};
LeagueMode::~LeagueMode(){};

void LeagueMode::AutomaticSetup() { LOG(INFO) << "Automatic League setup"; };

Contestant* LeagueMode::GetChampion() { return nullptr; };

void LeagueMode::ManualSetup(){};

void LeagueMode::NextRound() {
  LOG(INFO) << "Next round";
  Finish();
};

void LeagueMode::PlayRound() { LOG(INFO) << "Playing round " << round_num_; };

}  // namespace tournament
