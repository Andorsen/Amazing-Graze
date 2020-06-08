#define MAINPREFIX z
#define PREFIX agz

#include "script_version.hpp"

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define AGZ_TAG AGZ

// MINIMAL required version for the Mod. Components can specify others...
#define REQUIRED_VERSION 1.00

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(agz - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(agz - COMPONENT)
#endif