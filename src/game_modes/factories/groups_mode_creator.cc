#include "src/game_modes/factories/groups_mode_creator.h"

#include <memory>

#include "absl/memory/memory.h"
#include "glog/logging.h"
#include "src/game_modes/game_mode.h"
#include "src/game_modes/groups_mode.h"

namespace tournament {
namespace factory {

std::unique_ptr<GameMode> GroupsModeCreator::CreateTournament() {
  LOG(INFO) << "Creating groups";
  return absl::make_unique<GroupsMode>(1);
};

}  // namespace factory
}  // namespace tournament