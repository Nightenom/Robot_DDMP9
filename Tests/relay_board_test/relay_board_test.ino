//this short code tests all combinatin of relay sets

int i;

void setup() {
  // Sets A0 - A3 as output
  pinMode(A0, OUTPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
}

void loop() {
  // count from 1 to 15, and binary output to relay board
  for (i = 1; i <= 15; i++)
  {
    if (i & 1)
      digitalWrite(A0, LOW);
    else
      digitalWrite(A0, HIGH);
    if (i & 2)
      digitalWrite(A1, LOW);
    else
      digitalWrite(A1, HIGH);
    if (i & 4)
      digitalWrite(A2, LOW);
    else
      digitalWrite(A2, HIGH);
    if (i & 8)
      digitalWrite(A3, LOW);
    else
      digitalWrite(A3, HIGH);

    delay(500);
  }

delay(2000);
}  
