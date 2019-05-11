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
git commit --output -m "Deploy Doxygen files to GitHub [skip ci]"

# In order to push to GitHub, the Deploymeny key must be set
git push git@github.com:vesofton/Software-Ontwikkeling.git doxygen
