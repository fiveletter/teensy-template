#include "WProgram.h"
extern "C"{
	// C Library to use in this .cpp
}

void init(void)
{
	Serial.begin(9600);
	pinMode(13, OUTPUT);
}

void eventLoop(void)
{
	Serial.write("Hello world!\n");
		
	digitalWriteFast(13, HIGH);
	delay(500);
	digitalWriteFast(13, LOW);
	delay(500);
}


/* RARELY EVER CHANGES */

int main(void)
{
	while (1) {
		eventLoop();
	}
}

