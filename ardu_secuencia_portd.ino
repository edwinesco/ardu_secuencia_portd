void setup() {
  // put your setup code here, to run once:
    //DDRD = 0;     //Configuro todo el puerto D como salidas

    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);

    PORTD = 0;    //Hago una limpieza inicial del puerto D
}

void loop() {
  // Inicio la secuencia:
  PORTD = 0b10000001;
  delay(1000);
  PORTD = 0b01000010;
  delay(1000);
  PORTD = 0b00100100;
  delay(1000);
  PORTD = 0b00011000;
  delay(1000);
  PORTD = 0b00100100;
  delay(1000);
  PORTD = 0b01000010;
  delay(1000);
}
