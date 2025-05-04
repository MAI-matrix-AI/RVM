void setup() {
    pinMode(5, OUTPUT); //управление скоростью левого мотора
    pinMode(6, OUTPUT); //управление скоростью правого мотора
    pinMode(7, OUTPUT); //левый мотор (AIN1)
    pinMode(8, OUTPUT); //левый мотор (AIN2)
    pinMode(11, OUTPUT); //правый мотор (BIN1)
    pinMode(12, OUTPUT); //правый мотор (BIN2)
    digitalWrite(5, HIGH); //левый мотор на полную скорость
    digitalWrite(6, HIGH); //правый мотор на полную скорость
}
void forward(int $iter) {
    for (int i = 0; i < $iter; i++) {
        digitalWrite(8, HIGH);
        digitalWrite(12, HIGH);
    }
}
void backward() {
    digitalWrite(8, LOW);
    digitalWrite(12, LOW);
}
void right() {
    digitalWrite(11, HIGH)
}
void left() {
    digitalWrite(7, HIGH)
