#ifndef GAME_MODE_H
#define GAME_MODE_H

#include <string>

#include "player.h"

namespace tournament {
class GameMode {
 public:
  virtual bool IsDone() = 0;
  virtual void PlayRound() = 0;
  virtual void NextRound() = 0;
  virtual Player GetChampion() = 0;  // TODO must return Player entity

 private:
  std::string mode_name_;
  int round_num_;
}
}  // namespace tournament

#endif