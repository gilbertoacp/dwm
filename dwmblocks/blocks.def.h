//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"  ", "curl -s wttr.in/Buenos_Aires?format=1 | grep -o \"[0-9].*\" ", 120 , 0},
	{"  ", "cut -d \" \" -f 1,2,3 /proc/loadavg", 1,0},
	{" "   , "checkupdates | wc -l",                                       120,             0},
	{" "    , "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
