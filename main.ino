using namespace std;

class blinker {

	bool state;
	bool location[2];

	bool getState(){
		return state;
	}

	bool setState(bool reqState) {
		if (reqState == state) return false;
		else {
			state = reqState;
			return true;
		}
	}
};

void setup() {}

void loop() {}
