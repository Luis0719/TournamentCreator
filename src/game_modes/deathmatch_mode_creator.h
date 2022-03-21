#ifndef DEATHMATCH_MODE_CREATOR_H
#define DEATHMATCH_MODE_CREATOR_H

#include "src/game_modes/deathmatch_mode.h"
#include "src/game_modes/game_mode.h"
#include "src/game_modes/game_mode_creator.h"

namespace tournament {
namespace factory {
class DeathmatchModeCreator : public GameModeCreator {
 public:
  GameMode* CreateTournament() override;
};
}  // namespace factory
}  // namespace tournament

#endif