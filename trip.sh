#!/bin/bash

echo "please type the lean name of the function, for example, \"calloc\"":

read -r function

# make "$function" -C ~/libftTester
make docker"$function" -C ~/libftTester/
