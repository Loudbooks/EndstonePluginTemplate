# Endstone Plugin Template

This template serves as a way to quickly create new plugins in C++ for [Endstone](https://endstone.dev).
This template includes a GitHub workflow to build your plugin for Windows and Linux, with both Debug and Release builds.

### What to Change
[`CMakeLists.txt`](./CMakeLists.txt) - Change `project(example_plugin)` to reflect the name of your project.

[`src/example_plugin.cpp`](./src/example_plugin.cpp) - Change `example_plugin` to the same name used above.

[`.github/workflows/cmake-compile.yml`](./.github/workflows/cmake-compile.yml) - Change `PROJECT_NAME` to the same name used above.
