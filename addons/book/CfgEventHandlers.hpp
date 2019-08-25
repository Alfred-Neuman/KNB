class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preStart));
    };
};
class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_FILE(XEH_preInit));
    };
};
class Extended_PostInit_EventHandlers {
    class ADDON {
        clientInit = QUOTE(call COMPILE_FILE(XEH_postInitClient));
    };
};
class Extended_Put_EventHandlers {
    class CAManBase {
        class ADDON {
            put = QUOTE(_this call COMPILE_FILE(XEH_put));
        };
    };
};
class Extended_Take_EventHandlers {
    class CAManBase {
        class ADDON {
            take = QUOTE(_this call COMPILE_FILE(XEH_take));
        };
    };
};
