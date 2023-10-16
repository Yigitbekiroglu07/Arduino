#include <NewPing.h>

#define LED1 2
#define LED2 3
#define LED3 4        //Mesafeye göre yakılacak ledlerin pinleri
#define LED4 5
#define LED5 6

#define TRIGGER_PIN 10    //Mesafe sensörünün trigger pini
#define ECHO_PIN 11       // Mesafe sensörünün echo pini
#define MAX_DISTANCE 200  // Mesafe uzunluğu

NewPing sonar (TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); //Yukarıda tanımlanan bilgilerle NewPing nesneni yaratıyoruz.

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);       //pinMode komutuyla ledlerin bağlı olduğu pinleri çıkış olarak ayarlıyoruz.
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);    //Uygulama başlarken tüm ledler sönük olsun diiye yapıyoruz.
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);


}

void loop() {
  int mesafe = sonar.ping_cm();
  
  if (mesafe < 5)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
  }
  else if (mesafe >= 5 && mesafe < 10)
  {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
  }
  else if (mesafe >=10 && mesafe <15)
  {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
  }
  else if (mesafe >=15 && mesafe <20)
  {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
  }
  else if (mesafe >=20 && mesafe <25)
  {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,HIGH);
  }
  else
  {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
  }
    delay(100);

}
