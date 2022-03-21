#!/bin/sh

function reload() {
  bazel run @hedron_compile_commands//:refresh_all
}

function run() {
  echo "Args: $@"
  mkdir -p logs
  bazel run :main -- $@ --teams="luis,eduardo"
  # --log_dir=`pwd`/logs
}

case $1 in
  reload)
    reload
    ;;
  run)
    run ${*:2}
    ;;
esac