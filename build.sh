#! /bin/bash
set -e
cd "$(dirname "$0")"
cd fd-internal
./build_all "$@"
