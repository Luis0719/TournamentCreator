cc_library(
    name = "flags",
    srcs = ["flags.cc"],
    hdrs = ["flags.h"],
    visibility = [
        "//:__subpackages__",
    ],
    deps = [
        "@com_google_absl//absl/flags:flag",
    ],
)

cc_library(
    name = "tournament_runner",
    srcs = ["tournament_runner.cc"],
    hdrs = ["tournament_runner.h"],
    visibility = [
        "//:__pkg__",
    ],
    deps = [
        ":flags",
        ":tournament_manager",
        "//src/entities:player",
        "//src/entities/factories:contestant_factory",
        "//src/game_modes/factories:game_mode_factory",
        "@com_github_google_glog//:glog",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/memory",
    ],
)

cc_library(
    name = "tournament_manager",
    srcs = ["tournament_manager.cc"],
    hdrs = ["tournament_manager.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        "//src/entities:contestant",
        "//src/entities:null_contestant",
        "@com_github_google_glog//:glog",
        "@com_google_absl//absl/memory",
    ],
)

cc_library(
    name = "utils",
    srcs = ["utils.cc"],
    hdrs = ["utils.h"],
    visibility = [
        "//:__subpackages__",
    ],
    deps = [
        "@com_google_absl//absl/flags:flag",
    ],
)
