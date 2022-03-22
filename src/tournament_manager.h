#ifndef TOURNAMENT_MANAGER_H
#define TOURNAMENT_MANAGER_H

#include <string>
#include <vector>

#include "src/entities/contestant.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
struct TournamentManagerOptions {
  std::vector<Contestant*> contestants;
  GameMode* game_mode;
};

class TournamentManager {
 public:
  TournamentManager(TournamentManagerOptions* options);
  ~TournamentManager();

  void Start();
  GameMode* GetGamemode();

 private:
  TournamentManagerOptions* options_;
  GameMode* state_;
};
}  // namespace tournament

#endif