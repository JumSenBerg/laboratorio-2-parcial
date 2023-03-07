//Julio Castellanos
int a = 9;
int b = 10;
int c = 6;
int d = 5;
int e = 4;
int f = 8;
int g = 7;
int ms;
void setup() {
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void numero0() {
  digitalWrite(g, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero1() {
  digitalWrite(g, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, LOW);
  delay(1000);
}
void numero2() {
  digitalWrite(g, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero3() {
  digitalWrite(g, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero4() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, LOW);
  delay(1000);
}
void numero5() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero6() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero7() {
  digitalWrite(g, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero8() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero9() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero10() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero11() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(a, LOW);
  delay(1000);
}
void numero12() {
  digitalWrite(g, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(b, LOW);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero13() {
  digitalWrite(g, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, LOW);
  delay(1000);
}
void numero14() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(b, LOW);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero15() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);
  digitalWrite(b, LOW);
  digitalWrite(a, HIGH);
  delay(1000);
}
void numero16(){
  for (int i = 0; i < 50; i++) {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);
  delay(400);

  digitalWrite(g, LOW);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(c, LOW);
  digitalWrite(b, LOW);
  digitalWrite(a, LOW);
  delay(400);
  }
}

void loop() {
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(a, HIGH);

  if (Serial.available()) {
    ms = Serial.parseInt();
    Serial.println(ms);
    if (ms == 0) {
      numero0();
    }
    if (ms == 1) {
      numero1();
    }
    if (ms == 2) {
      numero2();
    }
    if (ms == 3) {
      numero3();
    }
    if (ms == 4) {
      numero4();
    }
    if (ms == 5) {
      numero5();
    }
    if (ms == 6) {
      numero6();
    }
    if (ms == 7) {
      numero7();
    }
    if (ms == 8) {
      numero8();
    }
    if (ms == 9) {
      numero9();
    }
    if (ms == 10) {
      numero10();
    }
    if (ms == 11) {
      numero11();
    }
    if (ms == 12) {
      numero12();
    }
    if (ms == 13) {
      numero13();
    }
    if (ms == 14) {
      numero14();
    }
    if (ms == 15) {
      numero15();
    }
    if(ms == 16) {
      numero16();
    }
  }
}




