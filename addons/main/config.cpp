#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author = "Graze";
        authors[] = {"Graze", "Andorsen"};
        authorUrl = "https://github.com/Andorsen";
        VERSION_CONFIG
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgModuleCategories.hpp"