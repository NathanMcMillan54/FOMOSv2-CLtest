#!/usr/bin/env bash

echo "Starting FOMOS..."
# this doesn't start fomos
# it just starts a tutorial for fomos that will make the user setup fomos by themself

echo "Running requirements.sh"
sh requirements.sh
echo "Running FOMOSCL/startup/CompileFOMOSCL.sh"
sh FOMOSCL/startup/CompileFOMOSCL.sh

