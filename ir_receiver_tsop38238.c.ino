 
 /*
   
    The IR sensor's pins are attached to Arduino as so:
    Pin 1 to Vout (pin 11 on Arduino)
    Pin 2 to GND
    Pin 3 to Vcc (+5v from Arduino)

*/

/*******************CODE BEGINS HERE********************/

#include <IRremote.h>

// declare pin
int IRpin = 11;

//assign IRrec to pin
IRrecv irrecv(IRpin);

// store results in below
decode_results results;

void setup()
{
  // sets data rate in bits per sec (baud) for transmission.
  Serial.begin(9600);
  
  // Start the receiver
  irrecv.enableIRIn(); 
}

void loop() 
{
  if (irrecv.decode(&results)) 
    {
      // Print the Serial 'results.value'
      Serial.println(results.value, DEC);

      // Receive the next value
      irrecv.resume();
    }
  
  
}
