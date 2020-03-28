int led = 11;
float freq;
float freq1;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() { 
  freq = analogRead(A0);
  freq1 = 255*(freq/1023);
  //freq = 5000*(freq/1023); 
  Serial.print(freq);
  Serial.print(" ");
  Serial.println(freq1);
  analogWrite(led, freq1);
  //delay(freq);
  //analogWrite(led, freq1);
  //delay(freq);
}
