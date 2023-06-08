// C:\Users\Berilda\OneDrive\CODE\langages\C\embarque\AC6\workspace\STM32-SymRacing\pedals.h


char ReportDescriptor[20] = {
    0x05, 0x09,                    // USAGE_PAGE (Button)
    0x19, 0x00,                    // USAGE_MINIMUM (No Buttons Pressed)
    0x29, 0x20,                    // USAGE_MAXIMUM (Button 32)
    0x15, 0x00,                    // LOGICAL_MINIMUM (0)
    0x25, 0x01,                    // LOGICAL_MAXIMUM (1)
    0x75, 0x01,                    // REPORT_SIZE (1)
    0x95, 0x20,                    // REPORT_COUNT (32)
    0x55, 0x00,                    // UNIT_EXPONENT (0)
    0x65, 0x00,                    // UNIT (None)
    0x81, 0x02                     // INPUT (Data,Var,Abs)
};

