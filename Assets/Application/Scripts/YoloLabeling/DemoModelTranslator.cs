
using System;
using System.Collections.Generic;
using YoloHolo.Services;

namespace YoloHolo.YoloLabeling
{
    [Serializable]
    public class DemoModelTranslator : IYoloClassTranslator
    {
        public string GetName(int classIndex)
        {
            return detectableObjects[classIndex];
        }

        private static List<string> detectableObjects = new()
        {
            "Ender 6 3D printer",
            "FormLabs 3+",
            "MakerBot 3D printer",
            "CNC Milling Machine",
        };
    }
}
