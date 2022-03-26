#include "src/game_modes/deathmatch_mode.h"

#include "absl/memory/memory.h"
#include "glog/logging.h"
#include "src/entities/contestant.h"
#include "src/entities/match.h"
#include "src/entities/null_contestant.h"

namespace tournament {

DeathmatchMode::DeathmatchMode(std::unique_ptr<DeathmatchOptions> options)
    : GameMode("Deathmatch", std::move(options)) {}
DeathmatchMode::~DeathmatchMode(){};

void DeathmatchMode::AutomaticSetup() {
  LOG(INFO) << "Automatic Deathmatch setup";
  auto match =
      absl::make_unique<Match>(context_->GetContestants()->at(0).get(),
                               context_->GetContestants()->at(1).get());
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