#define pinled 3
#define pinbutton 2
boolean kondisi = true; // 0/LOW

void setup() {
  // put your setup code here, to run once:
pinMode(pinled, OUTPUT); // daftarkan pinled(3) sebagai output
pinMode(pinbutton, INPUT_PULLUP); // daftarkan pinbutton(2) sebagai input
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(pinbutton)==0){ // jika pin nomor 2 mendapat logika 0/low 
  delay(250); // tunda selama 250 milisecond
  kondisi =! kondisi; // maka kondisi (yang awalnya=0) tidak sama dengan kondisi awal (berarti menjadi berlogika=1)
  digitalWrite(pinled, kondisi); // led aktif sesuai nilai variable kondisi 
  }
}
