echo "# Midi-Controller-with-LED" >> README.md
git init
git add README.md
git commit -m "first commit"
git remote add origin https://github.com/samerneergaard/Midi-Controller-with-LED.git
git push -u origin master

#include <Bounce.h>

const int channel = 1;
int Lefth = {PIN_B0};
int Lefth2 = {PIN_B1};
int Lefth3 = {2};
int Lefth4 = {3};

int Lefth5 = {4};
int Lefth6 = {5};
int Lefth7 = {6};
int Lefth8 = {7};

int Lefth9 = {8};
int Lefth10 = {9};
int Lefth11 = {PIN_F7};


int Righth = {10};
int Righth2 = {11};
int Righth3 = {13};
int Righth4 = {PIN_F6};
int Righth5 = {12};

int ledPin = PIN_B6;
int ledPin1 = PIN_B5;


//Modify his part so the buttons are in order

Bounce button1 = Bounce(PIN_B0, 5);
Bounce button2 = Bounce(PIN_B1, 5);  
Bounce button3 = Bounce(2, 5);  
Bounce button4 = Bounce(3, 5);  
Bounce button5 = Bounce(4, 5);
Bounce button6 = Bounce(5, 5);  
Bounce button7 = Bounce(6, 5);  
Bounce button8 = Bounce(7, 5);  
Bounce button9 = Bounce(8, 5);
Bounce button10 = Bounce(9, 5);
Bounce button11 = Bounce(10, 5);
Bounce button12 = Bounce(11, 5);
Bounce button13 = Bounce(13, 5);
Bounce button14 = Bounce(12, 5);
Bounce button15 = Bounce(PIN_F6, 5);
Bounce button16 = Bounce(PIN_F7, 5);




void setup() {

   Serial.begin(9600);
   pinMode(PIN_B6, INPUT_PULLUP);
   pinMode(PIN_B5, INPUT_PULLUP);

  pinMode(PIN_B0, INPUT_PULLUP);
  pinMode(PIN_B1, INPUT_PULLUP);
  pinMode(PIN_B2, INPUT_PULLUP);
  pinMode(PIN_B3, INPUT_PULLUP);
  pinMode(PIN_B7, INPUT_PULLUP);
  pinMode(PIN_D0, INPUT_PULLUP);
  pinMode(PIN_D1, INPUT_PULLUP);
  pinMode(PIN_D2, INPUT_PULLUP);
  pinMode(PIN_D3, INPUT_PULLUP);
  pinMode(PIN_C6, INPUT_PULLUP);
  pinMode(PIN_C7, INPUT_PULLUP);
  pinMode(PIN_D5, INPUT_PULLUP);
  pinMode(PIN_D6, INPUT_PULLUP);
  pinMode(PIN_D7, INPUT_PULLUP);
  pinMode(PIN_B4, INPUT_PULLUP);
  pinMode(PIN_F6, INPUT_PULLUP);
  pinMode(PIN_F7, INPUT_PULLUP);

}


