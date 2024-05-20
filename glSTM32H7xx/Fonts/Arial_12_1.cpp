
#include "glFont.h"

extern const uint8_t Arial_12_1_Pixels[];

// Font index for Arial_12_1
const FontItem Arial_12_1[] = {
	{ // Char "!" 
		'!', 		// This char
		3,13, 		// Width and height of the image
		1,2,1,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+0), // Data offset
	},
	{ // Char """ 
		'"', 		// This char
		4,13, 		// Width and height of the image
		0,2,3,4, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+9), // Data offset
	},
	{ // Char "#" 
		'#', 		// This char
		6,13, 		// Width and height of the image
		0,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+12), // Data offset
	},
	{ // Char "$" 
		'$', 		// This char
		6,13, 		// Width and height of the image
		0,2,5,11, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+21), // Data offset
	},
	{ // Char "%" 
		'%', 		// This char
		10,13, 		// Width and height of the image
		1,2,9,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+31), // Data offset
	},
	{ // Char "&" 
		'&', 		// This char
		8,13, 		// Width and height of the image
		0,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+49), // Data offset
	},
	{ // Char "'" 
		'\'', 		// This char
		2,13, 		// Width and height of the image
		0,2,1,4, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+58), // Data offset
	},
	{ // Char "(" 
		'(', 		// This char
		3,13, 		// Width and height of the image
		1,2,2,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+61), // Data offset
	},
	{ // Char ")" 
		')', 		// This char
		3,13, 		// Width and height of the image
		1,2,2,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+72), // Data offset
	},
	{ // Char "*" 
		'*', 		// This char
		4,13, 		// Width and height of the image
		0,2,3,5, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+83), // Data offset
	},
	{ // Char "+" 
		'+', 		// This char
		7,13, 		// Width and height of the image
		1,4,6,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+87), // Data offset
	},
	{ // Char "," 
		',', 		// This char
		3,13, 		// Width and height of the image
		1,10,1,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+92), // Data offset
	},
	{ // Char "-" 
		'-', 		// This char
		3,13, 		// Width and height of the image
		0,7,2,7, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+95), // Data offset
	},
	{ // Char "." 
		'.', 		// This char
		3,13, 		// Width and height of the image
		1,10,1,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+96), // Data offset
	},
	{ // Char "/" 
		'/', 		// This char
		3,13, 		// Width and height of the image
		0,2,2,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+97), // Data offset
	},
	{ // Char "0" 
		'0', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+106), // Data offset
	},
	{ // Char "1" 
		'1', 		// This char
		6,13, 		// Width and height of the image
		1,2,4,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+115), // Data offset
	},
	{ // Char "2" 
		'2', 		// This char
		6,13, 		// Width and height of the image
		0,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+124), // Data offset
	},
	{ // Char "3" 
		'3', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+133), // Data offset
	},
	{ // Char "4" 
		'4', 		// This char
		6,13, 		// Width and height of the image
		0,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+142), // Data offset
	},
	{ // Char "5" 
		'5', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+151), // Data offset
	},
	{ // Char "6" 
		'6', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+160), // Data offset
	},
	{ // Char "7" 
		'7', 		// This char
		6,13, 		// Width and height of the image
		0,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+169), // Data offset
	},
	{ // Char "8" 
		'8', 		// This char
		6,13, 		// Width and height of the image
		0,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+178), // Data offset
	},
	{ // Char "9" 
		'9', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+187), // Data offset
	},
	{ // Char ":" 
		':', 		// This char
		3,13, 		// Width and height of the image
		1,4,1,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+196), // Data offset
	},
	{ // Char ";" 
		';', 		// This char
		3,13, 		// Width and height of the image
		1,4,1,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+203), // Data offset
	},
	{ // Char "<" 
		'<', 		// This char
		7,13, 		// Width and height of the image
		1,4,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+212), // Data offset
	},
	{ // Char "=" 
		'=', 		// This char
		7,13, 		// Width and height of the image
		1,5,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+217), // Data offset
	},
	{ // Char ">" 
		'>', 		// This char
		7,13, 		// Width and height of the image
		1,4,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+221), // Data offset
	},
	{ // Char "?" 
		'?', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+226), // Data offset
	},
	{ // Char "@" 
		'@', 		// This char
		12,13, 		// Width and height of the image
		1,2,11,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+235), // Data offset
	},
	{ // Char "A" 
		'A', 		// This char
		8,13, 		// Width and height of the image
		0,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+257), // Data offset
	},
	{ // Char "B" 
		'B', 		// This char
		8,13, 		// Width and height of the image
		1,2,6,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+266), // Data offset
	},
	{ // Char "C" 
		'C', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+275), // Data offset
	},
	{ // Char "D" 
		'D', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+284), // Data offset
	},
	{ // Char "E" 
		'E', 		// This char
		8,13, 		// Width and height of the image
		1,2,6,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+293), // Data offset
	},
	{ // Char "F" 
		'F', 		// This char
		7,13, 		// Width and height of the image
		1,2,6,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+302), // Data offset
	},
	{ // Char "G" 
		'G', 		// This char
		9,13, 		// Width and height of the image
		1,2,8,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+311), // Data offset
	},
	{ // Char "H" 
		'H', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+329), // Data offset
	},
	{ // Char "I" 
		'I', 		// This char
		3,13, 		// Width and height of the image
		1,2,1,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+338), // Data offset
	},
	{ // Char "J" 
		'J', 		// This char
		6,13, 		// Width and height of the image
		0,2,4,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+347), // Data offset
	},
	{ // Char "K" 
		'K', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+356), // Data offset
	},
	{ // Char "L" 
		'L', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+365), // Data offset
	},
	{ // Char "M" 
		'M', 		// This char
		9,13, 		// Width and height of the image
		1,2,8,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+374), // Data offset
	},
	{ // Char "N" 
		'N', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+392), // Data offset
	},
	{ // Char "O" 
		'O', 		// This char
		9,13, 		// Width and height of the image
		1,2,8,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+401), // Data offset
	},
	{ // Char "P" 
		'P', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+419), // Data offset
	},
	{ // Char "Q" 
		'Q', 		// This char
		9,13, 		// Width and height of the image
		1,2,8,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+428), // Data offset
	},
	{ // Char "R" 
		'R', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+446), // Data offset
	},
	{ // Char "S" 
		'S', 		// This char
		8,13, 		// Width and height of the image
		1,2,6,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+455), // Data offset
	},
	{ // Char "T" 
		'T', 		// This char
		7,13, 		// Width and height of the image
		0,2,6,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+464), // Data offset
	},
	{ // Char "U" 
		'U', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+473), // Data offset
	},
	{ // Char "V" 
		'V', 		// This char
		8,13, 		// Width and height of the image
		0,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+482), // Data offset
	},
	{ // Char "W" 
		'W', 		// This char
		11,13, 		// Width and height of the image
		0,2,10,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+491), // Data offset
	},
	{ // Char "X" 
		'X', 		// This char
		8,13, 		// Width and height of the image
		0,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+509), // Data offset
	},
	{ // Char "Y" 
		'Y', 		// This char
		8,13, 		// Width and height of the image
		0,2,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+518), // Data offset
	},
	{ // Char "Z" 
		'Z', 		// This char
		7,13, 		// Width and height of the image
		0,2,6,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+527), // Data offset
	},
	{ // Char "[" 
		'[', 		// This char
		3,13, 		// Width and height of the image
		1,2,2,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+536), // Data offset
	},
	{ // Char "\" 
		'\\', 		// This char
		3,13, 		// Width and height of the image
		0,2,2,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+547), // Data offset
	},
	{ // Char "]" 
		']', 		// This char
		3,13, 		// Width and height of the image
		0,2,2,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+556), // Data offset
	},
	{ // Char "^" 
		'^', 		// This char
		5,13, 		// Width and height of the image
		0,2,4,6, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+567), // Data offset
	},
	{ // Char "_" 
		'_', 		// This char
		6,13, 		// Width and height of the image
		0,12,5,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+572), // Data offset
	},
	{ // Char "`" 
		'`', 		// This char
		3,13, 		// Width and height of the image
		1,2,2,3, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+573), // Data offset
	},
	{ // Char "a" 
		'a', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+575), // Data offset
	},
	{ // Char "b" 
		'b', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+582), // Data offset
	},
	{ // Char "c" 
		'c', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+591), // Data offset
	},
	{ // Char "d" 
		'd', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+598), // Data offset
	},
	{ // Char "e" 
		'e', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+607), // Data offset
	},
	{ // Char "f" 
		'f', 		// This char
		3,13, 		// Width and height of the image
		0,2,2,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+614), // Data offset
	},
	{ // Char "g" 
		'g', 		// This char
		6,13, 		// Width and height of the image
		0,4,5,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+623), // Data offset
	},
	{ // Char "h" 
		'h', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+632), // Data offset
	},
	{ // Char "i" 
		'i', 		// This char
		2,13, 		// Width and height of the image
		1,2,1,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+641), // Data offset
	},
	{ // Char "j" 
		'j', 		// This char
		2,13, 		// Width and height of the image
		0,2,1,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+650), // Data offset
	},
	{ // Char "k" 
		'k', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+661), // Data offset
	},
	{ // Char "l" 
		'l', 		// This char
		2,13, 		// Width and height of the image
		1,2,1,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+670), // Data offset
	},
	{ // Char "m" 
		'm', 		// This char
		9,13, 		// Width and height of the image
		1,4,8,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+679), // Data offset
	},
	{ // Char "n" 
		'n', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+693), // Data offset
	},
	{ // Char "o" 
		'o', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+700), // Data offset
	},
	{ // Char "p" 
		'p', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+707), // Data offset
	},
	{ // Char "q" 
		'q', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+716), // Data offset
	},
	{ // Char "r" 
		'r', 		// This char
		3,13, 		// Width and height of the image
		1,4,2,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+725), // Data offset
	},
	{ // Char "s" 
		's', 		// This char
		6,13, 		// Width and height of the image
		0,4,4,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+732), // Data offset
	},
	{ // Char "t" 
		't', 		// This char
		3,13, 		// Width and height of the image
		0,2,2,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+739), // Data offset
	},
	{ // Char "u" 
		'u', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+748), // Data offset
	},
	{ // Char "v" 
		'v', 		// This char
		6,13, 		// Width and height of the image
		0,4,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+755), // Data offset
	},
	{ // Char "w" 
		'w', 		// This char
		8,13, 		// Width and height of the image
		0,4,7,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+762), // Data offset
	},
	{ // Char "x" 
		'x', 		// This char
		6,13, 		// Width and height of the image
		0,4,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+769), // Data offset
	},
	{ // Char "y" 
		'y', 		// This char
		6,13, 		// Width and height of the image
		0,4,5,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+776), // Data offset
	},
	{ // Char "z" 
		'z', 		// This char
		6,13, 		// Width and height of the image
		0,4,5,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+785), // Data offset
	},
	{ // Char "{" 
		'{', 		// This char
		4,13, 		// Width and height of the image
		0,2,3,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+792), // Data offset
	},
	{ // Char "|" 
		'|', 		// This char
		3,13, 		// Width and height of the image
		1,2,1,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+803), // Data offset
	},
	{ // Char "}" 
		'}', 		// This char
		4,13, 		// Width and height of the image
		0,2,3,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+814), // Data offset
	},
	{ // Char "~" 
		'~', 		// This char
		7,13, 		// Width and height of the image
		0,6,6,7, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_1_Pixels+825), // Data offset
	},
};

