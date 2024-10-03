//
// Created by Loudbook on 10/2/24.
//

#include "example_plugin.h"
#include <endstone/plugin/plugin.h>

ENDSTONE_PLUGIN("example_plugin", "1.0.0", ExamplePlugin)
{
    description = "An Endstone plugin, with no features!";
}