# serialDebug
Useful Serial Debug for Arduino 

### Install
**Arduino IDE:**  
Put the debugPlus folder into your Arduino Library folder.   

```
#define DEBUG // comment to disable
#include "debugPlus.h"

void setup() {
  DEBUG_BEGIN(9600);
}

void loop() {
  DEBUG_PRINT("lol");
  DEBUG_PRINTLN("asd");
}
```


**PlatformIO**  
You have 2 options:  
1. Put the debugPlus folder into the "lib" folder in your project.  
2. Add these lines in the platformio.ini file:  
```    
lib_deps =
      https://github.com/DaveCalaway/serialDebug.git
```

---
DaveCalaway
