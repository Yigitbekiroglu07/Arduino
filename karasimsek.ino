void setup() {
pinMode (4, OUTPUT); 
pinMode (5, OUTPUT); 
pinMode (6, OUTPUT);  // Pin tanımlamalarını çıkış olarak yaptım
pinMode (7, OUTPUT); 
pinMode (8, OUTPUT); 
} 
void loop() {
  // ledler sırasıyla sağdan sola yarım saniye aralıklarla yanacak ve sönecek, ardından soldan sağa yarım saniye aralıklarla yanıp sönecek
  // Elimde 5 led olduğu için 10 led yerine 5 led ile projeyi gerçekleştirdim.
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
