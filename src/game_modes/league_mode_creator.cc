#include "src/game_modes/league_mode_creator.h"

#include <memory>

#include "absl/memory/memory.h"
#include "glog/logging.h"
#include "src/game_modes/game_mode.h"
#include "src/game_modes/league_mode.h"

namespace tournament {
namespace factory {

std::unique_ptr<GameMode> LeagueModeCreator::CreateTournament() {
  LOG(INFO) << "Creating league";
  return absl::make_unique<LeagueMode>(1);
};

}  // namespace factory
}  // namespace tournament