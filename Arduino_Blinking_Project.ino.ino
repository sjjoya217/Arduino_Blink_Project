// void setup() {
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop() {
//   digitalWrite(LED_BUILTIN, HIGH);
//   delay(500);
//   digitalWrite(LED_BUILTIN, LOW);
//   delay(500);
// }

//const int ledPin = LED_BUILTIN;

// void setup() {
//   pinMode(ledPin, OUTPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   if (Serial.available()) {
//     int n = Serial.parseInt();

//     for (int i = 0; i < n; i++) {
//       digitalWrite(ledPin, HIGH);
//       delay(500);
//       digitalWrite(ledPin, LOW);
//       delay(500);
//     }
//   }
// }

// void setup() {
//   Serial.begin(9600);
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop() {
//   if (Serial.available()) {
//     digitalWrite(LED_BUILTIN, HIGH);
//     delay(200);
//     digitalWrite(LED_BUILTIN, LOW);
//     delay(200);
//   }
// }




// void setup() {
//   Serial.begin(9600);
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop() {
//   if (Serial.available() > 0) {
//     char c = Serial.read();

//     if (c >= '0' && c <= '9') {
//       int n = c - '0';

//       for (int i = 0; i < n; i++) {
//         digitalWrite(LED_BUILTIN, HIGH);
//         delay(300);
//         digitalWrite(LED_BUILTIN, LOW);
//         delay(300);
//       }
//     }
//   }
// }
// void setup() {
//   pinMode(LED_BUILTIN, OUTPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   digitalWrite(LED_BUILTIN, HIGH);
//   delay(500);
//   digitalWrite(LED_BUILTIN, LOW);
//   delay(500);
// }



// void setup() {
//   Serial.begin(9600);
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop() {
//   if (Serial.available() > 0) {
//     int n = Serial.read() - '0';  // read single digit

//     for (int i = 0; i < n; i++) {
//       digitalWrite(LED_BUILTIN, HIGH);
//       delay(300);
//       digitalWrite(LED_BUILTIN, LOW);
//       delay(300);
//     }
//   }
// }




// String input = "";

// void setup() {
//   Serial.begin(9600);
//   pinMode(LED_BUILTIN, OUTPUT);
// }

// void loop() {
//   while (Serial.available() > 0) {
//     char c = Serial.read();

//     if (c == '\n') {
//       int n = input.toInt();

//       for (int i = 0; i < n; i++) {
//         digitalWrite(LED_BUILTIN, HIGH);
//         delay(300);
//         digitalWrite(LED_BUILTIN, LOW);
//         delay(300);
//       }

//       input = ""; // reset after execution
//     } 
//     else {
//       input += c;
//     }
//   }
// }

const int ledPin = LED_BUILTIN;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    int blinkCount = Serial.parseInt();

    for (int i = 0; i < blinkCount; i++) {
      digitalWrite(ledPin, HIGH);
      delay(300);
      digitalWrite(ledPin, LOW);
      delay(300);
    }
  }
}
