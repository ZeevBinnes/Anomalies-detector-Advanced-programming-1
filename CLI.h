

#ifndef CLI_H_
#define CLI_H_

#include <string.h>
#include "commands.h"

using namespace std;

class CLI {
	DefaultIO* dio;
	// you can add data members
	std::vector<Command*> commands;
	DetectorData* dd;
public:
	CLI(DefaultIO* dio);
	void start();
	virtual ~CLI();
private:
	void printMenu();
};

#endif /* CLI_H_ */