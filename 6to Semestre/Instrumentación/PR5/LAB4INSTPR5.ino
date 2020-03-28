int led = 11;
float freq;
float freq1;
float volt;
float lum;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
  Serial.println("RAW   VOLT   %LuM");
}

void loop() { 
  freq = analogRead(A0);
  volt = 5*(freq/1023);
  lum = 100*(freq/1023);
  freq1 = 254*(freq/1023);
  //freq = 5000*(freq/1023); 
  Serial.print(freq);
  Serial.print("   ");
  Serial.print(volt);
  Serial.print("   ");
  Serial.print(lum);
  Serial.print("%");
  Serial.println();

  analogWrite(led, freq1);
  //delay(freq);
  //analogWrite(led, freq1);
  //delay(freq);
}
