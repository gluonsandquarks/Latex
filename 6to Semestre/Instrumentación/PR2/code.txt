int v = 13;
int a = 12;
int r = 11;

void setup () {
  pinMode(v, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(r, OUTPUT);
}


void loop () {
  
  digitalWrite(v, 1);
  delay(5000);
  
  digitalWrite(v, 0);
  delay(500);
  digitalWrite(v, 1);
  delay(500);
  digitalWrite(v, 0);
  delay(500);
  digitalWrite(v, 1);
  delay(500);
  digitalWrite(v, 0);
  delay(500);
  digitalWrite(v, 1);
  delay(500);
  digitalWrite(v, 0);
  delay(500);
  digitalWrite(v, 1);
  delay(500);
  digitalWrite(v, 0);
  delay(500);
  digitalWrite(v, 1);
  delay(500);
  digitalWrite(v, 0);
  
  digitalWrite(a, 1);
  delay(1000);
  digitalWrite(a, 0);
  digitalWrite(r, 1);
  delay(2000);
  digitalWrite(r, 0);
  
}