void loop() {

  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();
  button10.update();
  button11.update();
  button12.update();
  button13.update();
  button14.update();
  button15.update();
  button16.update();

  if (button1.fallingEdge()) {
    usbMIDI.sendNoteOn(48, 99, channel);  // 61 = C#4
  }
  if (button2.fallingEdge()) {
    usbMIDI.sendNoteOn(49, 99, channel);  // 62 = D4
  }
  if (button3.fallingEdge()) {
    usbMIDI.sendNoteOn(50, 99, channel);  // 63 = D#4
  }
  if (button4.fallingEdge()) {
    usbMIDI.sendNoteOn(51, 99, channel);  // 64 = E4
  }
  if (button5.fallingEdge()) {
    usbMIDI.sendNoteOn(44, 99, channel);  // 65 = F4
  }
  if (button6.fallingEdge()) {
    usbMIDI.sendNoteOn(45, 99, channel);  // 66 = F#4
  }
  if (button7.fallingEdge()) {
    usbMIDI.sendNoteOn(46, 99, channel);  // 67 = G4
  }
  if (button8.fallingEdge()) {
    usbMIDI.sendNoteOn(47, 99, channel);  // 68 = G#4
  }
  if (button9.fallingEdge()) {
    usbMIDI.sendNoteOn(40, 99, channel);  // 69 = A5
  }
  if (button10.fallingEdge()) {
    usbMIDI.sendNoteOn(41, 99, channel);  // 70 = A#5
  }
  if (button11.fallingEdge()) {
    usbMIDI.sendNoteOn(42, 99, channel);  // 71 = B5
  }
  if (button12.fallingEdge()) {
    usbMIDI.sendNoteOn(36, 99, channel);  // 71 = B5
  }
  if (button13.fallingEdge()) {
    usbMIDI.sendNoteOn(37, 99, channel);  // 71 = B5
  }
  if (button14.fallingEdge()) {
    usbMIDI.sendNoteOn(38, 99, channel);  // 71 = B5
  }
  if (button15.fallingEdge()) {
    usbMIDI.sendNoteOn(39, 99, channel);  // 71 = B5
  }
  if (button16.fallingEdge()) {
    usbMIDI.sendNoteOn(43, 99, channel);  // 71 = B5
  }
  
  if (button1.risingEdge()) {
    usbMIDI.sendNoteOff(48, 0, channel);  // 61 = C#4
  }
  if (button2.risingEdge()) {
    usbMIDI.sendNoteOff(49, 0, channel);  // 62 = D4
  }
  if (button3.risingEdge()) {
    usbMIDI.sendNoteOff(50, 0, channel);  // 63 = D#4
  }
  if (button4.risingEdge()) {
    usbMIDI.sendNoteOff(51, 0, channel);  // 64 = E4
  }
  if (button5.risingEdge()) {
    usbMIDI.sendNoteOff(44, 0, channel);  // 65 = F4
  }
  if (button6.risingEdge()) {
    usbMIDI.sendNoteOff(45, 0, channel);  // 66 = F#4
  }
  if (button7.risingEdge()) {
    usbMIDI.sendNoteOff(46, 0, channel);  // 67 = G4
  }
  if (button8.risingEdge()) {
    usbMIDI.sendNoteOff(47, 0, channel);  // 68 = G#4
  }
  if (button9.risingEdge()) {
    usbMIDI.sendNoteOff(40, 0, channel);  // 69 = A5
  }
  if (button10.risingEdge()) {
    usbMIDI.sendNoteOff(41, 0, channel);  // 70 = A#5
  }
  if (button11.risingEdge()) {
    usbMIDI.sendNoteOff(42, 0, channel);  // 71 = B5
  }

  if (button12.risingEdge()) {
    usbMIDI.sendNoteOff(36, 0, channel);  // 71 = B5
  }
  if (button13.risingEdge()) {
    usbMIDI.sendNoteOff(37, 0, channel);  // 71 = B5
  }
  if (button14.risingEdge()) {
    usbMIDI.sendNoteOff(38, 0, channel);  // 71 = B5
  }
  if (button15.risingEdge()) {
    usbMIDI.sendNoteOff(39, 0, channel);  // 71 = B5
  }
  if (button16.risingEdge()) {
    usbMIDI.sendNoteOff(43, 0, channel);  // 71 = B5


  while (usbMIDI.read()) {
  }}
 
  if(digitalRead(Lefth)==LOW){
   Serial.println("left pressed"); 
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
  if(digitalRead(Lefth2)==LOW){
   Serial.println("left pressed"); 
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
 if(digitalRead(Lefth3)==LOW){
   Serial.println("left pressed"); 
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
if(digitalRead(Lefth4)==LOW){
   Serial.println("left pressed"); 
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}  
  if(digitalRead(Lefth5)==LOW){
   Serial.println("left pressed"); 
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
  if(digitalRead(Lefth6)==LOW){
   Serial.println("left pressed"); 
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
  if(digitalRead(Lefth7)==LOW){
   Serial.println("left pressed"); 
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
  if(digitalRead(Lefth8)==LOW){
   Serial.println("left pressed"); 
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
  if(digitalRead(Lefth9)==LOW){
   Serial.println("left pressed"); 
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
  if(digitalRead(Lefth10)==LOW){
   Serial.println("left pressed"); 
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
  if(digitalRead(Lefth11)==LOW){
   Serial.println("left pressed"); 
   for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}


  //rightthand lights:
   if(digitalRead(Righth)==LOW){
   Serial.println("right pressed"); 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
  if(digitalRead(Righth2)==LOW){
   Serial.println("right pressed"); 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
  if(digitalRead(Righth3)==LOW){
   Serial.println("right pressed"); 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
  if(digitalRead(Righth4)==LOW){
   Serial.println("right pressed"); 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
  if(digitalRead(Righth5)==LOW){
   Serial.println("right pressed"); 
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 3) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin1, fadeValue);
    // wait for 30 milliseconds to see the dimming effect;
  }}
  }
