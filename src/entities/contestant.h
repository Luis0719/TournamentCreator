#ifndef CONTESTANT_H
#define CONTESTANT_H

#include <player.h>

#include <string>
#include <vector>

namespace tournament {
class Player;

class Contestant {
 public:
  virtual std::string GetName() = 0;
  virtual std::vector<Player> GetRoaster() { return {}; };
  virtual void SetRoaster(std::vector<Player>){};

 protected:
  Contestant(std::string name);
  std::string name_;
  std::vector<Player> roaster_;
};
}  // namespace tournament

#endif