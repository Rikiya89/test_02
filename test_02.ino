// LEDのピン番号
int LED = 12;
// ボタンのピン番号
int BUTTON = 2;
// ボタンの値
int buttonValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonValue = digitalRead(BUTTON);

  if (buttonValue == HIGH) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
