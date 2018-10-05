#!/usr/bin/env bash


#!/usr/bin/env bash

echo "Installing software needed to run Jekyll locally... "

[[ -s "$HOME/.rvm/scripts/rvm" ]] && . "$HOME/.rvm/scripts/rvm"

rvm install ruby-2.5.1
rvm use 2.5.1
gem install bundler
bundle install --path vendor/bundle
echo "Done."

