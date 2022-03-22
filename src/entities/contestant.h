#ifndef CONTESTANT_H
#define CONTESTANT_H

#include <string>
#include <vector>

namespace tournament {
class Contestant {
 public:
  virtual ~Contestant(){};
  virtual std::string GetName() = 0;
  virtual std::vector<Contestant*> GetRoaster() { return {}; };
  virtual void SetRoaster(std::vector<Contestant*> roaster){};

 protected:
  Contestant(std::string name) : name_(name){};
  std::string name_;
  std::vector<Contestant*> roaster_;
};
}  // namespace tournament

#endif