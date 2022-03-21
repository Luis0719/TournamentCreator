#ifndef TOURNAMENT_MANAGER_H
#define TOURNAMENT_MANAGER_H

#include <string>
#include <vector>

#include "game_modes/game_mode.h"

namespace tournament {
struct TournamentOptions {
  int total_players;
  std::vector<std::string> players;
  GameMode* game_mode;
};

class TournamentManager {
 public:
  TournamentManager::TournamentManager(TournamentOptions* options);
  GameMode* GetGamemode();

 private:
  TournamentOptions* options_;
};
}  // namespace tournament

#endif