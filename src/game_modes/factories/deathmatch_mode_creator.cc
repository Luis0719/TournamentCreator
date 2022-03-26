#include "src/game_modes/factories/deathmatch_mode_creator.h"

#include <memory>

#include "absl/memory/memory.h"
#include "glog/logging.h"
#include "src/game_modes/deathmatch_mode.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
namespace factory {

std::unique_ptr<DeathmatchOptions> BuildDeathmatchOptions() {
  return absl::make_unique<DeathmatchOptions>(1);
};

std::unique_ptr<GameMode> DeathmatchModeCreator::CreateTournament() {
  LOG(INFO) << "Creating deathmatch";
  auto options = BuildDeathmatchOptions();

  return absl::make_unique<DeathmatchMode>(std::move(options));
};

}  // namespace factory
}  // namespace tournament