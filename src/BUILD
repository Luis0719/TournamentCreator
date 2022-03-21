cc_library(
  name = "flags",
  deps = [
    "@com_google_absl//absl/flags:flag",
  ],
  srcs = ["flags.cc"],
  hdrs = ["flags.h"],
  visibility = [
    "//visibility:public"
  ],
)

cc_library(
  name = "tournament_runner",
  deps = [
    ":flags",
    "//src/game_modes:game_mode_factory",
    "@com_github_google_glog//:glog",
    "@com_google_absl//absl/flags:flag",
  ],
  srcs = ["tournament_runner.cc"],
  hdrs = ["tournament_runner.h"],
  visibility = [
    "//:__pkg__"
  ]
)

cc_library(
  name = "tournament_manager",
  deps = [
  ],
  srcs = ["tournament_manager.cc"],
  hdrs = ["tournament_manager.h"],
)

cc_library(
  name = "utils",
  deps = [
    "@com_google_absl//absl/flags:flag",
  ],
  srcs = ["utils.cc"],
  hdrs = ["utils.h"],
  visibility = [
    "//visibility:public"
  ],
)