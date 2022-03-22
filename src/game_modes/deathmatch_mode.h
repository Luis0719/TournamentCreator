#ifndef DEATHMATCH_MODE_H
#define DEATHMATCH_MODE_H

#include "src/entities/contestant.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
class DeathmatchMode : public GameMode {
 public:
  DeathmatchMode(int round_num);
  ~DeathmatchMode();

  void AutomaticSetup() override;
  Contestant* GetChampion() override;
  void ManualSetup() override;
  void NextRound() override;
  void PlayRound() override;
};
}  // namespace tournament

#endif