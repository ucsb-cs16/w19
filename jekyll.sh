#!/usr/bin/env bash

[[ -s "$HOME/.rvm/scripts/rvm" ]] && . "$HOME/.rvm/scripts/rvm"

rvm use
bundle exec jekyll serve
