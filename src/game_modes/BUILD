cc_library(
    name = "game_mode",
    hdrs = ["game_mode.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        "//src/entities:contestant",
        "//src/entities:null_contestant",
        "@com_github_google_glog//:glog",
    ],
)

cc_library(
    name = "game_mode_creator",
    hdrs = ["game_mode_creator.h"],
    visibility = [
        "//src:__subpackages__",
    ],
)

cc_library(
    name = "deathmatch_mode",
    srcs = ["deathmatch_mode.cc"],
    hdrs = ["deathmatch_mode.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":game_mode",
        "//src/entities:contestant",
        "@com_github_google_glog//:glog",
    ],
)

cc_library(
    name = "league_mode",
    srcs = ["league_mode.cc"],
    hdrs = ["league_mode.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":game_mode",
        "//src/entities:contestant",
        "@com_github_google_glog//:glog",
    ],
)

cc_library(
    name = "groups_mode",
    srcs = ["groups_mode.cc"],
    hdrs = ["groups_mode.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":game_mode",
        "//src/entities:contestant",
        "@com_github_google_glog//:glog",
    ],
)

cc_library(
    name = "game_mode_factory",
    srcs = ["game_mode_factory.cc"],
    hdrs = [
        "game_mode_factory.h",
    ],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":deathmatch_mode_creator",
        ":game_mode",
        ":groups_mode_creator",
        ":league_mode_creator",
        "@com_google_absl//absl/memory",
        "@com_google_absl//absl/strings",
    ],
)

cc_library(
    name = "deathmatch_mode_creator",
    srcs = ["deathmatch_mode_creator.cc"],
    hdrs = [
        "deathmatch_mode_creator.h",
    ],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":deathmatch_mode",
        ":game_mode",
        ":game_mode_creator",
        "@com_github_google_glog//:glog",
        "@com_google_absl//absl/memory",
    ],
)

cc_library(
    name = "league_mode_creator",
    srcs = ["league_mode_creator.cc"],
    hdrs = ["league_mode_creator.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":game_mode",
        ":game_mode_creator",
        ":league_mode",
        "@com_github_google_glog//:glog",
        "@com_google_absl//absl/memory",
    ],
)

cc_library(
    name = "groups_mode_creator",
    srcs = ["groups_mode_creator.cc"],
    hdrs = ["groups_mode_creator.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":game_mode",
        ":game_mode_creator",
        ":groups_mode",
        "@com_github_google_glog//:glog",
        "@com_google_absl//absl/memory",
    ],
)
