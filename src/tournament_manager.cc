#include "tournament_manager.h"

#include "game_modes/game_mode.h"
#include "glog/logging.h"

namespace tournament {
TournamentManager::TournamentManager(TournamentManagerOptions* options)
    : options_(options), state_(options->game_mode){};

TournamentManager::~TournamentManager() {}

void TournamentManager::Start() {
  LOG(INFO) << "Starting tournament";
  state_->AutomaticSetup();

  while (!state_->IsDone()) {
    state_->PlayRound();
    state_->NextRound();
  }

  LOG(INFO) << "Tournament finished!";
  //   LOG(INFO) << "Congratulations " << state_->GetChampion()->GetName() <<
  //   "!";
};

GameMode* TournamentManager::GetGamemode() { return options_->game_mode; }
}  // namespace tournament