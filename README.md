# serialDebug
Useful Serial Debug for Arduino 

### Install
**Arduino IDE:**  
Put the debug.h in the same folder of the file abc.ino .  
Include the library in the top of your code " #include <debug.h> " and define " #define DEBUG " to enable the library.  

```
#include <debug.h>

#define DEBUG // comment to disable

void setup() {
  DEBUG_BEGIN(9600);
}

void loop() {
  DEBUG_PRINT("lol");
  DEBUG_PRINTLN("asd");
}
```


**PlatformIO**  
Put the folder on the "lib" folder on your project.  

---
DaveCalaway
