
String input_string;
bool stringComplete = false;

bool initialized = false;
int s_index = 0;

double fan_command = 0;

String initialize_code;
String send_rate_string; //residual for future if we want to send data back once hall pickup is in
String* initialize_string[2] = {&initialize_code, &send_rate_string};

int index = 0;

int fanPin = 3;

void setup() {
  initialized = false;
  stringComplete = false;
  
  initialize_code.reserve(50);
  send_rate_string.reserve(5);
  input_string.reserve(50);

  initialize_code = "";
  send_rate_string = "";
  input_string = "";  
  
  Serial.begin(9600);
  while (! Serial) {
    delay(1);
  }
}

void loop() {
  if(!initialized && stringComplete) {
    waitForROS();
    initialize_code = "";
  }
  
  else if(initialized) {
    if (stringComplete) {
      controlFan();
      stringComplete = false;
    }
  }

  
}

void controlFan()
{
  fan_command = input_string.toDouble();
  input_string = "";
  if(fan_command == -999.0){
    setup();
    return;
  }

  analogWrite(fanPin, fan_command/100.0 * 255.0);
}

void waitForROS()
{
     if (stringComplete) {
        if(initialize_code == "Are you ready kids?") {
          initialized = true;
          Serial.println("Aye aye captain!");
          Serial.flush();
          delay(2000);
        }
        else {
          Serial.println("Authentication failed");
          Serial.flush();
        }
        stringComplete = false;
    }
}

void serialEvent() {
  while (Serial.available()) {
    char inChar = (char)Serial.read();
    if (inChar == '\n' || inChar == ',') {
      if (inChar == '\n') {
        stringComplete = true;
        s_index = 0;
        return;
      }
      s_index++;
      continue;
    }
    if(!initialized){
      *initialize_string[s_index] += inChar;
    }
    else if(initialized){
      input_string += inChar; 
    }
  }
}
