#include "src/game_modes/deathmatch_mode_creator.h"

#include "glog/logging.h"
#include "src/game_modes/deathmatch_mode.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
namespace factory {

GameMode* DeathmatchModeCreator::CreateTournament() {
  LOG(INFO) << "Creating deathmatch";
  return new DeathmatchMode(1);
};

}  // namespace factory
}  // namespace tournament