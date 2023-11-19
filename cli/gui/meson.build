executable('rivet-gui', icon_sources + [
               'main.cpp',
               '../../extern/imgui/misc/cpp/imgui_stdlib.cpp',
               '../../extern/imgui/imgui.cpp',
               '../../extern/imgui/imgui_demo.cpp',
               '../../extern/imgui/imgui_draw.cpp',
               '../../extern/imgui/imgui_tables.cpp',
               '../../extern/imgui/imgui_widgets.cpp',
               '../../extern/imgui/backends/imgui_impl_sdlrenderer3.cpp',
               '../../extern/imgui/backends/imgui_impl_sdl3.cpp'
           ],
           include_directories: include_directories('../../extern/imgui', '../../extern/imgui/backends'),
           dependencies: gui_deps + libdeps,
           install: true)
