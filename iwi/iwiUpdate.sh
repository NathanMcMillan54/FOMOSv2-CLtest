#!/usr/bin/env bash

echo "This file is for updating things installed with iwi"

read -p "UPDATE " iwiURL

cd CL/usrFiles/iwiURL

git pull
