#!/usr/bin/env bash

echo "Installing software needed to run Jekyll locally... "
[[ -s "$HOME/.rvm/scripts/rvm" ]] && source "$HOME/.rvm/scripts/rvm" 
rvm install ruby-2.3.0
rvm use 2.3.0
gem install bundler
bundle install --path vendor/bundle
echo "Done."
