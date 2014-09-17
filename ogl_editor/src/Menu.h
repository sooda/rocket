#pragma once

#include <wchar.h>

#ifndef _WIN32
#define _T(v) v
#else
#define _T(v) L ## v
#endif

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

enum
{
	// File

	EDITOR_MENU_NEW = 0x1000,
	EDITOR_MENU_SUB_MENU,
	EDITOR_MENU_SEPARATOR,
	EDITOR_MENU_RECENT_FILE_0,
	EDITOR_MENU_RECENT_FILE_1,
	EDITOR_MENU_RECENT_FILE_2,
	EDITOR_MENU_RECENT_FILE_3,

	EDITOR_MENU_OPEN,
	EDITOR_MENU_SAVE,
	EDITOR_MENU_SAVE_AS,
	EDITOR_MENU_REMOTE_EXPORT,

	// Edit
	
	EDITOR_MENU_UNDO,
	EDITOR_MENU_REDO,
	EDITOR_MENU_CANCEL_EDIT,
	EDITOR_MENU_DELETE_KEY,
	EDITOR_MENU_CUT,
	EDITOR_MENU_COPY,
	EDITOR_MENU_PASTE,
	EDITOR_MENU_SELECT_TRACK,
	EDITOR_MENU_BIAS_P_001,
	EDITOR_MENU_BIAS_P_01,
	EDITOR_MENU_BIAS_P_1,
	EDITOR_MENU_BIAS_P_10,
	EDITOR_MENU_BIAS_P_100,
	EDITOR_MENU_BIAS_P_1000,
	EDITOR_MENU_BIAS_N_001,
	EDITOR_MENU_BIAS_N_01,
	EDITOR_MENU_BIAS_N_1,
	EDITOR_MENU_BIAS_N_10,
	EDITOR_MENU_BIAS_N_100,
	EDITOR_MENU_BIAS_N_1000,

	EDITOR_MENU_SCALE_101,	
	EDITOR_MENU_SCALE_11,	
	EDITOR_MENU_SCALE_12,	
	EDITOR_MENU_SCALE_5,	
	EDITOR_MENU_SCALE_100,	
	EDITOR_MENU_SCALE_1000,	
	EDITOR_MENU_SCALE_099,	
	EDITOR_MENU_SCALE_09,	
	EDITOR_MENU_SCALE_08,	
	EDITOR_MENU_SCALE_05,	
	EDITOR_MENU_SCALE_01,	
	EDITOR_MENU_SCALE_001,	

	EDITOR_MENU_INTERPOLATION,
	EDITOR_MENU_INVERT_SELECTION,
	EDITOR_MENU_ENTER_CURRENT_V,

	// View

	EDITOR_MENU_PLAY,
	EDITOR_MENU_PLAY_LOOP,
	EDITOR_MENU_ROW_UP,
	EDITOR_MENU_ROW_DOWN,
	EDITOR_MENU_TRACK_LEFT,
	EDITOR_MENU_TRACK_RIGHT,
	EDITOR_MENU_SCROLL_LEFT,
	EDITOR_MENU_SCROLL_RIGHT,
	EDITOR_MENU_ROWS_DOWN,
	EDITOR_MENU_ROWS_UP,
	EDITOR_MENU_ROWS_2X_DOWN,
	EDITOR_MENU_ROWS_2X_UP,
	EDITOR_MENU_PREV_BOOKMARK,
	EDITOR_MENU_NEXT_BOOKMARK,
	EDITOR_MENU_PREV_KEY,
	EDITOR_MENU_NEXT_KEY,
	EDITOR_MENU_FOLD_TRACK,
	EDITOR_MENU_UNFOLD_TRACK,
	EDITOR_MENU_FOLD_GROUP,
	EDITOR_MENU_UNFOLD_GROUP,
	EDITOR_MENU_TOGGLE_BOOKMARK,
	EDITOR_MENU_CLEAR_BOOKMARKS,
	EDITOR_MENU_TOGGLE_LOOPMARK,
	EDITOR_MENU_CLEAR_LOOPMARKS,

	EDITOR_MENU_TAB,
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef struct MenuDescriptor
{
#if defined(_WIN32)
	const wchar_t* name;
#else
	const char* name;
#endif
	int id;
	int key;
	int macMod;
	int winMod;
} MenuDescriptor;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

extern MenuDescriptor g_fileMenu[];
extern MenuDescriptor g_editMenu[];
extern MenuDescriptor g_viewMenu[];

