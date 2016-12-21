# TDW Color
Functions and macros for working with colors in a script. They can work with functions that can send a message to the player, e.g. SendClientMessage, SendClientMessageToAll, etc..

### Installation
1. Download library.
2. All files move into folder `pawno/includes`. But, you can use the flag `-i<path>` to specify an alternative path.
3. Include it:
```PAWN
#include <a_samp> // standart SAMP library
#include <tdw_color>
```

### Example:
```pawn
#include <tdw_color>
#include <tdw_colorlist>

main()
{
	printf("%s", SCOLOR<BLACK>);
	printf("%08x", COLOR<BLACK>);
	printf("%08x", RGBA(255, 00, 00, 255));
	printf("%08x", RGBA2ARGB(RGBA(255, 00, 00, 255)));
}
```