// Font data for Arial_12_1 
const uint8_t Arial_12_1_Pixels[] = {
	// Char "!" offset 0
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,0x40,
	// Char """ offset 9
	0xD0,0xD0,0x10,
	// Char "#" offset 12
	0x24,0x24,0xFC,0x28,0x68,0xFC,0x48,0x58,0x50,
	// Char "$" offset 21
	0x78,0x54,0x50,0x50,0x38,0x14,0xD4,0x54,0x38,0x10,
	// Char "%" offset 31
	0x71,0x00,0x53,0x00,0x5A,0x00,0x54,0x00,0x75,0x80,0x0A,0x40,0x0A,0x40,0x12,0x40,0x11,0x80,
	// Char "&" offset 49
	0x38,0x2C,0x2C,0x38,0x30,0x4A,0xCE,0x46,0x3B,
	// Char "'" offset 58
	0xC0,0xC0,0x40,
	// Char "(" offset 61
	0x20,0x20,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x20,0x20,
	// Char ")" offset 72
	0x40,0x60,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x60,0x40,
	// Char "*" offset 83
	0x20,0xF0,0x20,0x50,
	// Char "+" offset 87
	0x10,0x10,0x7E,0x10,0x10,
	// Char "," offset 92
	0x40,0x40,0x40,
	// Char "-" offset 95
	0xE0,
	// Char "." offset 96
	0x40,
	// Char "/" offset 97
	0x20,0x20,0x20,0x60,0x40,0x40,0x40,0x80,0x80,
	// Char "0" offset 106
	0x38,0x6C,0x44,0x44,0x44,0x44,0x44,0x6C,0x38,
	// Char "1" offset 115
	0x18,0x38,0x78,0x18,0x18,0x18,0x18,0x18,0x18,
	// Char "2" offset 124
	0x78,0x4C,0x04,0x0C,0x08,0x10,0x20,0x40,0xFC,
	// Char "3" offset 133
	0x78,0x4C,0x0C,0x0C,0x18,0x04,0x04,0x4C,0x78,
	// Char "4" offset 142
	0x08,0x18,0x18,0x28,0x68,0x48,0xFC,0x08,0x08,
	// Char "5" offset 151
	0x7C,0x60,0x40,0x78,0x4C,0x04,0x04,0x4C,0x78,
	// Char "6" offset 160
	0x38,0x64,0x40,0x78,0x4C,0x44,0x44,0x4C,0x38,
	// Char "7" offset 169
	0xFC,0x0C,0x08,0x18,0x10,0x30,0x20,0x20,0x20,
	// Char "8" offset 178
	0x38,0x4C,0x4C,0x6C,0x38,0x4C,0xC4,0x4C,0x38,
	// Char "9" offset 187
	0x38,0x4C,0x44,0x44,0x4C,0x7C,0x04,0x4C,0x78,
	// Char ":" offset 196
	0x40,0x00,0x00,0x00,0x00,0x00,0x40,
	// Char ";" offset 203
	0x40,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x40,
	// Char "<" offset 212
	0x04,0x38,0x40,0x38,0x04,
	// Char "=" offset 217
	0x7C,0x00,0x00,0x7C,
	// Char ">" offset 221
	0x40,0x38,0x04,0x38,0x40,
	// Char "?" offset 226
	0x38,0x4C,0x44,0x04,0x08,0x10,0x10,0x00,0x10,
	// Char "@" offset 235
	0x0F,0x80,0x30,0xC0,0x20,0x20,0x4E,0xA0,0x59,0xB0,0x51,0x20,0x51,0x20,0x53,0x60,0x4F,0xC0,0x60,0x30,0x30,0x60,
	// Char "A" offset 257
	0x18,0x18,0x3C,0x24,0x24,0x7E,0x42,0x43,0xC3,
	// Char "B" offset 266
	0x7C,0x46,0x42,0x46,0x7C,0x42,0x42,0x42,0x7C,
	// Char "C" offset 275
	0x1E,0x23,0x61,0x40,0x40,0x40,0x61,0x23,0x1E,
	// Char "D" offset 284
	0x7C,0x42,0x43,0x41,0x41,0x41,0x43,0x42,0x7C,
	// Char "E" offset 293
	0x7E,0x40,0x40,0x40,0x7E,0x40,0x40,0x40,0x7E,
	// Char "F" offset 302
	0x7E,0x40,0x40,0x40,0x7C,0x40,0x40,0x40,0x40,
	// Char "G" offset 311
	0x1E,0x00,0x21,0x00,0x61,0x00,0x40,0x00,0x47,0x80,0x41,0x80,0x61,0x80,0x21,0x80,0x1E,0x00,
	// Char "H" offset 329
	0x43,0x43,0x43,0x43,0x7F,0x43,0x43,0x43,0x43,
	// Char "I" offset 338
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "J" offset 347
	0x08,0x08,0x08,0x08,0x08,0x08,0xC8,0xD8,0x70,
	// Char "K" offset 356
	0x43,0x46,0x4C,0x58,0x78,0x6C,0x44,0x46,0x43,
	// Char "L" offset 365
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x7C,
	// Char "M" offset 374
	0x61,0x80,0x61,0x80,0x73,0x80,0x52,0x80,0x52,0x80,0x56,0x80,0x4C,0x80,0x4C,0x80,0x4C,0x80,
	// Char "N" offset 392
	0x63,0x63,0x73,0x53,0x4B,0x4F,0x47,0x47,0x43,
	// Char "O" offset 401
	0x1E,0x00,0x23,0x00,0x41,0x00,0x41,0x80,0x41,0x80,0x41,0x80,0x41,0x00,0x23,0x00,0x1E,0x00,
	// Char "P" offset 419
	0x7E,0x42,0x43,0x42,0x7E,0x40,0x40,0x40,0x40,
	// Char "Q" offset 428
	0x1E,0x00,0x63,0x00,0x41,0x00,0x41,0x80,0x41,0x80,0x41,0x80,0x45,0x00,0x67,0x00,0x1F,0x80,
	// Char "R" offset 446
	0x7E,0x43,0x43,0x43,0x7E,0x44,0x46,0x43,0x41,
	// Char "S" offset 455
	0x3C,0x66,0x42,0x60,0x1C,0x02,0x42,0x42,0x3C,
	// Char "T" offset 464
	0xFE,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
	// Char "U" offset 473
	0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x62,0x3C,
	// Char "V" offset 482
	0xC3,0x43,0x62,0x66,0x24,0x24,0x3C,0x18,0x18,
	// Char "W" offset 491
	0xC6,0x20,0xC6,0x20,0x4A,0x60,0x4A,0x40,0x69,0x40,0x29,0x40,0x31,0x40,0x31,0x80,0x30,0x80,
	// Char "X" offset 509
	0x42,0x66,0x3C,0x18,0x18,0x3C,0x24,0x66,0xC3,
	// Char "Y" offset 518
	0xC3,0x46,0x24,0x3C,0x18,0x18,0x18,0x18,0x18,
	// Char "Z" offset 527
	0x7E,0x06,0x0C,0x08,0x10,0x20,0x60,0x40,0xFE,
	// Char "[" offset 536
	0x60,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x60,
	// Char "\" offset 547
	0x80,0xC0,0x40,0x40,0x40,0x60,0x20,0x20,0x20,
	// Char "]" offset 556
	0xE0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xE0,
	// Char "^" offset 567
	0x20,0x30,0x50,0x58,0xC8,
	// Char "_" offset 572
	0xFC,
	// Char "`" offset 573
	0x40,0x60,
	// Char "a" offset 575
	0x38,0x4C,0x04,0x7C,0x44,0x4C,0x74,
	// Char "b" offset 582
	0x40,0x40,0x78,0x6C,0x44,0x44,0x44,0x6C,0x78,
	// Char "c" offset 591
	0x38,0x4C,0x40,0x40,0x40,0x4C,0x38,
	// Char "d" offset 598
	0x04,0x04,0x3C,0x6C,0x44,0x44,0x44,0x6C,0x3C,
	// Char "e" offset 607
	0x38,0x4C,0x44,0x7C,0x40,0x4C,0x38,
	// Char "f" offset 614
	0x60,0x40,0xE0,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "g" offset 623
	0x3C,0x4C,0x44,0xC4,0x44,0x4C,0x3C,0x0C,0x78,
	// Char "h" offset 632
	0x40,0x40,0x78,0x6C,0x44,0x44,0x44,0x44,0x44,
	// Char "i" offset 641
	0x40,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "j" offset 650
	0x40,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0xC0,
	// Char "k" offset 661
	0x40,0x40,0x4C,0x58,0x70,0x70,0x58,0x48,0x44,
	// Char "l" offset 670
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "m" offset 679
	0x7B,0x80,0x6C,0x80,0x4C,0x80,0x4C,0x80,0x4C,0x80,0x4C,0x80,0x4C,0x80,
	// Char "n" offset 693
	0x78,0x6C,0x44,0x44,0x44,0x44,0x44,
	// Char "o" offset 700
	0x38,0x6C,0x44,0x44,0x44,0x6C,0x38,
	// Char "p" offset 707
	0x78,0x6C,0x44,0x44,0x44,0x6C,0x78,0x40,0x40,
	// Char "q" offset 716
	0x3C,0x4C,0x44,0x44,0x44,0x6C,0x3C,0x04,0x04,
	// Char "r" offset 725
	0x60,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "s" offset 732
	0x78,0x48,0x40,0x78,0x08,0xC8,0x78,
	// Char "t" offset 739
	0x40,0x40,0xE0,0x40,0x40,0x40,0x40,0x40,0x60,
	// Char "u" offset 748
	0x44,0x44,0x44,0x44,0x4C,0x4C,0x7C,
	// Char "v" offset 755
	0xCC,0x48,0x48,0x58,0x70,0x30,0x30,
	// Char "w" offset 762
	0x89,0xD9,0x55,0x55,0x56,0x76,0x26,
	// Char "x" offset 769
	0xC8,0x48,0x30,0x30,0x30,0x48,0x8C,
	// Char "y" offset 776
	0xCC,0x48,0x48,0x58,0x30,0x30,0x30,0x20,0x60,
	// Char "z" offset 785
	0xFC,0x08,0x10,0x30,0x60,0xC0,0xFC,
	// Char "{" offset 792
	0x30,0x60,0x60,0x60,0x40,0x80,0x40,0x60,0x60,0x60,0x30,
	// Char "|" offset 803
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "}" offset 814
	0xC0,0x60,0x60,0x60,0x20,0x10,0x20,0x60,0x60,0x60,0xC0,
	// Char "~" offset 825
	0x72,0x9C,

};
