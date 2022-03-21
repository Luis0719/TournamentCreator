#include "src/game_modes/game_mode_factory.h"

#include "absl/strings/str_cat.h"
#include "src/game_modes/deathmatch_mode_creator.h"
#include "src/game_modes/game_mode.h"
#include "src/game_modes/game_mode_creator.h"
#include "src/game_modes/groups_mode_creator.h"
#include "src/game_modes/league_mode_creator.h"

namespace tournament {
namespace factory {
GameMode* CreateTournament(GameMode::Mode game_mode) {
  GameModeCreator* game_mode_creator;
  switch (game_mode) {
    case GameMode::Mode::LEAGUE:
      game_mode_creator = new LeagueModeCreator();
      break;

    case GameMode::Mode::GROUPS:
      game_mode_creator = new GroupsModeCreator();
      break;

    case GameMode::Mode::DEATHMATCH:
      game_mode_creator = new DeathmatchModeCreator();
      break;

    default:
      throw absl::StrCat("Tried to create invalid game mode", game_mode);
      break;
  }

  return game_mode_creator->CreateTournament();
}
}  // namespace factory
}  // namespace tournament