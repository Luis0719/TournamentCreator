#ifndef LEAGUE_MODE_H
#define LEAGUE_MODE_H

#include "src/entities/contestant.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
struct LeagueOptions {
  int round_num;

  LeagueOptions(int round_num) : round_num(round_num){};
};

class LeagueMode : public GameMode {
 public:
  LeagueMode(std::unique_ptr<LeagueOptions> options);
  ~LeagueMode();

  void AutomaticSetup() override;
  void ManualSetup() override;
  void NextRound() override;
  void PlayRound() override;
};
}  // namespace tournament

#endif