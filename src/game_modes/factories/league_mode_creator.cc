#include "src/game_modes/factories/league_mode_creator.h"

#include <memory>

#include "absl/memory/memory.h"
#include "glog/logging.h"
#include "src/game_modes/game_mode.h"
#include "src/game_modes/league_mode.h"

namespace tournament {
namespace factory {

std::unique_ptr<LeagueOptions> BuildLeagueOptions() {
  return absl::make_unique<LeagueOptions>(1);
};

std::unique_ptr<GameMode> LeagueModeCreator::CreateTournament() {
  LOG(INFO) << "Creating league";
  auto options = BuildLeagueOptions();

  return absl::make_unique<LeagueMode>(std::move(options));
};

}  // namespace factory
}  // namespace tournament