

#ifndef _USB_MAIN
#define _USB_MAIN

#include <stdint.h>
#include "R2Protocol.h"

#define BUFFER_LENGTH   255

//int ProcessIO(char* sourceBuffer, char* payloadBuffer, char* checksumBuffer, char* transactionBuffer);
int ProcessIO(struct R2ProtocolPacket *packet);
int gotEND(char * buffer, int buf_length);
int gotSTART(char * buffer);
uint16_t readIndex, writeIndex;
uint8_t readBuffer[BUFFER_LENGTH];



#endif