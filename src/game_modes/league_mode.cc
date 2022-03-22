#include "src/game_modes/league_mode.h"

#include "glog/logging.h"
#include "src/entities/contestant.h"

namespace tournament {

LeagueMode::LeagueMode(int round_num) : GameMode("League", round_num) {}

void LeagueMode::AutomaticSetup() { LOG(INFO) << "Automatic League setup"; };

Contestant* LeagueMode::GetChampion() { return nullptr; };

bool LeagueMode::IsDone() { return false; };

void LeagueMode::ManualSetup(){};

void LeagueMode::NextRound(){};

void LeagueMode::PlayRound(){};

}  // namespace tournament
