#ifndef __TYPEDEF_H__
#define __TYPEDEF_H__
#ifndef _WIN32
typedef unsigned char		BYTE;
typedef const unsigned short *	LPCWSTR;
typedef unsigned short		WCHAR;
typedef WCHAR			TCHAR;
typedef const char *		LPCSTR;
typedef int			SOCKET;
typedef void *			HINSTANCE;
typedef void *			HMODULE;
typedef void *			LPVOID;

#define TRUE			1
#define FALSE			0
#define INVALID_SOCKET		-1
#define SOCKET_ERROR		-1

#define WAIT_OBJECT_0		0
#define WAIT_ABANDONED		0x00000080
#define WAIT_TIMEOUT		0x00000102

#ifndef _MAX_PATH
#define _MAX_DRIVE		3
#define _MAX_FNAME		256
#define _MAX_DIR		_MAX_FNAME
#define _MAX_EXT		_MAX_FNAME
#define _MAX_PATH		260
#endif
#endif  // _WIN32
#endif	// __TYPEDEF_H__
