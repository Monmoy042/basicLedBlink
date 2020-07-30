
int led = 2;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(led, HIGH);
  delay(50);
  digitalWrite(led, LOW);
  delay(50);
}
