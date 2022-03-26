#ifndef PLAYER_H
#define PLAYER_H

#include <string>

#include "src/entities/contestant.h"

namespace tournament {
class Team : public Contestant {
 public:
  Team(std::string name);
  ~Team();
};
}  // namespace tournament

#endif