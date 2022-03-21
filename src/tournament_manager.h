#ifndef TOURNAMENT_MANAGER_H
#define TOURNAMENT_MANAGER_H

#include <string>
#include <vector>

namespace tournament {
struct TournamentOptions {
  int total_players;
  std::vector<std::string> players;
  std::string mode;
};

class TournamentManager {};
}  // namespace tournament

#endif