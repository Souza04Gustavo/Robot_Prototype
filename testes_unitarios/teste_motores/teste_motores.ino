// -- MOTOR 1 (ESQUERDO) --
#define PWMA 4 
#define AIN2 17
#define AIN1 16

// -- MOTOR 2 (DIREITO) --
#define PWMB 21
#define BIN1 18
#define BIN2 19

#define STBY 5
#define LED_BUILTIN 2

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(STBY, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);

  analogWrite(PWMA, 255);
  analogWrite(PWMB, 255);
  digitalWrite(STBY, HIGH);
  
  // DEBUG visual para saber que o setup foi concluido
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  
  Serial.begin(115200);

}

void loop() {
  // sentido 1 de giro
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW); 
  analogWrite(PWMA, 255);
  analogWrite(PWMB, 255);

  delay(3000);

  // sentido 2 de giro
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH); 
  analogWrite(PWMA, 255);
  analogWrite(PWMB, 255);

  delay(3000);

}