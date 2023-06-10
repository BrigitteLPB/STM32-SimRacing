// C:\Users\Berilda\OneDrive\CODE\langages\C\embarque\AC6\workspace\STM32-SymRacing\auto.h


char ReportDescriptor[53] = {
    0x05, 0x01,                    // USAGE_PAGE (Generic Desktop)
    0x09, 0x05,                    // USAGE (Game Pad)
    0xa1, 0x01,                    // COLLECTION (Application)
    0x85, 0xf1,                    //   REPORT_ID (241)
    0x09, 0x30,                    //   USAGE (X)
    0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
    0x27, 0xff, 0xff, 0x00, 0x00,  //   LOGICAL_MAXIMUM (65535)
    0x35, 0x00,                    //   PHYSICAL_MINIMUM (0)
    0x47, 0xff, 0xff, 0x00, 0x00,  //   PHYSICAL_MAXIMUM (65535)
    0x75, 0x10,                    //   REPORT_SIZE (16)
    0x95, 0x01,                    //   REPORT_COUNT (1)
    0x81, 0x02,                    //   INPUT (Data,Var,Abs)
    0x09, 0x36,                    //   USAGE (Slider)
    0x09, 0x36,                    //   USAGE (Slider)
    0x09, 0x36,                    //   USAGE (Slider)
    0x15, 0x00,                    //   LOGICAL_MINIMUM (0)
    0x26, 0xff, 0x00,              //   LOGICAL_MAXIMUM (255)
    0x35, 0x00,                    //   PHYSICAL_MINIMUM (0)
    0x46, 0xff, 0x00,              //   PHYSICAL_MAXIMUM (255)
    0x75, 0x08,                    //   REPORT_SIZE (8)
    0x95, 0x03,                    //   REPORT_COUNT (3)
    0x81, 0x02,                    //   INPUT (Data,Var,Abs)
    0xc0                           //     END_COLLECTION
};

