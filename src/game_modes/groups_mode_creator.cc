#include "src/game_modes/groups_mode_creator.h"

#include "glog/logging.h"
#include "src/game_modes/game_mode.h"
#include "src/game_modes/groups_mode.h"

namespace tournament {
namespace factory {

GameMode* GroupsModeCreator::CreateTournament() {
  LOG(INFO) << "Creating groups";
  return new GroupsMode(1);
};

}  // namespace factory
}  // namespace tournament