#ifndef GROUPS_MODE_H
#define GROUPS_MODE_H

#include "src/entities/contestant.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
class GroupsMode : public GameMode {
 public:
  GroupsMode(int round_num);
  ~GroupsMode();

  void AutomaticSetup() override;
  Contestant* GetChampion() override;
  void ManualSetup() override;
  void NextRound() override;
  void PlayRound() override;
};
}  // namespace tournament

#endif