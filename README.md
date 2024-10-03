# Endstone Plugin Template

This template serves as a way to quickly create new plugins in C++ for [Endstone](https://endstone.dev).
This template includes a GitHub workflow to build your plugin for Windows and Linux, with both Debug and Release builds.

### What to Change
**CMakeLists.txt** - Change `project(example_plugin)` to reflect the name of your project.

**src/example_plugin.cpp** - Change `example_plugin` to the same name used above.

**.github/workflows/cmake-compile.yml** - Change `PROJECT_NAME` to the same name used above.


Of course feel free to change file names to reflect your project name too. I don't want to see any projects named "example_plugin".