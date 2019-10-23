#include <SoftwareSerial.h>

SoftwareSerial bl(4,5); // SoftwareSerial(rxPin, txPin, inverse_logic)

void setup() {
  Serial.begin(9600);
  Serial.println(F("Modo de Configuração.\nAguardando comandos AT..."));
  bl.begin(38400);
}

void loop() {
  if (Serial.available())
    do {
      char r = Serial.read();
      bl.write(r); 
    } while (Serial.available());
  if (bl.available())
    do {
      Serial.write(bl.read());
    } while (bl.available());
}
