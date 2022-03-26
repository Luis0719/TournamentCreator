#ifndef GROUPS_MODE_CREATOR_H
#define GROUPS_MODE_CREATOR_H

#include <memory>

#include "src/game_modes/factories/game_mode_creator.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
namespace factory {
class GroupsModeCreator : public GameModeCreator {
 public:
  ~GroupsModeCreator(){};
  std::unique_ptr<GameMode> CreateTournament() override;
};
}  // namespace factory
}  // namespace tournament

#endif