#!/bin/bash

# -------------------------------------------------
# Title         : deploy_to_github.sh
# Date Created  : 11-05-2019
# Author        : Henrico Brom
# -------------------------------------------------


# Configure git with a standard name and email
git config user.name "shippable"
git config user.email "user@shippable.com"


# Check if the branch 'doxygen_output' exist,
# if not create it else do a checkout
BRANCH_EXIST=$(git ls-remote --heads git@github.com:$DEPLOY_USERNAME/$DEPLOY_REPONAME.git doxygen_output | wc -l)
if [ $BRANCH_EXIST = 0 ]; then
        echo "Creating branch 'doxygen_output'"
        git checkout --orphan doxygen_output
	git clean -fdx
else
	git checkout doxygen_output
fi


# Remove all existing files and 
# copy the newly genereted doxygen files into the current directory
rm -rf *
rm .gitignore
cp -R $DEPLOY_DIR/. .


# Track all modified files
git add .


# Commit with a message containing '[skip ci]' to prevent
# invoking another build (and creating an infinite loop)
git commit -m "Deploy Doxygen files to GitHub [skip ci]"


# Push the commited files to GitHub,
# this will only work when the Deployment Key is set in GitHub
git push git@github.com:$DEPLOY_USERNAME/$DEPLOY_REPONAME.git doxygen_output

