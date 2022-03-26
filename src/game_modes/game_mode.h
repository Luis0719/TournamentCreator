#ifndef GAME_MODE_H
#define GAME_MODE_H

#include <string>

#include "glog/logging.h"
#include "src/entities/contestant.h"
#include "src/entities/null_contestant.h"
#include "src/tournament_manager.h"

namespace tournament {
class TournamentManager;

struct GameModeOptions {
  int round_num;

  GameModeOptions(int round_num) : round_num(round_num){};
};

class GameMode : public TournamentManagerState {
 public:
  enum Mode { DEATHMATCH, GROUPS, LEAGUE };

  virtual ~GameMode(){};

  // Setup tournament based on environment variables and flags
  virtual void AutomaticSetup() = 0;

  // Use pregenerated data required for this mode to work
  // TODO(Luis): Define parameters required to setup.
  // Used to transfer state from one mode to another
  virtual void ManualSetup() = 0;

  virtual void NextRound() = 0;
  virtual void PlayRound() = 0;

 protected:
  GameMode(std::string mode_name, std::unique_ptr<GameModeOptions> options)
      : TournamentManagerState(),
        mode_name_(mode_name),
        round_num_(options->round_num){};
  std::string mode_name_;
  int round_num_;
};
}  // namespace tournament

#endif