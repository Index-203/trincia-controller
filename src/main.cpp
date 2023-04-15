#include <Arduino.h>
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>


//rf24
RF24 radio(7, 8); //CE, CSN
const byte address[6] = "00001";

//struct for data transmitter
struct Data_Pack {
int throttle_value;
int shifter_gear_value;
bool shifter_clutch_value;
int track_right_mode_value;
int track_left_mode_value;
bool mower_engage_value;
bool safe_stop;
int piston_height;
int piston_track_unlock;
};


void setup() {
  //rf24 connection initialization
    radio.begin();
    radio.setChannel(125);
    radio.openWritingPipe(address);
    radio.setPALevel(RF24_PA_MAX);
    radio.stopListening();

  //struct initialize
    struct Data_Pack initial_values{50, 0, LOW, 3, 3, LOW, LOW, 0, 0}; //pls remember Franz to insert correct value for servo control






}

void loop() {
  // put your main code here, to run repeatedly:
}          