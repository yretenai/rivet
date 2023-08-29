snitch_dep = dependency('snitch-1.1.1', required: false)
if not snitch_dep.found()
    snitch_dep = dependency('snitch')
endif
test_deps = deps + [snitch_dep]
