#define LED     12
#define LONGO   800
#define CURTO   400
#define INTERV1 200

void longo() {
  digitalWrite(LED, HIGH); delay(LONGO);
  digitalWrite(LED, LOW);  delay(INTERV1);
}

void curto() {
  digitalWrite(LED, HIGH); delay(CURTO);
  digitalWrite(LED, LOW);  delay(INTERV1);
}

void morse(char palavra[]) {
  for(byte i=0; palavra[i]!='\0'; i++)
    switch (toupper(palavra[i])) {
     case 'A': curto(); longo(); break;
     case 'B': longo(); curto(); curto(); curto(); break;
     case 'C': longo(); curto(); longo(); curto(); break;
     case 'O': longo(); longo(); longo(); break;
     case 'S': curto(); curto(); curto(); break;
     default: for(byte i=0; i<5; i++) curto();
    }
}
  
void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  morse("AbC");
  delay(10*INTERV1);
  morse("SOS");
  delay(10*INTERV1);
}
