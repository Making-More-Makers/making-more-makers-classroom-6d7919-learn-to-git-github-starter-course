// Level 2 Example: Button controls LED
// 第2关示例：按钮控制LED

const int buttonPin = 2;  // Button connected to pin 2
const int ledPin = 13;    // LED connected to pin 13

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // Set button as input with pull-up
  pinMode(ledPin, OUTPUT);           // Set LED as output
}

void loop() {
  // Read button state
  int buttonState = digitalRead(buttonPin);
  
  // If button is pressed (LOW because of INPUT_PULLUP)
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);  // Turn LED on
  } else {
    digitalWrite(ledPin, LOW);   // Turn LED off
  }
}

