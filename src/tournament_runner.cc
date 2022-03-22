#include "tournament_runner.h"

#include <memory>

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

std::unique_ptr<TournamentManagerOptions> BuildTournamentManagerOptions(
    std::unique_ptr<GameMode> game_mode) {
  // TODO(Luis): Support any type of contestant
  std::unique_ptr<std::vector<std::unique_ptr<Contestant>>> contestants =
      Player::BuildPlayersFromStringList(absl::GetFlag(FLAGS_teams));
  LOG(INFO) << 2;
  return absl::make_unique<TournamentManagerOptions>(
      /* contestants */ std::move(contestants),
      /* game_moe */ std::move(game_mode));
}

void InitTournament() {
  LOG(INFO) << "Creating tournament";

  GameMode::Mode game_mode_type = GetGameMode();
  std::unique_ptr<GameMode> tournament =
      factory::CreateTournament(game_mode_type);

  LOG(INFO) << 1;
  std::unique_ptr<TournamentManagerOptions> options =
      BuildTournamentManagerOptions(std::move(tournament));
  LOG(INFO) << 1;
  std::unique_ptr<TournamentManager> manager =
      absl::make_unique<TournamentManager>(std::move(options));

  manager->Start();
}
}  // namespace tournament