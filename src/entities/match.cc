#include "src/entities/match.h"

#include "glog/logging.h"
#include "src/entities/contestant.h"
#include "src/entities/null_contestant.h"

namespace tournament {
Match::Match(Contestant* local, Contestant* visitor)
    : local_(local), visitor_(visitor), finished_(false){};

void Match::SetScore(int goals_local, int goals_visitor) {
  goals_local_ = goals_local;
  goals_visitor_ = goals_visitor;

  finished_ = true;
};

Match::Outcome Match::GetMatchOutcome() {
  if (!finished_) {
    return Match::Outcome::UNKNOWN;
  }

  if (goals_local_ != goals_visitor_) {
    return Match::Outcome::WON;
  }

  return Match::Outcome::TIED;
}

Contestant* Match::GetWinner() {
  if (!finished_) {
    LOG(ERROR) << "Tried to get winner but score haven't been defined";
    return new NullContestant();
  }

  if (goals_local_ > goals_visitor_) {
    return local_;
  }

  if (goals_visitor_ > goals_local_) {
    return visitor_;
  }

  // Consumers should call GetMatchOutcome before this to prevent calling
  // GetWinner if there was a tied
  return new NullContestant();
};

void Match::Print() {
  LOG(INFO) << local_->GetName() << " vs " << visitor_->GetName();
};

void Match::PrintWithDetail() {
  LOG(INFO) << local_->GetName() << " (" << goals_local_ << ") vs "
            << visitor_->GetName() << " (" << goals_visitor_ << ")";
};

}  // namespace tournament
