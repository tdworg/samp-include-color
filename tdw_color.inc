/** ======================================================================== **\
| Version:
1.0.0

| License:
Copyright (c) 2016 Double V

This software is provided 'as-is', without any express or implied
warranty. In no event will the authors be held liable for any damages
arising from the use of this software.

Permission is granted to anyone to use this software for any purpose,
including commercial applications, and to alter it and redistribute it
freely, subject to the following restrictions:

1.	The origin of this software must not be misrepresented; you must not
	claim that you wrote the original software. If you use this software
	in a product, an acknowledgement in the product documentation would be
	appreciated but is not required.
2.	Altered source versions must be plainly marked as such, and must not be
	misrepresented as being the original software.
3.	This notice may not be removed or altered from any source distribution.
\** ======================================================================== **/


#if defined _inc_tdw_color
	#undef _inc_tdw_color
#endif

#if defined _TDW_CLLIB__COLOR
	#endinput
#endif

#define _TDW_CLLIB__COLOR

#define RGB%0(%1,%2,%3) ((((%1) & 0xff) << 16) | (((%2) & 0xff) << 8) | ((%3) & 0xff))
#define RGBA%0(%1,%2,%3,%4) ((RGB(%1,%2,%3) << 8) | ((%4) & 0xff))
#define ARGB%0(%1,%2,%3,%4) ((RGB(%1,%2,%3)) | (((%4) & 0xff) << 24))

#define RGBA2ARGB%0(%1) ((((%1) & 0xffffff00) >>> 8) | (((%1) & 0x000000ff) << 24))
#define RGBA2RGB%0(%1) (((%1) & 0xffffff00) >>> 8)
#define ARGB2RGBA%0(%1) ((((%1) & 0x000000ff) << 8) | (((%1) & 0xff000000) >>> 24))
#define ARGB2RGB%0(%1) (((%1) & 0x00ffffff))
