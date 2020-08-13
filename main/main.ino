using namespace std;

class Blinker {

	bool state;
	public:  bool location[2];

	int setPos(int pos1, int pos2) {
		int location[2] = {pos1,pos2};
		return 1;
	}

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

void setup() {

	Blinker b1;
	b1.setPos(1,1);

}

void loop() {
  
}
