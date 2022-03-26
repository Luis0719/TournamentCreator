cc_library(
    name = "contestant",
    hdrs = ["contestant.h"],
    visibility = [
        "//src:__subpackages__",
    ],
)

cc_library(
    name = "null_contestant",
    srcs = ["null_contestant.cc"],
    hdrs = ["null_contestant.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":contestant",
    ],
)

cc_library(
    name = "player",
    srcs = ["player.cc"],
    hdrs = ["player.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":contestant",
        "@com_google_absl//absl/memory",
    ],
)

cc_library(
    name = "team",
    srcs = ["team.cc"],
    hdrs = ["team.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":contestant",
    ],
)

cc_library(
    name = "match",
    srcs = ["match.cc"],
    hdrs = ["match.h"],
    visibility = [
        "//src:__subpackages__",
    ],
    deps = [
        ":contestant",
        ":null_contestant",
        "@com_github_google_glog//:glog",
    ],
)
