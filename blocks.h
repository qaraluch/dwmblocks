//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  /*For icon display is responsible a particular module */
  /*Form left to right */
	{"", "sound-volume",				 0,	 10},
	{"", "memory-ram",	        30,		0},
	{"", "clock",	              60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
