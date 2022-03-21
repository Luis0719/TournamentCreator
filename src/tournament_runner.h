#ifndef TOURNAMENT_RUNNER_H
#define TOURNAMENT_RUNNER_H

#include "src/game_modes/game_mode.h"

namespace tournament {
GameMode::Mode GetGameMode();
void InitTournament();
}  // namespace tournament

#endif