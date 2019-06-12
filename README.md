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
Put the debugPlus folder into the "lib" folder in your project.  

---
DaveCalaway
