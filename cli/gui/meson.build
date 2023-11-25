executable('rivet-gui', icon_sources + extern_src + [
               'main.cpp',
               'device/rivet_sdl_host.cpp',
               'mage/archive.cpp',
               'ui/archive_viewer.cpp',
               'ui/config_viewer.cpp',
               'ui/texture_viewer.cpp',
               'ui/file_browser.cpp'
           ],
           include_directories : extern_include,
           dependencies : gui_deps + libdeps,
           install : true)
