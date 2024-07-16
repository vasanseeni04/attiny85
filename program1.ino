#include <Keyboard.h>

void setup() {
  // Initialize the Keyboard library
  Keyboard.begin();
  
  // Wait for the Arduino Leonardo/Micro to be recognized by the computer
  delay(2000);

  // Open Chrome (Windows example, adjust for other OS if needed)
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("chrome");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000); // Wait for Chrome to open
  
  // Type the text "comments to download"
  Keyboard.print("comments to download");
}

void loop() {
  // Do nothing here
}
