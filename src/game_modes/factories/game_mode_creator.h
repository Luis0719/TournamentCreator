#ifndef GAME_MODE_CREATOR_H
#define GAME_MODE_CREATOR_H

#include "src/game_modes/game_mode.h"

namespace tournament {
namespace factory {
class GameModeCreator {
 public:
  virtual ~GameModeCreator(){};
  virtual std::unique_ptr<GameMode> CreateTournament() = 0;
};
}  // namespace factory
}  // namespace tournament

#endif