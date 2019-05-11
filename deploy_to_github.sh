#!/bin/bash

# -------------------------------------------------
# Title		: deploy_to_github.sh
# Date Created	: 11-05-2019
# Author	: Henrico Brom
# -------------------------------------------------


git config user.name "shippable"
git config user.email "user@shippable.com"

# You must commit with message containing '[skip ci]' to prevent
# invoking another build (and creating an infinite loop)
git commit output -m "[skip ci] Deploy Doxygen files to GitHub"

# Use the key that Shippable uses to connect to GitHub
ssh-agent bash -c "ssh-add ~/keys/id_${JOB_ID}; git push"
