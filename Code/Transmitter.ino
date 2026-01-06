#define LASERPIN 13

void setup() {
  pinMode(LASERPIN, OUTPUT);
}

void loop() {  
  int bits[]= {LOW,HIGH,LOW,HIGH,HIGH,LOW,LOW,HIGH};
  digitalWrite(LASERPIN,HIGH);
  delay(10);
  digitalWrite(LASERPIN,LOW);
  for(int i=0;i<8;i++){
    digitalWrite(LASERPIN,bits[i]);
    delay(10);
  }
  digitalWrite(LASERPIN,LOW);
  delay(1000);
}
