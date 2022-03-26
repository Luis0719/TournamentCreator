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
