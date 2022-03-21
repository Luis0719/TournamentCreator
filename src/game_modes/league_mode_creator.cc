#include "src/game_modes/league_mode_creator.h"

#include "glog/logging.h"
#include "src/game_modes/game_mode.h"
#include "src/game_modes/league_mode.h"

namespace tournament {
namespace factory {

GameMode* LeagueModeCreator::CreateTournament() {
  LOG(INFO) << "Creating league";
  return new LeagueMode(1);
};

}  // namespace factory
}  // namespace tournament