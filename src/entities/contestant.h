#ifndef CONTESTANT_H
#define CONTESTANT_H

#include <string>

namespace tournament {
class Contestant {
 public:
  virtual ~Contestant(){};
  virtual std::string GetName() { return name_; };
  virtual std::string GetDetails() { return name_; };

 protected:
  Contestant(std::string name) : name_(name){};
  std::string name_;
};
}  // namespace tournament

#endif