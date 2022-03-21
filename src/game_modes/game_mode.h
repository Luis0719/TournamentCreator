#ifndef GAME_MODE_H
#define GAME_MODE_H

#include <string>

#include "src/entities/contestant.h"

namespace tournament {
class GameMode {
 public:
  enum Mode { DEATHMATCH, GROUPS, LEAGUE };

  GameMode(std::string mode_name, int round_num)
      : mode_name_(mode_name), round_num_(round_num){};

  // Setup tournament based on environment variables and flags
  virtual void AutomaticSetup() = 0;

  virtual bool IsDone() = 0;

  // Use pregenerated data required for this mode to work
  // TODO(Luis): Define parameters required to setup.
  virtual void ManualSetup() = 0;

  virtual void NextRound() = 0;
  virtual void PlayRound() = 0;
  virtual Contestant* GetChampion() = 0;

 protected:
  std::string mode_name_;
  int round_num_;
};
}  // namespace tournament

#endif