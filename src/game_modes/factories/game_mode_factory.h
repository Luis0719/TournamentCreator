#ifndef GAME_MODE_FACTORY_H
#define GAME_MODE_FACTORY_H

#include "src/game_modes/game_mode.h"

namespace tournament {
namespace factory {

std::unique_ptr<GameMode> CreateTournament(GameMode::Mode game_mode);

}  // namespace factory
}  // namespace tournament

#endif