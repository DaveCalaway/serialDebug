/*
Debug library.
*/

#ifdef DEBUG
#define DEBUG_BEGIN(x) Serial.begin(x)
#define DEBUG_PRINT(x) Serial.print(x)
#define DEBUG_PRINTLN(x) Serial.println(x)
#define DEBUG_PRINT_HEX(x) Serial.print(x, HEX)
#define DEBUG_PRINT_DEC(x) Serial.print(x, DEC)
#define DEBUG_flush() Serial.flush()
#else
#define DEBUG_BEGIN(x)
#define DEBUG_PRINT(x)
#define DEBUG_PRINT_HEX(x)
#define DEBUG_PRINT_DEC(x)
#define DEBUG_PRINTLN(x)
#define DEBUG_flush()
#endif