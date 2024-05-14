const int ledPin = 13; //  Ganti dengan pin yang Anda gunakan

void setup() {
  pinMode(ledPin, OUTPUT); // Set pin sebagai output
}

void loop() {
  digitalWrite(ledPin, HIGH);   // Nyalakan LED
  delay(1000);                  // Tunggu 1 detik
  digitalWrite(ledPin, LOW);    // Matikan LED
  delay(1000);                  // Tunggu 1 detik
}
