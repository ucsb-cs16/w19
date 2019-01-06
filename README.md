# UCSB CS16 (Winter 2019, Yekaterina Kharitonova)

Repo for CS16 course material (Winter 2019, Yekaterina Kharitonova)

Website: <https://ucsb-cs16.github.io/w19>

The theme currently being used can be find in the jekyll-theme value
in `_config.yml`

The navigation is set by the values in `_data/navigation.yml`

Jekyll status on Travis-CI: [![Build Status](https://travis-ci.org/ucsb-cs16/w19.svg?branch=master)](https://travis-ci.org/ucsb-cs16/w19)

* Travis-ci: <https://travis-ci.org/ucsb-cs16/w19>
* To add a status image like this in your README.md, see [these instructions](https://docs.travis-ci.com/user/status-images/)
* You can login to travis-ci.org with your normal Github.com username/password.

To test locally:
* One time setup:
    * `git clone` the repo
    * Install rvm (the Ruby version manager)
    * Run `./setup.sh` to install correct ruby version, bundler version, and bundle the gems
* From then on, to test the site locally:
    * Run `./jekyll.sh`
    * Point browser to <https://localhost:4000/w19-mirza/>

