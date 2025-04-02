int P = A1;
int r = 9;
int y = 7;
int g = 5;

void setup() {
    pinMode(sensor,INPUT);
    pinMode(r,OUTPUT);
    pinMode(y,OUTPUT);
    pinMode(g,OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int sensorValue = analogRead(P);
    float voltage = sensorValue*(5.0/1023.0);
    Serial.println(voltage);
    if (voltage >= 4.0) {
        digitalWrite(r, HIGH);
        digitalWrite(y, HIGH);
        digitalWrite(g, HIGH);
    }
    if (voltage < 4.0 && voltage >= 3.0) {
        digitalWrite(r, LOW);
        digitalWrite(y, HIGH);
        digitalWrite(g, HIGH);
    }
    if (voltage < 3.0) {
        digitalWrite(r, LOW);
        digitalWrite(y, LOW);
        digitalWrite(g, HIGH);
    }
}