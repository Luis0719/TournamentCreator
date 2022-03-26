cc_library(
  name = "contestant_creator",
  hdrs = ["contestant_creator.h"],
)

cc_library(
  name = "players_creator",
  deps = [
    ":contestant_creator",
  ]
  srcs = ["players_creator.cc"],
  hdrs = ["players_creator.h"],
)

cc_library(
  name = "teams_creator",
  deps = [
    ":contestant_creator",
  ]
  srcs = ["teams_creator.cc"],
  hdrs = ["teams_creator.h"],
)