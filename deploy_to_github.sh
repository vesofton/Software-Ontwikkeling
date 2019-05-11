#!/bin/bash

# -------------------------------------------------
# Title		: deploy_to_github.sh
# Date Created	: 11-05-2019
# Author	: Henrico Brom
# -------------------------------------------------


git config user.name "shippable"
git config user.email "user@shippable.com"


if [ "git ls-remote --heads git@github.com:vesofton/Software-Ontwikkeling.git doxygen_output | wc -l" = "0" ]; then
	git checkout -b doxygen_output
	git push -u origin doxygen_output
	rm -rf doxygen_output .
fi


# Track all modified files
git add output

# You must commit with message containing '[skip ci]' to prevent
# invoking another build (and creating an infinite loop)
git commit -m "Deploy Doxygen files to GitHub [skip ci]"

# In order to push to GitHub, the Deploymeny key must be set
git push git@github.com:vesofton/Software-Ontwikkeling.git doxygen_output
