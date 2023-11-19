This only exists because imgui somehow fails to link, at all, if SDL3 is built
via the cmake project using the meson-cmake module thing.

At least so I hope, if this is not the cause then imgui has never worked with
meson and no one noticed (which I doubt.)

I wish this was not the case, and I will attempt to remove this when SDL3
properly gets released and meson (hopefully) gets a proper wrap for SDL3.
