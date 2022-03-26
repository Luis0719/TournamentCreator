#ifndef MATCH_H
#define MATCH_H

#include "src/entities/contestant.h"

namespace tournament {
class Match {
 public:
  enum Outcome { UNKNOWN, WON, TIED };

  Match(Contestant* local, Contestant* visitor);
  ~Match(){};

  void SetScore(int goals_local, int goals_visitor);
  bool IsFinished();
  Contestant* GetWinner();
  Outcome GetMatchOutcome();
  void Print();
  void PrintWithDetail();

 private:
  Contestant* local_;
  Contestant* visitor_;
  int goals_local_;
  int goals_visitor_;
  bool finished_;
};
}  // namespace tournament

#endif