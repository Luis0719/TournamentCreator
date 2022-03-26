#ifndef GROUPS_MODE_H
#define GROUPS_MODE_H

#include "src/entities/contestant.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
struct GroupsOptions : GameModeOptions {
  GroupsOptions(int round_num) : GameModeOptions(round_num){};
};

class GroupsMode : public GameMode {
 public:
  GroupsMode(std::unique_ptr<GroupsOptions> options);
  ~GroupsMode();

  void AutomaticSetup() override;
  void ManualSetup() override;
  void NextRound() override;
  void PlayRound() override;
};
}  // namespace tournament

#endif