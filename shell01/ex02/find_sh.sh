#!/bin/sh
find . -name '*.sh' | sed -e 's/\.sh$//' | xargs -n 1 basename
