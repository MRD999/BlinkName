//Task 2.1p 
//Jordan Bell
const pin_t MY_LED = D7;

SYSTEM_THREAD(ENABLED);


void setup()
{

	pinMode(MY_LED, OUTPUT);
}

.
void loop()
{

	//J .---
	// .
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	// -
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	// -
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//
	// -
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//
	//O ---
	// -
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	// -
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	// -
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//
	//R .-.
	//.
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//-
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//.
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//
	//D -..
	//-
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//.
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//.
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//A .-
	//.
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//-
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//N -.
	//-
	digitalWrite(MY_LED, HIGH);
	delay(2s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//.
	digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(1s);
	//
	digitalWrite(MY_LED, LOW);
	delay(10s);
}
