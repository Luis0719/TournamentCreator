cc_library(
  name = "contestant",
  hdrs = ["contestant.h"],
  visibility = [
    "//src:__subpackages__"
  ],
)

cc_library(
  name = "null_contestant",
  deps = [
    ":contestant",
  ],
  srcs = ["null_contestant.cc"],
  hdrs = ["null_contestant.h"],
  visibility = [
    "//src:__subpackages__",
  ],
)

cc_library(
  name = "player",
  deps = [
    ":contestant",
    "@com_google_absl//absl/memory:memory",
  ],
  srcs = ["player.cc"],
  hdrs = ["player.h"],
  visibility = [
    "//src:__subpackages__",
  ],
)

cc_library(
  name = "team",
  deps = [
    ":contestant",
  ],
  srcs = ["team.cc"],
  hdrs = ["team.h"],
  visibility = [
    "//src:__subpackages__",
  ],
)