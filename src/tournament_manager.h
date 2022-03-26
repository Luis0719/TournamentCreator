#ifndef TOURNAMENT_MANAGER_H
#define TOURNAMENT_MANAGER_H

#include <memory>
#include <string>
#include <vector>

#include "glog/logging.h"
#include "src/entities/contestant.h"
#include "src/entities/null_contestant.h"

namespace tournament {
class TournamentManagerState;

struct TournamentManagerOptions {
  std::unique_ptr<std::vector<std::unique_ptr<Contestant>>> contestants;
  std::unique_ptr<TournamentManagerState> game_mode;

  TournamentManagerOptions(
      std::unique_ptr<std::vector<std::unique_ptr<Contestant>>> contestants,
      std::unique_ptr<TournamentManagerState> game_mode)
      : contestants(std::move(contestants)), game_mode(std::move(game_mode)){};
};

class TournamentManager {
 public:
  TournamentManager(std::unique_ptr<TournamentManagerOptions> options);
  ~TournamentManager();

  void Start();
  TournamentManagerState* GetGamemode();

  std::vector<std::unique_ptr<Contestant>>* GetContestants() {
    return contestants_.get();
  };

 private:
  std::unique_ptr<std::vector<std::unique_ptr<Contestant>>> contestants_;
  std::unique_ptr<TournamentManagerState> state_;
};

class TournamentManagerState {
 public:
  TournamentManagerState() {}
  virtual ~TournamentManagerState(){};

  void SetContext(TournamentManager* context) { context_ = context; }

  virtual bool IsDone() { return is_done_; };
  virtual void Finish() { is_done_ = true; };

  // Setup tournament based on environment variables and flags
  virtual void AutomaticSetup() = 0;

  // Use pregenerated data required for this mode to work
  // TODO(Luis): Define parameters required to setup.
  // Used to transfer state from one mode to another
  virtual void ManualSetup() = 0;

  virtual void NextRound() = 0;
  virtual void PlayRound() = 0;

  virtual void SetChampion(Contestant* champion) { champion_ = champion; }
  virtual Contestant* GetChampion() {
    if (champion_ == nullptr) {
      LOG(ERROR) << "Tried to access champions but it haven't been set";
      return new NullContestant();
    }

    return champion_;
  };

 protected:
  bool is_done_;
  TournamentManager* context_;
  Contestant* champion_;
};
}  // namespace tournament

#endif