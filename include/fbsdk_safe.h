#pragma once
/** \file

	Allows FBSDK to be included without subjecting the entire codebase to the
	warning level changes made in the MotionBuilder headers.
*/

#pragma warning (push)
#include <fbsdk/fbsdk.h>
#pragma warning (pop)

#pragma warning (disable : 4709) // Suppress erroneous "comma in array index" warning
#pragma warning (disable : 4100) // Allow unused formal parameter
#pragma warning (disable : 4481) // Allow use of 'override'
