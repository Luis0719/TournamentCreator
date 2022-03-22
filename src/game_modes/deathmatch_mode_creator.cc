#include "src/game_modes/deathmatch_mode_creator.h"

#include <memory>

#include "absl/memory/memory.h"
#include "glog/logging.h"
#include "src/game_modes/deathmatch_mode.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
namespace factory {

std::unique_ptr<GameMode> DeathmatchModeCreator::CreateTournament() {
  LOG(INFO) << "Creating deathmatch";
  return absl::make_unique<DeathmatchMode>(1);
};

}  // namespace factory
}  // namespace tournament