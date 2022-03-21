#include "tournament_runner.h"

#include "absl/flags/flag.h"
#include "absl/strings/str_cat.h"
#include "flags.h"
#include "glog/logging.h"
#include "src/game_modes/game_mode.h"
#include "src/game_modes/game_mode_factory.h"

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

void InitTournament() {
  LOG(INFO) << "Creating tournament";
  GameMode::Mode game_mode = GetGameMode();
  GameMode* tournament = factory::CreateTournament(game_mode);
  tournament->AutomaticSetup();
}
}  // namespace tournament