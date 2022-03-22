#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "glog/logging.h"
#include "src/flags.h"
#include "src/tournament_runner.h"
#include "src/utils.h"

namespace tournament {
void ParseAndValidateFlags(int argc, char* argv[]) {
  absl::ParseCommandLine(argc, argv);

  {  // teams input
    if (absl::GetFlag(FLAGS_teams_source) != "" &&
        absl::GetFlag(FLAGS_teams).size() > 0) {
      LOG(WARNING) << "Both teams source and arguments were provided. "
                      "Argument-listed teams will be used.";
    }

    if (absl::GetFlag(FLAGS_teams_source) == "" &&
        absl::GetFlag(FLAGS_teams).size() == 0) {
      LOG(FATAL)
          << "Either provide teams' source file or argument-listed teams.";
    }

    if (absl::GetFlag(FLAGS_teams_source) != "" &&
        !file_exists(absl::GetFlag(FLAGS_teams_source))) {
      LOG(FATAL) << "Could not find teams source file "
                 << absl::GetFlag(FLAGS_teams_source);
    }

    // reaching
    if (absl::GetFlag(FLAGS_teams_source) != "" &&
        absl::GetFlag(FLAGS_teams).size() == 0) {
      LOG(FATAL) << "No teams were provided. Either use --teams_source with a "
                    "source file or --teams for a comma separated list";
    }
  }  // teams input

  {  // game mode input
    // we support both `mode` and boolean flags for setting game mode.
    // FLAGS_mode would be our src of truth, so if a boolean flag
    // was given, use it to set the FLAGS_mode value
    if (absl::GetFlag(FLAGS_deathmatch)) {
      absl::SetFlag(&FLAGS_mode, "deathmatch");
      return;
    }

    if (absl::GetFlag(FLAGS_league)) {
      absl::SetFlag(&FLAGS_mode, "league");
      return;
    }

    if (absl::GetFlag(FLAGS_groups)) {
      absl::SetFlag(&FLAGS_mode, "groups");
      return;
    }
  }
}
}  // namespace tournament

int main(int argc, char* argv[]) {
  google::InitGoogleLogging(argv[0]);
  tournament::ParseAndValidateFlags(argc, argv);

  tournament::InitTournament();

  return 0;
}