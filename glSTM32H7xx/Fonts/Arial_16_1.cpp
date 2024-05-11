
#include "GUIFont.h"
#include "MemoryDefs.h"

extern const uint8_t Arial_16_1_Pixels[];

// Font index for Arial_16_1
const FontItem Arial_16_1[] = {
	{ // Char "!" 
		'!', 		// This char
		4,18, 		// Width and height of the image
		1,3,3,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+0), // Data offset
	},
	{ // Char """ 
		'"', 		// This char
		5,18, 		// Width and height of the image
		0,3,4,6, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+12), // Data offset
	},
	{ // Char "#" 
		'#', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+16), // Data offset
	},
	{ // Char "$" 
		'$', 		// This char
		8,18, 		// Width and height of the image
		0,2,7,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,14, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+28), // Data offset
	},
	{ // Char "%" 
		'%', 		// This char
		14,18, 		// Width and height of the image
		0,3,13,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+42), // Data offset
	},
	{ // Char "&" 
		'&', 		// This char
		10,18, 		// Width and height of the image
		0,3,9,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+66), // Data offset
	},
	{ // Char "'" 
		'\'', 		// This char
		3,18, 		// Width and height of the image
		0,3,2,6, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+90), // Data offset
	},
	{ // Char "(" 
		'(', 		// This char
		5,18, 		// Width and height of the image
		1,3,4,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+94), // Data offset
	},
	{ // Char ")" 
		')', 		// This char
		5,18, 		// Width and height of the image
		1,3,4,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+109), // Data offset
	},
	{ // Char "*" 
		'*', 		// This char
		6,18, 		// Width and height of the image
		0,3,5,7, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+124), // Data offset
	},
	{ // Char "+" 
		'+', 		// This char
		9,18, 		// Width and height of the image
		0,6,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+129), // Data offset
	},
	{ // Char "," 
		',', 		// This char
		4,18, 		// Width and height of the image
		1,14,2,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+143), // Data offset
	},
	{ // Char "-" 
		'-', 		// This char
		5,18, 		// Width and height of the image
		0,11,4,11, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+147), // Data offset
	},
	{ // Char "." 
		'.', 		// This char
		4,18, 		// Width and height of the image
		1,14,2,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+148), // Data offset
	},
	{ // Char "/" 
		'/', 		// This char
		4,18, 		// Width and height of the image
		0,3,3,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+149), // Data offset
	},
	{ // Char "0" 
		'0', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+161), // Data offset
	},
	{ // Char "1" 
		'1', 		// This char
		8,18, 		// Width and height of the image
		1,3,5,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+173), // Data offset
	},
	{ // Char "2" 
		'2', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+185), // Data offset
	},
	{ // Char "3" 
		'3', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+197), // Data offset
	},
	{ // Char "4" 
		'4', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+209), // Data offset
	},
	{ // Char "5" 
		'5', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+221), // Data offset
	},
	{ // Char "6" 
		'6', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+233), // Data offset
	},
	{ // Char "7" 
		'7', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+245), // Data offset
	},
	{ // Char "8" 
		'8', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+257), // Data offset
	},
	{ // Char "9" 
		'9', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+269), // Data offset
	},
	{ // Char ":" 
		':', 		// This char
		4,18, 		// Width and height of the image
		1,6,2,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+281), // Data offset
	},
	{ // Char ";" 
		';', 		// This char
		4,18, 		// Width and height of the image
		1,6,2,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+290), // Data offset
	},
	{ // Char "<" 
		'<', 		// This char
		9,18, 		// Width and height of the image
		0,6,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+302), // Data offset
	},
	{ // Char "=" 
		'=', 		// This char
		9,18, 		// Width and height of the image
		0,7,8,11, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+316), // Data offset
	},
	{ // Char ">" 
		'>', 		// This char
		9,18, 		// Width and height of the image
		0,6,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+326), // Data offset
	},
	{ // Char "?" 
		'?', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+340), // Data offset
	},
	{ // Char "@" 
		'@', 		// This char
		16,18, 		// Width and height of the image
		0,3,15,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+352), // Data offset
	},
	{ // Char "A" 
		'A', 		// This char
		10,18, 		// Width and height of the image
		0,3,9,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+382), // Data offset
	},
	{ // Char "B" 
		'B', 		// This char
		10,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+406), // Data offset
	},
	{ // Char "C" 
		'C', 		// This char
		11,18, 		// Width and height of the image
		1,3,10,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+430), // Data offset
	},
	{ // Char "D" 
		'D', 		// This char
		11,18, 		// Width and height of the image
		1,3,10,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+454), // Data offset
	},
	{ // Char "E" 
		'E', 		// This char
		10,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+478), // Data offset
	},
	{ // Char "F" 
		'F', 		// This char
		9,18, 		// Width and height of the image
		1,3,8,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+502), // Data offset
	},
	{ // Char "G" 
		'G', 		// This char
		12,18, 		// Width and height of the image
		1,3,11,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+526), // Data offset
	},
	{ // Char "H" 
		'H', 		// This char
		11,18, 		// Width and height of the image
		1,3,10,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+550), // Data offset
	},
	{ // Char "I" 
		'I', 		// This char
		4,18, 		// Width and height of the image
		1,3,2,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+574), // Data offset
	},
	{ // Char "J" 
		'J', 		// This char
		8,18, 		// Width and height of the image
		0,3,6,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+586), // Data offset
	},
	{ // Char "K" 
		'K', 		// This char
		10,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+598), // Data offset
	},
	{ // Char "L" 
		'L', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+622), // Data offset
	},
	{ // Char "M" 
		'M', 		// This char
		13,18, 		// Width and height of the image
		1,3,11,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+634), // Data offset
	},
	{ // Char "N" 
		'N', 		// This char
		11,18, 		// Width and height of the image
		1,3,10,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+658), // Data offset
	},
	{ // Char "O" 
		'O', 		// This char
		12,18, 		// Width and height of the image
		1,3,11,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+682), // Data offset
	},
	{ // Char "P" 
		'P', 		// This char
		10,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+706), // Data offset
	},
	{ // Char "Q" 
		'Q', 		// This char
		12,18, 		// Width and height of the image
		0,3,11,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+730), // Data offset
	},
	{ // Char "R" 
		'R', 		// This char
		11,18, 		// Width and height of the image
		1,3,10,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+756), // Data offset
	},
	{ // Char "S" 
		'S', 		// This char
		10,18, 		// Width and height of the image
		0,3,9,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+780), // Data offset
	},
	{ // Char "T" 
		'T', 		// This char
		9,18, 		// Width and height of the image
		0,3,8,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+804), // Data offset
	},
	{ // Char "U" 
		'U', 		// This char
		11,18, 		// Width and height of the image
		1,3,10,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+828), // Data offset
	},
	{ // Char "V" 
		'V', 		// This char
		10,18, 		// Width and height of the image
		0,3,9,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+852), // Data offset
	},
	{ // Char "W" 
		'W', 		// This char
		15,18, 		// Width and height of the image
		0,3,14,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+876), // Data offset
	},
	{ // Char "X" 
		'X', 		// This char
		10,18, 		// Width and height of the image
		0,3,9,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+900), // Data offset
	},
	{ // Char "Y" 
		'Y', 		// This char
		10,18, 		// Width and height of the image
		0,3,9,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+924), // Data offset
	},
	{ // Char "Z" 
		'Z', 		// This char
		9,18, 		// Width and height of the image
		0,3,8,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+948), // Data offset
	},
	{ // Char "[" 
		'[', 		// This char
		4,18, 		// Width and height of the image
		1,3,3,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+972), // Data offset
	},
	{ // Char "\" 
		'\\', 		// This char
		4,18, 		// Width and height of the image
		0,3,3,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+987), // Data offset
	},
	{ // Char "]" 
		']', 		// This char
		4,18, 		// Width and height of the image
		0,3,3,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+999), // Data offset
	},
	{ // Char "^" 
		'^', 		// This char
		7,18, 		// Width and height of the image
		0,3,6,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,6, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1014), // Data offset
	},
	{ // Char "_" 
		'_', 		// This char
		8,18, 		// Width and height of the image
		0,17,7,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1020), // Data offset
	},
	{ // Char "`" 
		'`', 		// This char
		5,18, 		// Width and height of the image
		0,3,3,4, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1021), // Data offset
	},
	{ // Char "a" 
		'a', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1023), // Data offset
	},
	{ // Char "b" 
		'b', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1032), // Data offset
	},
	{ // Char "c" 
		'c', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1044), // Data offset
	},
	{ // Char "d" 
		'd', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1053), // Data offset
	},
	{ // Char "e" 
		'e', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1065), // Data offset
	},
	{ // Char "f" 
		'f', 		// This char
		4,18, 		// Width and height of the image
		0,3,3,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1074), // Data offset
	},
	{ // Char "g" 
		'g', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1086), // Data offset
	},
	{ // Char "h" 
		'h', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1098), // Data offset
	},
	{ // Char "i" 
		'i', 		// This char
		3,18, 		// Width and height of the image
		1,3,2,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1110), // Data offset
	},
	{ // Char "j" 
		'j', 		// This char
		3,18, 		// Width and height of the image
		0,3,2,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1122), // Data offset
	},
	{ // Char "k" 
		'k', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1137), // Data offset
	},
	{ // Char "l" 
		'l', 		// This char
		3,18, 		// Width and height of the image
		1,3,2,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1149), // Data offset
	},
	{ // Char "m" 
		'm', 		// This char
		13,18, 		// Width and height of the image
		1,6,12,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1161), // Data offset
	},
	{ // Char "n" 
		'n', 		// This char
		8,18, 		// Width and height of the image
		1,6,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1179), // Data offset
	},
	{ // Char "o" 
		'o', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1188), // Data offset
	},
	{ // Char "p" 
		'p', 		// This char
		8,18, 		// Width and height of the image
		1,6,7,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1197), // Data offset
	},
	{ // Char "q" 
		'q', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1209), // Data offset
	},
	{ // Char "r" 
		'r', 		// This char
		5,18, 		// Width and height of the image
		1,6,4,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1221), // Data offset
	},
	{ // Char "s" 
		's', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1230), // Data offset
	},
	{ // Char "t" 
		't', 		// This char
		4,18, 		// Width and height of the image
		0,3,3,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1239), // Data offset
	},
	{ // Char "u" 
		'u', 		// This char
		8,18, 		// Width and height of the image
		1,6,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1251), // Data offset
	},
	{ // Char "v" 
		'v', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1260), // Data offset
	},
	{ // Char "w" 
		'w', 		// This char
		11,18, 		// Width and height of the image
		0,6,10,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1269), // Data offset
	},
	{ // Char "x" 
		'x', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1287), // Data offset
	},
	{ // Char "y" 
		'y', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1296), // Data offset
	},
	{ // Char "z" 
		'z', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1308), // Data offset
	},
	{ // Char "{" 
		'{', 		// This char
		5,18, 		// Width and height of the image
		0,3,4,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1317), // Data offset
	},
	{ // Char "|" 
		'|', 		// This char
		4,18, 		// Width and height of the image
		1,3,2,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1332), // Data offset
	},
	{ // Char "}" 
		'}', 		// This char
		5,18, 		// Width and height of the image
		0,3,4,17, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_1_Pixels+1347), // Data offset
	},
};

