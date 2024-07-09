const int greenPins[] = {1, 2, 3, 4};  // Green lights from 1 to 4
const int redPins[] = {5, 6, 7, 8};    // Red lights from 1 to 4
const int yellowPins[] = {9, 10, 11, 12}; // Yellow lights from 1 to 4

const int greenTime = 10;
const int yellowTime = 5;
const int cycleDelay = 100; // delay between cycles in milliseconds

int currentState = 0;

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(greenPins[i], OUTPUT);
    pinMode(redPins[i], OUTPUT);
    pinMode(yellowPins[i], OUTPUT);
  }
  resetLights();
}

void loop() {
  // Turn on one green light and all other red lights
  for (int i = 0; i < 4; i++) {
    if (i == currentState) {
      digitalWrite(greenPins[i], HIGH);
      digitalWrite(redPins[i], LOW);
      digitalWrite(yellowPins[i], LOW);
    } else {
      digitalWrite(greenPins[i], LOW);
      digitalWrite(redPins[i], HIGH);
      digitalWrite(yellowPins[i], LOW);
    }
  }
  delay(greenTime * cycleDelay);

  // Transition to yellow light for the current state
  digitalWrite(greenPins[currentState], LOW);
  digitalWrite(yellowPins[currentState], HIGH);
  delay(yellowTime * cycleDelay);

  // Turn off the yellow light and turn on the red light
  digitalWrite(yellowPins[currentState], LOW);
  digitalWrite(redPins[currentState], HIGH);

  // Move to the next state
  currentState = (currentState + 1) % 4;
  delay(cycleDelay);
}

void resetLights() {
  for (int i = 0; i < 4; i++) {
    digitalWrite(greenPins[i], LOW);
    digitalWrite(redPins[i], HIGH);
    digitalWrite(yellowPins[i], LOW);
  }
}
