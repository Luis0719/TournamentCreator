#include "tournament_manager.h"

#include <memory>

#include "glog/logging.h"

namespace tournament {
TournamentManager::TournamentManager(
    std::unique_ptr<TournamentManagerOptions> options)
    : contestants_(std::move(options->contestants)),
      state_(std::move(options->game_mode)){};

TournamentManager::~TournamentManager() {}

void TournamentManager::Start() {
  LOG(INFO) << "Starting tournament";
  state_->SetContext(this);
  state_->AutomaticSetup();

  while (!state_->IsDone()) {
    state_->PlayRound();
    state_->NextRound();
  }

  LOG(INFO) << "Tournament finished!";
  LOG(INFO) << "Congratulations " << state_->GetChampion()->GetName() << "!";
};

TournamentManagerState* TournamentManager::GetGamemode() {
  return state_.get();
}
}  // namespace tournament