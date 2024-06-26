﻿#pragma once
#include "../ModuleBase.h"

static GKModule __better_scope = { "Better Scoping", VISUAL, 0x0, ImGuiKey_None, false, { } };

class ModuleBetterScope : ModuleBase
{
public:
    ModuleBetterScope() : ModuleBase(&__better_scope) {}
    
    void do_module(void* arg) override
    {
        set_float(arg, Offsets::scopeSpeed, 0); // scopeSpeed
        set_float(arg, Offsets::scopeCircleRadius, 9999); // scopeCircleRadius
    }
};
