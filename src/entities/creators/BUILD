cc_library(
    name = "contestant_creator",
    hdrs = ["contestant_creator.h"],
    visibility = [
        "//src:__subpackages__",
    ],
)

cc_library(
    name = "players_creator",
    srcs = ["players_creator.cc"],
    hdrs = ["players_creator.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":contestant_creator",
        "//src:flags",
        "//src/entities:contestant",
        "//src/entities:player",
        "@com_github_google_glog//:glog",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/memory",
    ],
)

cc_library(
    name = "teams_creator",
    srcs = ["teams_creator.cc"],
    hdrs = ["teams_creator.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":contestant_creator",
        "//src:flags",
        "//src/entities:contestant",
        "//src/entities:team",
        "@com_github_google_glog//:glog",
        "@com_google_absl//absl/flags:flag",
        "@com_google_absl//absl/memory",
    ],
)
