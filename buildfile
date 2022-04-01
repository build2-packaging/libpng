./: {*/ -build/ -upstream/} doc{README CHANGES} legal{LICENSE} manifest

# Don't install tests.
#
tests/: install = false
