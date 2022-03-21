#include "utils.h"

#include <sys/stat.h>

#include <string>

namespace tournament {
bool file_exists(const std::string& name) {
  struct stat buffer;
  return (stat(name.c_str(), &buffer) == 0);
}
}  // namespace tournament