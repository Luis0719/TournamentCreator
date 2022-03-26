#ifndef DEATHMATCH_MODE_H
#define DEATHMATCH_MODE_H

#include "src/entities/contestant.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
struct DeathmatchOptions {
  int round_num;

  DeathmatchOptions(int round_num) : round_num(round_num){};
};

class DeathmatchMode : public GameMode {
 public:
  DeathmatchMode(std::unique_ptr<DeathmatchOptions> options);
  ~DeathmatchMode();

  void AutomaticSetup() override;
  void ManualSetup() override;
  void NextRound() override;
  void PlayRound() override;
};
}  // namespace tournament

#endif