int led = 13;
float freq;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);
}

void loop() { 
  freq = analogRead(A0);
  freq = 5000*(freq/1023); 
  Serial.println(freq);
  digitalWrite(led, 1);
  delay(freq);
  digitalWrite(led, 0);
  delay(freq);
}
