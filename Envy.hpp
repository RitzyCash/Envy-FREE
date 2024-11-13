#include <Windows.h>
#include <cstdio>
#include <iostream>

namespace Internal
{

    namespace RRUI
    {
        namespace Watch
        {
            static std::string MiscTab = "dacd733ca9a01dd47b9d3b62a67ecfb4";
            static std::string DevUI = "f364a1b83f565124fa3049eda88094b6";
        }
    }


    namespace Prefab
    {
        static std::wstring Customizer = L"[ClothingCustomizerTool]";
        static std::string CharadesCard = "[CharadesCard]";
        static std::string ShareCamera = "[ShareCamera]";
        static std::string MakerPen = "[MakerPen]";
        static std::string FeedbackTool = "[FeedbackTool]";
        static std::string ClothingCustomizer = "[ClothingCustomizerTool]";
        static std::string ClothingCustomizerMarker = "[ClothingCustomizerMarketSet]";
        static std::string Dracula = "[Quest_Dracula1_DraculaBoss]";
    }

    namespace Skins
    {
        static std::string GoldPaintballGun = "PaintballGun_Skin_Gold";
        static std::string GoldBasketball = "Basketball_Skin_Gold";

        namespace Default
        {
            static std::string PurplePaintballGun = "PaintballGun_Skin_Purple";
            static std::string PurpleBasketball = "Basketball_Skin_Purple";
            static std::string ConfettiGun = "";
        }
    }

    static uintptr_t BaseAddress = (uintptr_t)GetModuleHandle(NULL);

    static uintptr_t GetModuleBase(const char* module)
    {
        uintptr_t ModuleBase = (uintptr_t)GetModuleHandleA(module);
        return ModuleBase;
    }
}

