#define pinVRx A1
#define pinVRy A2
#define pinSW 1

void setup() {
  pinMode(pinVRx, INPUT);
  pinMode(pinVRy, INPUT);
  pinMode(pinSW, INPUT_PULLUP);

  serial.begin(9600);
 

}

void loop() {
  int valorX = analogRead(pinVRx);
  int valorY = analogRead(pinVRy);
  bool statusSW = digitalRead(pinSW);

  serial.print("Valor VRx: ");
  serial.print(map(valorX,0,1023,0,180)):

  serial.print(Valor VRy: ");
  serial.print(map(valorY,0,1023,1023,0));

  if (statusSW == false){
    serial.println("Botao:{SOLTO}");
  }else{
    serial.printl("Botao:[APERTADO});
  }
    
  

}
