#ifndef NULL_CONTESTANT_H
#define NULL_CONTESTANT_H

#include <string>

#include "src/entities/contestant.h"

namespace tournament {
class NullContestant : public Contestant {
 public:
  NullContestant();
  ~NullContestant();

  std::string GetName() override;
};
}  // namespace tournament

#endif