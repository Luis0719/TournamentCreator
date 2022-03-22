#ifndef LEAGUE_MODE_H
#define LEAGUE_MODE_H

#include "src/entities/contestant.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
class LeagueMode : public GameMode {
 public:
  LeagueMode(int round_num);
  ~LeagueMode();

  void AutomaticSetup() override;
  Contestant* GetChampion() override;
  void ManualSetup() override;
  void NextRound() override;
  void PlayRound() override;
};
}  // namespace tournament

#endif