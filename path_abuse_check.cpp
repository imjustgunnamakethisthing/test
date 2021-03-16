#include <iostream>
#include <fstream>
#include <time.h>

using namespace std;

int main (int argc, char** argv) {
	char *username = getenv("USERNAME");
	char *userprofile = getenv("USERPROFILE");
	char *logonserver = getenv("LOGONSERVER");
	char *userdomain = getenv("USERDOMAIN");
	
	time_t now = time(0); //get time
	string date = ctime(& now);

	if(username == NULL){ username = "No Data Present."; }
	if(userprofile == NULL){ userprofile = "No Data Present."; }
	if(logonserver == NULL){ logonserver = "No Data Present."; }
	if(userdomain == NULL){ userdomain = "No Data Present."; }

	ofstream myfile;
	myfile.open ("C:\\path\\to\\output\\path_abuse_check.txt",ios::app);
	myfile << "Execution Time: " << date;
	myfile << "User Name: " << username << "\n";
	myfile << "User Profile: " << userprofile << "\n";
	myfile << "Logon Server: " << logonserver << "\n";
	myfile << "User Domain: " << userdomain << "\n";
	myfile << "Arguments:\n";
	for (int i = 0; i < argc; ++i)
		myfile << "\t" << argv[i] << "\n";
	myfile << "\n";
	myfile.close();
	return 0;
}
