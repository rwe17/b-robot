#ifndef OSCmini_h
#define OSCmini_h

#include "Arduino.h"


class OSCmini_Class
{
  private:
    // UPD input buffer
    char UDPBuffer[8];
	/*
	 * OSC message read variables,
	 * 0 (and x): always try to find a message start
	 * 1: message start is detected and read bytes until a message type is detected. When message type is received set readCounter and change to 2
	 * 2: read readCounter bytes to get all message parameter. Whan message parameters are available switch directly to 3
	 * 3: readCounter bytes are completely received and parameter will be parsed
	 */
    unsigned char readStatus;
    unsigned char readCounter;
    unsigned char readNumParams;
    unsigned char commandType;

    //char OSC_led1[21]="/1/led1\x00,f\x00\x00\x00\x00\x00\x00"; // Message for LED1
    //char OSC_led1[21] = {'/','1','/','l','e','d','1','\0',',','f','\0','\0','\0','\0','\0','\0'};
	
	//char OSC_fadder1[21]="/2/fadder1\x00\x00,f\x00\x00\x00\x00\x00\x00";  // Message for fadder1 page 2
    
    float extractParamFloat1();
    float extractParamFloat2();

  public:
  // Controls
    uint8_t page;
    float fadder1;
    float fadder2;
    float fadder3;
    float fadder4;
    float xy1_x;
    float xy1_y;
    float xy2_x;
    float xy2_y;
    uint8_t push1;
    uint8_t push2;
    uint8_t push3;
    uint8_t push4;
    uint8_t toggle1;
    uint8_t toggle2;
    uint8_t toggle3;
    uint8_t toggle4;

	OSCmini_Class();
    void MsgSend(char *c,unsigned char msgSize, float p);
    void MsgRead();
	
};

extern OSCmini_Class OSC;

#endif
