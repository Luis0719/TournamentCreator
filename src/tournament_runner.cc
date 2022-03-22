#include "tournament_runner.h"

#include "absl/flags/flag.h"
#include "absl/strings/str_cat.h"
#include "flags.h"
#include "glog/logging.h"
#include "src/entities/player.h"
#include "src/game_modes/game_mode.h"
#include "src/game_modes/game_mode_factory.h"
#include "src/tournament_manager.h"

namespace tournament {
GameMode::Mode GetGameMode() {
  std::string game_mode = absl::GetFlag(FLAGS_mode);
  if (game_mode == "deathmatch") {
    return GameMode::DEATHMATCH;
  }

  if (game_mode == "league") {
    return GameMode::LEAGUE;
  }

  if (game_mode == "groups") {
    return GameMode::GROUPS;
  }

  throw absl::StrCat("Invalid game mode", game_mode);
}

TournamentManagerOptions& BuildTournamentManagerOptions(GameMode* game_mode) {
  // TODO(Luis): Support any type of contestant
  std::vector<Contestant*> contestants =
      Player::BuildPlayersFromStringList(absl::GetFlag(FLAGS_teams));

  TournamentManagerOptions options = {/* contestants */ contestants,
                                      /* game_moe */ game_mode};

  return options;
}

void InitTournament() {
  LOG(INFO) << "Creating tournament";
  GameMode::Mode game_mode = GetGameMode();
  GameMode* tournament_mode = factory::CreateTournament(game_mode);

  TournamentManagerOptions options =
      BuildTournamentManagerOptions(tournament_mode);
  TournamentManager* manager = new TournamentManager(&options);
  manager->Start();

  delete manager;
}
}  // namespace tournament