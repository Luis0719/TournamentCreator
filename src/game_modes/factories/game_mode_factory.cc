#include "src/game_modes/factories/game_mode_factory.h"

#include <memory>

#include "absl/memory/memory.h"
#include "absl/strings/str_cat.h"
#include "src/game_modes/factories/deathmatch_mode_creator.h"
#include "src/game_modes/factories/game_mode_creator.h"
#include "src/game_modes/factories/groups_mode_creator.h"
#include "src/game_modes/factories/league_mode_creator.h"
#include "src/game_modes/game_mode.h"

namespace tournament {
namespace factory {
std::unique_ptr<GameMode> CreateTournament(GameMode::Mode game_mode) {
  std::unique_ptr<GameModeCreator> game_mode_creator;
  switch (game_mode) {
    case GameMode::Mode::LEAGUE:
      game_mode_creator = absl::make_unique<LeagueModeCreator>();
      break;

    case GameMode::Mode::GROUPS:
      game_mode_creator = absl::make_unique<GroupsModeCreator>();
      break;

    case GameMode::Mode::DEATHMATCH:
      game_mode_creator = absl::make_unique<DeathmatchModeCreator>();
      break;

    default:
      throw absl::StrCat("Tried to create invalid game mode", game_mode);
      break;
  }

  return game_mode_creator->CreateTournament();
}
}  // namespace factory
}  // namespace tournament