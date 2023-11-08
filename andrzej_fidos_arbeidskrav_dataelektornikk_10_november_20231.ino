// Deklarerer variablene
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;

int button1 = 10;
int button2 = 11;
int button3 = 12;
int button4 = 13;
int button5 = A0;
int button6 = A1;

void setup() {
// Konfigurer pinne-modusene
  
  
  pinMode(led1, INPUT);
  pinMode(led2, INPUT);
  pinMode(led3, INPUT);
  pinMode(led4, INPUT);
  pinMode(led5, INPUT);
  pinMode(led6, INPUT);
  pinMode(led7, INPUT);
  pinMode(led8, INPUT);

  pinMode(button1, OUTPUT);
  pinMode(button2, OUTPUT);
  pinMode(button3, OUTPUT);
  pinMode(button4, OUTPUT);
  pinMode(button5, OUTPUT);
  pinMode(button6, OUTPUT);
}

void loop() {
  

  if (digitalRead(button1) == HIGH) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }

  if (digitalRead(button2) == HIGH) {
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
  } else {
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }

  if (digitalRead(button3) == HIGH) {
    digitalWrite(led2, HIGH);
    digitalWrite(led5, HIGH);
  } else {
    digitalWrite(led2, LOW);
    digitalWrite(led5, LOW);
  }

  if (digitalRead(button4) == HIGH) {
    digitalWrite(led3, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
  } else {
    digitalWrite(led3, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
  }

  if (digitalRead(button5) == HIGH) {
    digitalWrite(led2, HIGH);
    digitalWrite(led8, HIGH);
  } else {
    digitalWrite(led2, LOW);
    digitalWrite(led8, LOW);
  }

  if (digitalRead(button6) == HIGH) {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
  }
}
