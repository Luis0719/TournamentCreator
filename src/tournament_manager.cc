#include "tournament_manager.h"

#include "game_modes/game_mode.h"

namespace tournament {
TournamentManager::TournamentManager(TournamentOptions* options)
    : options_(options){};

GameMode* TournamentManager::GetGamemode() { return options_->game_mode; }
}  // namespace tournament