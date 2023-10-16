int led1 = 13;
int led2 = 12;
int led3 = 11;
int buton = 10;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(buton,OUTPUT);
}
void loop() {
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  delay(1000);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  delay(1000);
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  delay(1000);
  digitalWrite(10,HIGH);

}
