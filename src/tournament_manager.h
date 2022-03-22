#ifndef TOURNAMENT_MANAGER_H
#define TOURNAMENT_MANAGER_H

#include <memory>
#include <string>
#include <vector>

#include "src/entities/contestant.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
struct TournamentManagerOptions {
  std::unique_ptr<std::vector<std::unique_ptr<Contestant>>> contestants;
  std::unique_ptr<GameMode> game_mode;

  TournamentManagerOptions(
      std::unique_ptr<std::vector<std::unique_ptr<Contestant>>> contestants,
      std::unique_ptr<GameMode> game_mode)
      : contestants(std::move(contestants)), game_mode(std::move(game_mode)){};
};

class TournamentManager {
 public:
  TournamentManager(std::unique_ptr<TournamentManagerOptions> options);
  ~TournamentManager();

  void Start();
  GameMode* GetGamemode();

 private:
  std::unique_ptr<std::vector<std::unique_ptr<Contestant>>> contestants_;
  std::unique_ptr<GameMode> state_;
};
}  // namespace tournament

#endif