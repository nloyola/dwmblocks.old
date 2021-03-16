//Modify this file to change what commands output to your statusbar, and recompile using the make command.

/* sb-volume taken from https://github.com/LukeSmithxyz/dwmblocks */

static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
    {"", "sb-volume",                                                   0,             10},
    {"", "date '+%a %b %d %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
