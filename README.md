# rivet <br/> managing rift apart

rivet is a processor for rift apart archives.

## status

rivet is in a very early stage of development. 
it can currently extract files from archives, but it cannot yet create archives or replace assets in archives.

see [TODO.md](TODO.md) for a list of planned features.

## building

you need a c++20 compiler and meson to compile rivet.

rivet will try to find the following dependencies, and will build them if they are not found:

- lz4-1.9.4
- nlohmann-json-3.11.2
- zlib-1.3

the following dependencies are provided by rivet:

- [GDeflateCore](https://github.com/microsoft/DirectStorage/tree/main/GDeflate/GDeflate) 
    (this has no formal dependency, and is the DirectStorage GDeflate reference implementation)
- [libgdeflate](https://github.com/NVIDIA/libdeflate/)-1.8.0
  (NVidia's fork of libdeflate to add GDEFLATE)

for testing the following dependencies are required:

- snitch-1.1.1

for meson to find the dependencies, you may need to install pkg-config or cmake.

to build rivet, run the following commands:

```bash
mkdir build
meson setup ../ -Drivet_tests=true 
ninja build
```

on windows, in order to run rivet you will need to have all the dll files from the dependencies in the same 
directory as the rivet executable. you can do this by running the following command:

```bash
meson install --destdir staging
```

to install rivet, run the following command:

this is not encouraged as it will install the dependencies to your system, which may cause conflicts with other programs.

```bash
meson install
```

this will "install" the files into "staging", which will be a directory in the build directory.
the resulting build files are in staging/usr/bin.

## usage

### extracting files

to extract files from an archive, use the `rivet-extract` program:

```bash
rivet-extract <path/to/folder/that/contains/toc> <output directory>
```

the output directory will be created if it does not exist.
