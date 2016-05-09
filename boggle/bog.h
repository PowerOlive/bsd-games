// Copyright (c) 1993 The Regents of the University of California.
// This file is free software, distributed under the BSD license.

#include "../config.h"

#define LOADDICT		1	// Load the dictionary for speed

//
// Locations for the dictionary (generated by mkdict),
// index (generated by mkindex), and helpfile
#define DICT			_PATH_GAME_DATA "boggle/dictionary"
#define DICTINDEX		_PATH_GAME_DATA "boggle/dictindex"
#define HELPFILE		_PATH_GAME_DATA "boggle/helpfile"

//
// The theoretical maximum for MAXWORDLEN is ('a' - 1) == 96
#define MAXWORDLEN		40	// Maximum word length
#define MAXPWORDS		200	// Maximum number of player's words
#define MAXMWORDS		200	// Maximum number of machine's words
#define MAXPSPACE		2000	// Space for player's words
#define MAXMSPACE		4000	// Space for machines's words

#define MAXCOLS			20

//
// The following determine the screen layout
#define PROMPT_COL		20
#define PROMPT_LINE		2

#define BOARD_COL		0
#define BOARD_LINE		0

#define SCORE_COL		20
#define SCORE_LINE		0

#define LIST_COL		0
#define LIST_LINE		10

#define TIMER_COL		20
#define TIMER_LINE		2

//
// Internal dictionary index
// Initialized from the file created by mkindex
struct dictindex {
    long start;
    long length;
};