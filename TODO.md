# todo

## archives

- [x] load toc and dag
- [x] load and extract assets
- [x] handle missing and localized assets correctly
- [ ] replace assets in archives
- [ ] create archives
- [ ] be able to write TOC and DAG files

## ddl

- [ ] load binary ddl structures
- [ ] dump ddl data to json
- [ ] load ddl data from json
- [ ] serialize loaded ddl to binary

## graphics

- [ ] load and convert textures to dds
- [ ] load and convert materials to a json or text format
- [ ] load and convert models to gltf2
- [ ] load and convert animations to gltf2
- [ ] load and convert zones to gltf2
- [ ] serialize dds textures back to binary
- [ ] serialize gltf2 data back to binary (textures, models, maybe animations. not zones)

## audio

- [ ] load and convert wem audio to wav
- [ ] parse wwise even lookup, parse event data for names

## other

- [ ] add a gui editor (sdl2 + imgui?) - this is a long term goal, and necessary for zone editing
- [ ] figure out the deal with node graphs, actors, scripts, and conduit (??)
- [ ] look if effects can be converted (unlikely, effects are usually specialized for the engine)
