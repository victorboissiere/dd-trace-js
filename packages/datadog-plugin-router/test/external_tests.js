'use strict'

const defaultConfig = {
  integration: 'router',
  repo: 'https://github.com/pillarjs/router',
  testType: 'mocha',
  testArgs: '--reporter spec --exit --check-leaks test/'
}

module.exports = {
  defaultConfig
}