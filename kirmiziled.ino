void setup() {
pinMode (4, OUTPUT); 
pinMode (5, OUTPUT); 
pinMode (6, OUTPUT);  // Pin tanımlamalarını çıkış olarak yaptım
pinMode (7, OUTPUT); 
pinMode (8, OUTPUT);

}
 
void loop() {
  // LEDler sırasıyla sağdan sola bir saniye aralıklarla yanacak ve sönecek
 digitalWrite (4, HIGH); 
 delay (500); 
 digitalWrite (4, LOW); 
 digitalWrite (5, HIGH);
 delay (500);
 digitalWrite (5, LOW); 
 digitalWrite (6, HIGH); 
 delay (500); 
 digitalWrite (6, LOW); 
 digitalWrite (7, HIGH); 
 delay (500); 
 digitalWrite (7, LOW); 
 digitalWrite (8, HIGH); 
 delay (500); 
 digitalWrite (8, LOW); 
 digitalWrite (7, HIGH); 
 delay (500);
 digitalWrite (7, LOW);
 digitalWrite (6, HIGH); 
 delay (500); 
 digitalWrite (6, LOW); 
 digitalWrite (5, HIGH);
 delay (500);
 digitalWrite (5, LOW); 

}
