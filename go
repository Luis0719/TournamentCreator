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

function new_header {
  local name=$1
  local dir="src/$2"
  local isClass=$3
  local $class_definition=""

  local header_name="$name.h"
  header_path="$dir/$header_name"

  echo $header_path
  header_path="${header_path//\/\///}" # Replace // to /
  echo $header_path

  if [ isClass ]; then
    local class_name=$(sed -r 's/(^|-)(\w)/\U\2/g' <<< $name)
    local class_definition="class $class_name {};"
  fi

  # uppercase
  header_tag_name=$(echo "$name" | tr '[:lower:]' '[:upper:]')
  echo "\
#ifndef ${header_tag_name}_H
#define ${header_tag_name}_H

namespace tournament {

$class_definition

}  // namespace tournament

#endif
" > $header_path
}

function new_lib {
  local name=$1
  local dir="src/$2"
  local isClass=$3
  local $class_definition=""

  dir="${dir//\/\///}" # Replace // to /

  mkdir -p $dir
  local cc_name="$name.cc"
  local cc_path="$dir/$cc_name"

  new_header $1 $2 $3

  if [ isClass ]; then
    local class_name=$(sed -r 's/(^|-)(\w)/\U\2/g' <<< $name) #TODO(): does no work. should convert to camercalse
    local class_definition="$class_name::$class_name(){};"
  fi

  echo "\
#include \"$header_path\"
namespace tournament {

$class_definition

}  // namespace tournament
" > $cc_path
}

case $1 in
  lib)
    new_lib ${*:2}
    ;;
  reload)
    reload
    ;;
  run)
    run ${*:2}
    ;;
esac