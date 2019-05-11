#!/bin/bash

# -------------------------------------------------
# Title         : deploy_to_github.sh
# Date Created  : 11-05-2019
# Author        : Henrico Brom
# -------------------------------------------------


git config user.name "shippable"
git config user.email "user@shippable.com"


BRANCH_EXIST=$(git ls-remote --heads git@github.com:vesofton/Software-Ontwikkeling.git doxygen_output | wc -l)
if [ $BRANCH_EXIST = 0 ]; then
        echo "Creating branch 'doxygen_output'"
        git checkout --orphan doxygen_output
	git clean -fdx
fi

rm -rf *
cp -R $DEPLOY_DIR/. .

# Track all modified files
git add .

# You must commit with message containing '[skip ci]' to prevent
# invoking another build (and creating an infinite loop)
git commit -m "Deploy Doxygen files to GitHub [skip ci]"

# In order to push to GitHub, the Deploymeny key must be set
git push git@github.com:vesofton/Software-Ontwikkeling.git doxygen_output

