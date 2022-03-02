const pin_t LED = D6;

void setup() {

    pinMode(LED, OUTPUT);
    
    Particle.subscribe("Deakin_RIOT_SIT210_Photon_Buddy", waveHandler);

}

void loop() {
    

}

void waveHandler(const char *event, const char *data)
{

	if (strcmp(data, "wave") == 0)
	{
	    //if a wave is recieved
	    
	    
		// Turn on the LED 3 times
		
		for (int i = 0; i < 3; i++){
    	    digitalWrite(LED, HIGH);

	        // Leave it on for one second
    	    delay(1s);

    	    // Turn it off
    	    digitalWrite(LED, LOW);
    
    	    // Wait one more second
    	    delay(1s);
		}
    
	} else if (strcmp(data, "pat") == 0)
	{
	    //if a pat is recieved
	    
	    
		// Flash quickly
		
		for (int i = 0; i < 10; i++){
    	    digitalWrite(LED, HIGH);

    	    delay(100);

    	    digitalWrite(LED, LOW);
    
    	    delay(100);
		}
    
	}

}