// Font data for Arial_16_1 
const uint8_t Arial_16_1_Pixels[] = {
	// Char "!" offset 0
	0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x00,0x60,
	// Char """ offset 12
	0x58,0x58,0x48,0x48,
	// Char "#" offset 16
	0x11,0x11,0x11,0x32,0xFF,0x22,0x22,0x26,0xFF,0x44,0x44,0x44,
	// Char "$" offset 28
	0x08,0x3C,0x6A,0x4B,0x48,0x68,0x3C,0x0E,0x0B,0x09,0x4B,0x6B,0x3E,0x08,
	// Char "%" offset 42
	0x38,0x60,0x6C,0x40,0x4C,0x80,0x4C,0x80,0x6D,0x00,0x39,0x00,0x02,0x70,0x02,0xC8,0x04,0xC8,0x04,0xC8,0x08,0xC8,0x18,0x70,
	// Char "&" offset 66
	0x1E,0x00,0x33,0x00,0x33,0x00,0x33,0x00,0x1E,0x00,0x1C,0x00,0x3C,0x00,0x66,0xC0,0x43,0x80,0x41,0x80,0x63,0xC0,0x3E,0x40,
	// Char "'" offset 90
	0x40,0x40,0x40,0x40,
	// Char "(" offset 94
	0x18,0x10,0x30,0x20,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x20,0x30,0x10,0x18,
	// Char ")" offset 109
	0x40,0x20,0x30,0x10,0x10,0x18,0x18,0x18,0x18,0x18,0x10,0x10,0x30,0x20,0x40,
	// Char "*" offset 124
	0x10,0x7C,0x30,0x38,0x68,
	// Char "+" offset 129
	0x08,0x00,0x08,0x00,0x08,0x00,0x7F,0x80,0x08,0x00,0x08,0x00,0x08,0x00,
	// Char "," offset 143
	0x60,0x20,0x20,0x40,
	// Char "-" offset 147
	0xF8,
	// Char "." offset 148
	0x60,
	// Char "/" offset 149
	0x10,0x10,0x10,0x20,0x20,0x20,0x60,0x40,0x40,0x40,0x80,0x80,
	// Char "0" offset 161
	0x1C,0x22,0x63,0x41,0x41,0x41,0x41,0x41,0x41,0x63,0x22,0x1C,
	// Char "1" offset 173
	0x04,0x0C,0x1C,0x3C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,
	// Char "2" offset 185
	0x3C,0x62,0x43,0x03,0x03,0x02,0x06,0x0C,0x18,0x30,0x60,0xFF,
	// Char "3" offset 197
	0x3C,0x66,0x63,0x03,0x06,0x0E,0x03,0x01,0x01,0x43,0x63,0x3C,
	// Char "4" offset 209
	0x06,0x06,0x0E,0x1E,0x16,0x36,0x66,0x46,0xFF,0x06,0x06,0x06,
	// Char "5" offset 221
	0x3F,0x20,0x20,0x60,0x7E,0x63,0x03,0x01,0x01,0x43,0x62,0x3C,
	// Char "6" offset 233
	0x1E,0x23,0x63,0x40,0x5E,0xE3,0xC3,0xC1,0x41,0x43,0x63,0x1C,
	// Char "7" offset 245
	0x7F,0x03,0x06,0x04,0x0C,0x0C,0x18,0x18,0x18,0x10,0x10,0x30,
	// Char "8" offset 257
	0x3C,0x22,0x63,0x63,0x22,0x1C,0x63,0x43,0x41,0x41,0x63,0x3E,
	// Char "9" offset 269
	0x3C,0x62,0x63,0x41,0x41,0x63,0x63,0x3D,0x03,0x63,0x66,0x3C,
	// Char ":" offset 281
	0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,
	// Char ";" offset 290
	0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x20,0x20,0x40,
	// Char "<" offset 302
	0x01,0x80,0x06,0x00,0x38,0x00,0x40,0x00,0x38,0x00,0x06,0x00,0x01,0x80,
	// Char "=" offset 316
	0x7F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x80,
	// Char ">" offset 326
	0x40,0x00,0x38,0x00,0x06,0x00,0x01,0x80,0x06,0x00,0x38,0x00,0x40,0x00,
	// Char "?" offset 340
	0x3E,0x63,0x63,0x41,0x03,0x03,0x06,0x0C,0x08,0x08,0x00,0x08,
	// Char "@" offset 352
	0x03,0xE0,0x0C,0x18,0x10,0x0C,0x33,0xB6,0x26,0x72,0x6C,0x32,0x4C,0x22,0x48,0x22,0x48,0x62,0x4C,0x64,0x6C,0xEC,0x27,0x70,0x30,0x03,0x1C,0x0C,0x07,0xF0,
	// Char "A" offset 382
	0x0C,0x00,0x0E,0x00,0x1A,0x00,0x1B,0x00,0x13,0x00,0x31,0x00,0x21,0x80,0x7F,0x80,0x60,0x80,0x40,0xC0,0xC0,0xC0,0xC0,0x40,
	// Char "B" offset 406
	0x7F,0x00,0x61,0x80,0x60,0x80,0x60,0x80,0x61,0x80,0x7F,0x80,0x61,0x80,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x61,0x80,0x7F,0x00,
	// Char "C" offset 430
	0x0F,0x80,0x30,0xC0,0x20,0x60,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x60,0x20,0x60,0x30,0xC0,0x0F,0x80,
	// Char "D" offset 454
	0x7F,0x00,0x61,0x80,0x60,0xC0,0x60,0x40,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x40,0x60,0xC0,0x61,0x80,0x7F,0x00,
	// Char "E" offset 478
	0x7F,0xC0,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x7F,0x80,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x7F,0xC0,
	// Char "F" offset 502
	0x7F,0x80,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x7F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,
	// Char "G" offset 526
	0x0F,0x80,0x18,0xE0,0x20,0x60,0x60,0x20,0x60,0x00,0x60,0x00,0x61,0xF0,0x60,0x30,0x60,0x30,0x20,0x30,0x18,0x60,0x0F,0x80,
	// Char "H" offset 550
	0x60,0x40,0x60,0x40,0x60,0x40,0x60,0x40,0x60,0x40,0x7F,0xC0,0x60,0x40,0x60,0x40,0x60,0x40,0x60,0x40,0x60,0x40,0x60,0x40,
	// Char "I" offset 574
	0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
	// Char "J" offset 586
	0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0xC6,0x46,0x64,0x38,
	// Char "K" offset 598
	0x60,0xC0,0x61,0x80,0x63,0x00,0x66,0x00,0x6C,0x00,0x7C,0x00,0x76,0x00,0x66,0x00,0x63,0x00,0x61,0x80,0x60,0xC0,0x60,0xC0,
	// Char "L" offset 622
	0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x7F,
	// Char "M" offset 634
	0x60,0x30,0x70,0x30,0x70,0x70,0x78,0x70,0x68,0xF0,0x68,0xB0,0x6C,0xB0,0x6D,0xB0,0x65,0x30,0x67,0x30,0x67,0x30,0x62,0x30,
	// Char "N" offset 658
	0x60,0x40,0x70,0x40,0x78,0x40,0x78,0x40,0x6C,0x40,0x6C,0x40,0x66,0x40,0x63,0x40,0x63,0x40,0x61,0xC0,0x60,0xC0,0x60,0xC0,
	// Char "O" offset 682
	0x0F,0x80,0x18,0xC0,0x20,0x60,0x60,0x20,0x60,0x30,0x60,0x30,0x60,0x30,0x60,0x30,0x60,0x20,0x20,0x60,0x18,0xC0,0x0F,0x80,
	// Char "P" offset 706
	0x7F,0x80,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x60,0xC0,0x7F,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,0x60,0x00,
	// Char "Q" offset 730
	0x0F,0x80,0x30,0xC0,0x60,0x60,0x60,0x20,0x40,0x20,0x40,0x30,0x40,0x30,0x40,0x30,0x60,0x20,0x23,0x60,0x31,0xC0,0x0F,0xE0,0x00,0x10,
	// Char "R" offset 756
	0x7F,0x80,0x60,0xC0,0x60,0x40,0x60,0x40,0x60,0x40,0x60,0xC0,0x7F,0x80,0x63,0x00,0x61,0x80,0x60,0xC0,0x60,0xC0,0x60,0x60,
	// Char "S" offset 780
	0x1F,0x00,0x21,0x80,0x60,0xC0,0x60,0x00,0x70,0x00,0x3F,0x00,0x07,0x80,0x00,0xC0,0x00,0xC0,0x40,0xC0,0x60,0x80,0x1F,0x00,
	// Char "T" offset 804
	0xFF,0x80,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,
	// Char "U" offset 828
	0x60,0x40,0x60,0x40,0x60,0x40,0x60,0x40,0x60,0x40,0x60,0x40,0x60,0x40,0x60,0x40,0x60,0x40,0x20,0xC0,0x30,0x80,0x1F,0x00,
	// Char "V" offset 852
	0xC0,0x40,0xC0,0xC0,0x60,0xC0,0x60,0xC0,0x61,0x80,0x31,0x80,0x31,0x00,0x13,0x00,0x1B,0x00,0x0A,0x00,0x0E,0x00,0x0C,0x00,
	// Char "W" offset 876
	0xC1,0x86,0xC3,0x86,0x42,0x86,0x62,0xC4,0x62,0xCC,0x26,0x4C,0x24,0x48,0x34,0x68,0x3C,0x68,0x1C,0x38,0x18,0x30,0x18,0x30,
	// Char "X" offset 900
	0x60,0xC0,0x61,0x80,0x31,0x80,0x1B,0x00,0x1E,0x00,0x0C,0x00,0x0E,0x00,0x1E,0x00,0x33,0x00,0x31,0x80,0x60,0xC0,0xC0,0xC0,
	// Char "Y" offset 924
	0xC0,0xC0,0x60,0x80,0x31,0x80,0x33,0x00,0x1B,0x00,0x0E,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,
	// Char "Z" offset 948
	0x7F,0x80,0x01,0x80,0x03,0x00,0x02,0x00,0x06,0x00,0x0C,0x00,0x18,0x00,0x18,0x00,0x30,0x00,0x60,0x00,0x40,0x00,0xFF,0x80,
	// Char "[" offset 972
	0x70,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x70,
	// Char "\" offset 987
	0xC0,0x40,0x40,0x40,0x20,0x20,0x20,0x30,0x10,0x10,0x10,0x10,
	// Char "]" offset 999
	0xF0,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0xF0,
	// Char "^" offset 1014
	0x10,0x38,0x28,0x6C,0x44,0xC6,
	// Char "_" offset 1020
	0xFF,
	// Char "`" offset 1021
	0x60,0x20,
	// Char "a" offset 1023
	0x3E,0x63,0x43,0x0F,0x7B,0x43,0x43,0x67,0x3F,
	// Char "b" offset 1032
	0x60,0x60,0x60,0x7E,0x63,0x63,0x41,0x41,0x41,0x63,0x63,0x5C,
	// Char "c" offset 1044
	0x3E,0x63,0x40,0x40,0x40,0x40,0x40,0x63,0x3E,
	// Char "d" offset 1053
	0x03,0x03,0x03,0x3F,0x67,0x43,0x43,0xC3,0x43,0x43,0x67,0x3F,
	// Char "e" offset 1065
	0x3C,0x63,0x63,0x41,0x7F,0x40,0x41,0x63,0x3E,
	// Char "f" offset 1074
	0x30,0x60,0x60,0xF0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
	// Char "g" offset 1086
	0x3F,0x67,0x43,0xC3,0xC3,0xC3,0x43,0x67,0x3F,0x03,0x42,0x7C,
	// Char "h" offset 1098
	0x60,0x60,0x60,0x7E,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,
	// Char "i" offset 1110
	0x60,0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
	// Char "j" offset 1122
	0x60,0x00,0x00,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x40,0xC0,
	// Char "k" offset 1137
	0x60,0x60,0x60,0x67,0x6C,0x68,0x78,0x78,0x6C,0x64,0x66,0x63,
	// Char "l" offset 1149
	0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
	// Char "m" offset 1161
	0x5E,0xE0,0x67,0x30,0x63,0x10,0x62,0x10,0x62,0x10,0x62,0x10,0x62,0x10,0x62,0x10,0x62,0x10,
	// Char "n" offset 1179
	0x7E,0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x63,
	// Char "o" offset 1188
	0x3E,0x63,0x43,0x41,0x41,0x41,0x43,0x63,0x3C,
	// Char "p" offset 1197
	0x5E,0x63,0x63,0x41,0x41,0x41,0x63,0x62,0x7C,0x60,0x60,0x60,
	// Char "q" offset 1209
	0x3F,0x67,0x43,0x43,0xC3,0x43,0x43,0x67,0x3F,0x03,0x03,0x03,
	// Char "r" offset 1221
	0x78,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
	// Char "s" offset 1230
	0x3C,0x46,0x40,0x70,0x3C,0x06,0x02,0x46,0x3C,
	// Char "t" offset 1239
	0x20,0x60,0x60,0xF0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x30,
	// Char "u" offset 1251
	0x63,0x63,0x63,0x63,0x63,0x63,0x63,0x67,0x3F,
	// Char "v" offset 1260
	0xC3,0x42,0x62,0x66,0x24,0x3C,0x3C,0x18,0x18,
	// Char "w" offset 1269
	0xC6,0x20,0xC6,0x20,0x4E,0x60,0x4A,0x40,0x6B,0x40,0x6B,0xC0,0x39,0xC0,0x31,0x80,0x31,0x80,
	// Char "x" offset 1287
	0xC3,0x66,0x3C,0x38,0x18,0x3C,0x2C,0x66,0xC3,
	// Char "y" offset 1296
	0xC3,0x42,0x66,0x66,0x24,0x3C,0x1C,0x18,0x18,0x18,0x10,0x60,
	// Char "z" offset 1308
	0x7E,0x06,0x0C,0x08,0x18,0x30,0x60,0x40,0xFF,
	// Char "{" offset 1317
	0x18,0x30,0x30,0x30,0x20,0x20,0x60,0xC0,0x60,0x20,0x20,0x20,0x20,0x30,0x18,
	// Char "|" offset 1332
	0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
	// Char "}" offset 1347
	0xE0,0x20,0x20,0x20,0x20,0x30,0x30,0x08,0x30,0x30,0x30,0x30,0x20,0x20,0xE0,

};
