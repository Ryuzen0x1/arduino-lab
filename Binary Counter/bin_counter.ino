int b0 = 3;
int b1 = 4;
int b2 = 5;
int b3 = 6;
int analog = A2;
int t = 100;

void setup() {
    pinMode(b0, OUTPUT);
    pinMode(b1, OUTPUT);
    pinMode(b2, OUTPUT);
    pinMode(b3, OUTPUT);
    pinMode(analog, INPUT);
    Serial.begin(9600);
}

void loop() {
    int v = analogRead(analog);
    float volt = v*8./1023.;
    Serial.println(volt);
    delay(t);

    if(volt>=7.9) {
        digitalWrite(b0, LOW);
        digitalWrite(b1, LOW);
        digitalWrite(b2, LOW);
        digitalWrite(b3, HIGH);
    }
    else if(volt>=6.9) {
        digitalWrite(b0, HIGH);
        digitalWrite(b1, HIGH);
        digitalWrite(b2, HIGH);
        digitalWrite(b3, LOW);
    }
    else if(volt>=5.9) {
        digitalWrite(b0, LOW);
        digitalWrite(b1, HIGH);
        digitalWrite(b2, HIGH);
        digitalWrite(b3, LOW);
    }
    else if(volt>=4.9) {
        digitalWrite(b0, HIGH);
        digitalWrite(b1, LOW);
        digitalWrite(b2, HIGH);
        digitalWrite(b3, LOW);
    }
    else if(volt>=3.9) {
        digitalWrite(b0, LOW);
        digitalWrite(b1, LOW);
        digitalWrite(b2, HIGH);
        digitalWrite(b3, LOW);
    }
    else if(volt>=2.9) {
        digitalWrite(b0, HIGH);
        digitalWrite(b1, HIGH);
        digitalWrite(b2, LOW);
        digitalWrite(b3, LOW);
    }
    else if(volt>=1.9) {
        digitalWrite(b0, LOW);
        digitalWrite(b1, HIGH);
        digitalWrite(b2, LOW);
        digitalWrite(b3, LOW);
    }
    else if(volt>=0.9) {
        digitalWrite(b0, HIGH);
        digitalWrite(b1, LOW);
        digitalWrite(b2, LOW);
        digitalWrite(b3, LOW);
    }
    else {
        digitalWrite(b0, LOW);
        digitalWrite(b1, LOW);
        digitalWrite(b2, LOW);
        digitalWrite(b3, LOW);
    }
}
