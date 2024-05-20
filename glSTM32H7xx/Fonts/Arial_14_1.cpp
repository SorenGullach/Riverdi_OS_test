
#include "glFont.h"

extern const uint8_t Arial_14_1_Pixels[];

// Font index for Arial_14_1
const FontItem Arial_14_1[] = {
	{ // Char "!" 
		'!', 		// This char
		3,16, 		// Width and height of the image
		1,3,2,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+0), // Data offset
	},
	{ // Char """ 
		'"', 		// This char
		4,16, 		// Width and height of the image
		1,3,3,6, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+10), // Data offset
	},
	{ // Char "#" 
		'#', 		// This char
		7,16, 		// Width and height of the image
		0,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+14), // Data offset
	},
	{ // Char "$" 
		'$', 		// This char
		7,16, 		// Width and height of the image
		1,2,6,13, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+24), // Data offset
	},
	{ // Char "%" 
		'%', 		// This char
		12,16, 		// Width and height of the image
		1,3,11,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+36), // Data offset
	},
	{ // Char "&" 
		'&', 		// This char
		9,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+56), // Data offset
	},
	{ // Char "'" 
		'\'', 		// This char
		2,16, 		// Width and height of the image
		1,3,1,6, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+76), // Data offset
	},
	{ // Char "(" 
		'(', 		// This char
		4,16, 		// Width and height of the image
		1,3,3,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+80), // Data offset
	},
	{ // Char ")" 
		')', 		// This char
		4,16, 		// Width and height of the image
		1,3,3,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+93), // Data offset
	},
	{ // Char "*" 
		'*', 		// This char
		5,16, 		// Width and height of the image
		1,3,4,6, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+106), // Data offset
	},
	{ // Char "+" 
		'+', 		// This char
		8,16, 		// Width and height of the image
		1,5,7,11, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+110), // Data offset
	},
	{ // Char "," 
		',', 		// This char
		3,16, 		// Width and height of the image
		1,12,2,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+117), // Data offset
	},
	{ // Char "-" 
		'-', 		// This char
		4,16, 		// Width and height of the image
		0,9,3,9, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+120), // Data offset
	},
	{ // Char "." 
		'.', 		// This char
		3,16, 		// Width and height of the image
		1,12,2,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+121), // Data offset
	},
	{ // Char "/" 
		'/', 		// This char
		3,16, 		// Width and height of the image
		0,4,2,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+122), // Data offset
	},
	{ // Char "0" 
		'0', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+131), // Data offset
	},
	{ // Char "1" 
		'1', 		// This char
		7,16, 		// Width and height of the image
		1,3,4,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+141), // Data offset
	},
	{ // Char "2" 
		'2', 		// This char
		7,16, 		// Width and height of the image
		0,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+151), // Data offset
	},
	{ // Char "3" 
		'3', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+161), // Data offset
	},
	{ // Char "4" 
		'4', 		// This char
		7,16, 		// Width and height of the image
		0,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+171), // Data offset
	},
	{ // Char "5" 
		'5', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+181), // Data offset
	},
	{ // Char "6" 
		'6', 		// This char
		7,16, 		// Width and height of the image
		0,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+191), // Data offset
	},
	{ // Char "7" 
		'7', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+201), // Data offset
	},
	{ // Char "8" 
		'8', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+211), // Data offset
	},
	{ // Char "9" 
		'9', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+221), // Data offset
	},
	{ // Char ":" 
		':', 		// This char
		3,16, 		// Width and height of the image
		1,5,2,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+231), // Data offset
	},
	{ // Char ";" 
		';', 		// This char
		3,16, 		// Width and height of the image
		1,5,2,14, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+239), // Data offset
	},
	{ // Char "<" 
		'<', 		// This char
		8,16, 		// Width and height of the image
		1,5,6,11, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+249), // Data offset
	},
	{ // Char "=" 
		'=', 		// This char
		8,16, 		// Width and height of the image
		1,6,6,9, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+256), // Data offset
	},
	{ // Char ">" 
		'>', 		// This char
		8,16, 		// Width and height of the image
		1,5,6,11, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+260), // Data offset
	},
	{ // Char "?" 
		'?', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+267), // Data offset
	},
	{ // Char "@" 
		'@', 		// This char
		14,16, 		// Width and height of the image
		1,3,13,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+277), // Data offset
	},
	{ // Char "A" 
		'A', 		// This char
		9,16, 		// Width and height of the image
		0,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+303), // Data offset
	},
	{ // Char "B" 
		'B', 		// This char
		9,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+323), // Data offset
	},
	{ // Char "C" 
		'C', 		// This char
		10,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+343), // Data offset
	},
	{ // Char "D" 
		'D', 		// This char
		10,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+363), // Data offset
	},
	{ // Char "E" 
		'E', 		// This char
		9,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+383), // Data offset
	},
	{ // Char "F" 
		'F', 		// This char
		8,16, 		// Width and height of the image
		1,3,7,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+403), // Data offset
	},
	{ // Char "G" 
		'G', 		// This char
		10,16, 		// Width and height of the image
		1,3,9,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+413), // Data offset
	},
	{ // Char "H" 
		'H', 		// This char
		10,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+433), // Data offset
	},
	{ // Char "I" 
		'I', 		// This char
		3,16, 		// Width and height of the image
		1,3,2,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+453), // Data offset
	},
	{ // Char "J" 
		'J', 		// This char
		7,16, 		// Width and height of the image
		0,3,5,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+463), // Data offset
	},
	{ // Char "K" 
		'K', 		// This char
		9,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+473), // Data offset
	},
	{ // Char "L" 
		'L', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+493), // Data offset
	},
	{ // Char "M" 
		'M', 		// This char
		11,16, 		// Width and height of the image
		1,3,10,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+503), // Data offset
	},
	{ // Char "N" 
		'N', 		// This char
		10,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+523), // Data offset
	},
	{ // Char "O" 
		'O', 		// This char
		10,16, 		// Width and height of the image
		1,3,9,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+543), // Data offset
	},
	{ // Char "P" 
		'P', 		// This char
		9,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+563), // Data offset
	},
	{ // Char "Q" 
		'Q', 		// This char
		10,16, 		// Width and height of the image
		1,3,9,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+583), // Data offset
	},
	{ // Char "R" 
		'R', 		// This char
		10,16, 		// Width and height of the image
		1,3,9,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+603), // Data offset
	},
	{ // Char "S" 
		'S', 		// This char
		9,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+623), // Data offset
	},
	{ // Char "T" 
		'T', 		// This char
		8,16, 		// Width and height of the image
		0,3,7,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+643), // Data offset
	},
	{ // Char "U" 
		'U', 		// This char
		10,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+653), // Data offset
	},
	{ // Char "V" 
		'V', 		// This char
		9,16, 		// Width and height of the image
		0,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+673), // Data offset
	},
	{ // Char "W" 
		'W', 		// This char
		13,16, 		// Width and height of the image
		0,3,12,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+693), // Data offset
	},
	{ // Char "X" 
		'X', 		// This char
		9,16, 		// Width and height of the image
		0,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+713), // Data offset
	},
	{ // Char "Y" 
		'Y', 		// This char
		9,16, 		// Width and height of the image
		0,3,8,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+733), // Data offset
	},
	{ // Char "Z" 
		'Z', 		// This char
		8,16, 		// Width and height of the image
		0,3,7,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+753), // Data offset
	},
	{ // Char "[" 
		'[', 		// This char
		3,16, 		// Width and height of the image
		1,3,2,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+763), // Data offset
	},
	{ // Char "\" 
		'\\', 		// This char
		3,16, 		// Width and height of the image
		0,3,2,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+776), // Data offset
	},
	{ // Char "]" 
		']', 		// This char
		3,16, 		// Width and height of the image
		0,3,2,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+784), // Data offset
	},
	{ // Char "^" 
		'^', 		// This char
		6,16, 		// Width and height of the image
		0,3,5,7, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+797), // Data offset
	},
	{ // Char "_" 
		'_', 		// This char
		7,16, 		// Width and height of the image
		0,15,6,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+802), // Data offset
	},
	{ // Char "`" 
		'`', 		// This char
		4,16, 		// Width and height of the image
		1,3,2,4, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+803), // Data offset
	},
	{ // Char "a" 
		'a', 		// This char
		7,16, 		// Width and height of the image
		1,5,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+805), // Data offset
	},
	{ // Char "b" 
		'b', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+813), // Data offset
	},
	{ // Char "c" 
		'c', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+823), // Data offset
	},
	{ // Char "d" 
		'd', 		// This char
		7,16, 		// Width and height of the image
		0,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+831), // Data offset
	},
	{ // Char "e" 
		'e', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+841), // Data offset
	},
	{ // Char "f" 
		'f', 		// This char
		3,16, 		// Width and height of the image
		0,3,2,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+849), // Data offset
	},
	{ // Char "g" 
		'g', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+859), // Data offset
	},
	{ // Char "h" 
		'h', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+870), // Data offset
	},
	{ // Char "i" 
		'i', 		// This char
		3,16, 		// Width and height of the image
		1,3,1,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+880), // Data offset
	},
	{ // Char "j" 
		'j', 		// This char
		3,16, 		// Width and height of the image
		0,3,1,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+890), // Data offset
	},
	{ // Char "k" 
		'k', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+903), // Data offset
	},
	{ // Char "l" 
		'l', 		// This char
		3,16, 		// Width and height of the image
		1,3,1,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+913), // Data offset
	},
	{ // Char "m" 
		'm', 		// This char
		11,16, 		// Width and height of the image
		1,5,10,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+923), // Data offset
	},
	{ // Char "n" 
		'n', 		// This char
		7,16, 		// Width and height of the image
		1,5,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+939), // Data offset
	},
	{ // Char "o" 
		'o', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+947), // Data offset
	},
	{ // Char "p" 
		'p', 		// This char
		7,16, 		// Width and height of the image
		1,5,6,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+955), // Data offset
	},
	{ // Char "q" 
		'q', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+966), // Data offset
	},
	{ // Char "r" 
		'r', 		// This char
		4,16, 		// Width and height of the image
		1,5,3,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+977), // Data offset
	},
	{ // Char "s" 
		's', 		// This char
		7,16, 		// Width and height of the image
		1,5,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+985), // Data offset
	},
	{ // Char "t" 
		't', 		// This char
		3,16, 		// Width and height of the image
		0,3,2,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+993), // Data offset
	},
	{ // Char "u" 
		'u', 		// This char
		7,16, 		// Width and height of the image
		1,5,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+1003), // Data offset
	},
	{ // Char "v" 
		'v', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+1011), // Data offset
	},
	{ // Char "w" 
		'w', 		// This char
		10,16, 		// Width and height of the image
		0,5,9,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+1019), // Data offset
	},
	{ // Char "x" 
		'x', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+1035), // Data offset
	},
	{ // Char "y" 
		'y', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+1043), // Data offset
	},
	{ // Char "z" 
		'z', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,12, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+1054), // Data offset
	},
	{ // Char "{" 
		'{', 		// This char
		4,16, 		// Width and height of the image
		0,3,3,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+1062), // Data offset
	},
	{ // Char "|" 
		'|', 		// This char
		3,16, 		// Width and height of the image
		1,3,1,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+1075), // Data offset
	},
	{ // Char "}" 
		'}', 		// This char
		4,16, 		// Width and height of the image
		0,3,3,15, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+1088), // Data offset
	},
	{ // Char "~" 
		'~', 		// This char
		8,16, 		// Width and height of the image
		1,7,7,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_1_Pixels+1101), // Data offset
	},
};

// Font data for Arial_14_1 
const uint8_t Arial_14_1_Pixels[] = {
	// Char "!" offset 0
	0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x00,0x60,
	// Char """ offset 10
	0x50,0x50,0x50,0x50,
	// Char "#" offset 14
	0x12,0x32,0x26,0xFE,0x24,0x64,0xFE,0x48,0x48,0x48,
	// Char "$" offset 24
	0x10,0x3C,0x76,0x50,0x50,0x38,0x1E,0x12,0x12,0x56,0x7C,0x10,
	// Char "%" offset 36
	0x78,0x80,0x48,0x80,0x49,0x00,0x4B,0x00,0x3A,0x00,0x06,0xE0,0x05,0xB0,0x09,0x30,0x09,0xB0,0x10,0xE0,
	// Char "&" offset 56
	0x1C,0x00,0x26,0x00,0x26,0x00,0x3C,0x00,0x38,0x00,0x6D,0x00,0x47,0x00,0x43,0x00,0x67,0x00,0x3D,0x80,
	// Char "'" offset 76
	0x40,0x40,0x40,0x40,
	// Char "(" offset 80
	0x10,0x20,0x20,0x60,0x40,0x40,0x40,0x40,0x40,0x60,0x20,0x20,0x10,
	// Char ")" offset 93
	0x40,0x20,0x20,0x30,0x10,0x10,0x10,0x10,0x10,0x30,0x20,0x20,0x40,
	// Char "*" offset 106
	0x20,0x78,0x30,0x58,
	// Char "+" offset 110
	0x18,0x18,0x18,0x7F,0x18,0x18,0x18,
	// Char "," offset 117
	0x60,0x20,0x40,
	// Char "-" offset 120
	0xF0,
	// Char "." offset 121
	0x60,
	// Char "/" offset 122
	0x20,0x20,0x20,0x20,0x40,0x40,0x40,0xC0,0x80,
	// Char "0" offset 131
	0x3C,0x66,0x42,0x42,0x42,0x42,0x42,0x42,0x66,0x3C,
	// Char "1" offset 141
	0x08,0x18,0x78,0x48,0x08,0x08,0x08,0x08,0x08,0x08,
	// Char "2" offset 151
	0x3C,0x66,0x42,0x06,0x04,0x0C,0x18,0x30,0x60,0xFE,
	// Char "3" offset 161
	0x3C,0x64,0x46,0x04,0x1C,0x06,0x02,0x42,0x66,0x3C,
	// Char "4" offset 171
	0x04,0x0C,0x1C,0x14,0x24,0x64,0x44,0xFE,0x04,0x04,
	// Char "5" offset 181
	0x3E,0x60,0x40,0x7C,0x66,0x02,0x02,0x42,0x66,0x3C,
	// Char "6" offset 191
	0x3C,0x66,0x40,0xC0,0xFC,0xE6,0xC2,0x42,0x66,0x3C,
	// Char "7" offset 201
	0x7E,0x06,0x0C,0x08,0x18,0x18,0x10,0x30,0x30,0x30,
	// Char "8" offset 211
	0x3C,0x66,0x46,0x66,0x38,0x66,0x42,0x42,0x66,0x3C,
	// Char "9" offset 221
	0x3C,0x66,0x42,0x42,0x66,0x3A,0x02,0x06,0x44,0x3C,
	// Char ":" offset 231
	0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x60,
	// Char ";" offset 239
	0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x20,0x40,
	// Char "<" offset 249
	0x02,0x0C,0x30,0x40,0x30,0x0C,0x02,
	// Char "=" offset 256
	0x7E,0x00,0x00,0x7E,
	// Char ">" offset 260
	0x40,0x30,0x0C,0x02,0x0C,0x30,0x40,
	// Char "?" offset 267
	0x3C,0x66,0x42,0x02,0x06,0x0C,0x18,0x18,0x00,0x18,
	// Char "@" offset 277
	0x07,0xC0,0x18,0x30,0x30,0x18,0x67,0x48,0x4C,0xC8,0x48,0xC8,0x58,0xC8,0x58,0x98,0x49,0x90,0x4E,0xE0,0x20,0x0C,0x18,0x30,0x0F,0xE0,
	// Char "A" offset 303
	0x0C,0x00,0x1C,0x00,0x14,0x00,0x36,0x00,0x22,0x00,0x23,0x00,0x7F,0x00,0x41,0x00,0xC1,0x80,0xC0,0x80,
	// Char "B" offset 323
	0x7E,0x00,0x41,0x00,0x41,0x00,0x41,0x00,0x7F,0x00,0x41,0x00,0x41,0x80,0x41,0x80,0x41,0x00,0x7E,0x00,
	// Char "C" offset 343
	0x1F,0x00,0x31,0x80,0x60,0x80,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x60,0x80,0x31,0x80,0x1F,0x00,
	// Char "D" offset 363
	0x7E,0x00,0x41,0x00,0x40,0x80,0x40,0x80,0x40,0x80,0x40,0x80,0x40,0x80,0x40,0x80,0x41,0x00,0x7E,0x00,
	// Char "E" offset 383
	0x7F,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x7F,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x7F,0x80,
	// Char "F" offset 403
	0x7F,0x40,0x40,0x40,0x7E,0x40,0x40,0x40,0x40,0x40,
	// Char "G" offset 413
	0x1F,0x00,0x30,0x80,0x60,0xC0,0x40,0x00,0x40,0x00,0x43,0xC0,0x40,0x40,0x60,0x40,0x30,0xC0,0x1F,0x00,
	// Char "H" offset 433
	0x40,0x80,0x40,0x80,0x40,0x80,0x40,0x80,0x7F,0x80,0x40,0x80,0x40,0x80,0x40,0x80,0x40,0x80,0x40,0x80,
	// Char "I" offset 453
	0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
	// Char "J" offset 463
	0x04,0x04,0x04,0x04,0x04,0x04,0x04,0xC4,0x4C,0x78,
	// Char "K" offset 473
	0x41,0x80,0x43,0x00,0x46,0x00,0x4C,0x00,0x58,0x00,0x7C,0x00,0x66,0x00,0x43,0x00,0x41,0x00,0x41,0x80,
	// Char "L" offset 493
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x7E,
	// Char "M" offset 503
	0x60,0x60,0x60,0xE0,0x70,0xE0,0x51,0xE0,0x51,0x60,0x49,0x60,0x4B,0x60,0x4E,0x60,0x46,0x60,0x46,0x60,
	// Char "N" offset 523
	0x60,0x80,0x70,0x80,0x70,0x80,0x58,0x80,0x4C,0x80,0x44,0x80,0x46,0x80,0x43,0x80,0x41,0x80,0x41,0x80,
	// Char "O" offset 543
	0x1F,0x00,0x31,0x80,0x60,0xC0,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x60,0xC0,0x31,0x80,0x1F,0x00,
	// Char "P" offset 563
	0x7F,0x00,0x41,0x80,0x41,0x80,0x41,0x80,0x41,0x00,0x7F,0x00,0x40,0x00,0x40,0x00,0x40,0x00,0x40,0x00,
	// Char "Q" offset 583
	0x1F,0x00,0x31,0x80,0x60,0xC0,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x62,0xC0,0x33,0x80,0x1F,0xC0,
	// Char "R" offset 603
	0x7F,0x00,0x41,0x80,0x40,0x80,0x40,0x80,0x41,0x80,0x7F,0x00,0x46,0x00,0x43,0x00,0x41,0x80,0x40,0xC0,
	// Char "S" offset 623
	0x3E,0x00,0x63,0x00,0x41,0x00,0x60,0x00,0x3C,0x00,0x07,0x00,0x01,0x80,0x41,0x80,0x61,0x00,0x3E,0x00,
	// Char "T" offset 643
	0xFF,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,
	// Char "U" offset 653
	0x40,0x80,0x40,0x80,0x40,0x80,0x40,0x80,0x40,0x80,0x40,0x80,0x40,0x80,0x61,0x80,0x21,0x80,0x1E,0x00,
	// Char "V" offset 673
	0xC0,0x80,0x41,0x80,0x61,0x00,0x61,0x00,0x23,0x00,0x32,0x00,0x16,0x00,0x14,0x00,0x1C,0x00,0x0C,0x00,
	// Char "W" offset 693
	0xC3,0x08,0x43,0x18,0x45,0x18,0x45,0x90,0x64,0x90,0x2C,0xB0,0x28,0xB0,0x38,0xE0,0x38,0x60,0x10,0x60,
	// Char "X" offset 713
	0x61,0x80,0x23,0x00,0x32,0x00,0x1C,0x00,0x0C,0x00,0x1C,0x00,0x16,0x00,0x33,0x00,0x63,0x00,0xC1,0x80,
	// Char "Y" offset 733
	0xC1,0x80,0x61,0x00,0x22,0x00,0x36,0x00,0x1C,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,0x08,0x00,
	// Char "Z" offset 753
	0x7F,0x03,0x06,0x0C,0x08,0x18,0x30,0x60,0x40,0xFF,
	// Char "[" offset 763
	0x60,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x60,
	// Char "\" offset 776
	0x80,0x40,0x40,0x40,0x60,0x20,0x20,0x20,
	// Char "]" offset 784
	0xE0,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0xE0,
	// Char "^" offset 797
	0x30,0x30,0x68,0x48,0xCC,
	// Char "_" offset 802
	0xFE,
	// Char "`" offset 803
	0x60,0x20,
	// Char "a" offset 805
	0x3C,0x46,0x06,0x1E,0x76,0x46,0x46,0x7A,
	// Char "b" offset 813
	0x40,0x40,0x7C,0x66,0x42,0x42,0x42,0x42,0x66,0x7C,
	// Char "c" offset 823
	0x3C,0x66,0x40,0xC0,0xC0,0x40,0x66,0x3C,
	// Char "d" offset 831
	0x06,0x06,0x3E,0x66,0x46,0xC2,0xC2,0x46,0x66,0x3E,
	// Char "e" offset 841
	0x3C,0x66,0x42,0xFE,0xC0,0x40,0x62,0x3C,
	// Char "f" offset 849
	0x20,0x60,0xE0,0x60,0x60,0x60,0x60,0x60,0x60,0x60,
	// Char "g" offset 859
	0x3E,0x66,0x46,0xC6,0xC6,0x46,0x66,0x3E,0x06,0x44,0x78,
	// Char "h" offset 870
	0x40,0x40,0x7C,0x66,0x46,0x46,0x46,0x46,0x46,0x46,
	// Char "i" offset 880
	0x40,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "j" offset 890
	0x40,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0xC0,
	// Char "k" offset 903
	0x40,0x40,0x46,0x48,0x58,0x70,0x78,0x4C,0x44,0x46,
	// Char "l" offset 913
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "m" offset 923
	0x5D,0xC0,0x66,0x60,0x46,0x20,0x46,0x20,0x46,0x20,0x46,0x20,0x46,0x20,0x46,0x20,
	// Char "n" offset 939
	0x7C,0x66,0x46,0x46,0x46,0x46,0x46,0x46,
	// Char "o" offset 947
	0x3C,0x66,0x42,0xC2,0xC2,0x42,0x66,0x3C,
	// Char "p" offset 955
	0x5C,0x66,0x42,0x42,0x42,0x42,0x66,0x7C,0x40,0x40,0x40,
	// Char "q" offset 966
	0x3A,0x66,0x46,0xC2,0xC2,0x46,0x66,0x3E,0x06,0x06,0x06,
	// Char "r" offset 977
	0x70,0x60,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "s" offset 985
	0x78,0x44,0x40,0x70,0x1C,0x06,0x44,0x78,
	// Char "t" offset 993
	0x40,0x40,0xE0,0x40,0x40,0x40,0x40,0x40,0x40,0x60,
	// Char "u" offset 1003
	0x46,0x46,0x46,0x46,0x46,0x46,0x66,0x3A,
	// Char "v" offset 1011
	0xC6,0x44,0x44,0x6C,0x28,0x38,0x38,0x18,
	// Char "w" offset 1019
	0xCC,0x40,0xCC,0x40,0x4C,0x80,0x4E,0x80,0x7A,0x80,0x33,0x00,0x33,0x00,0x33,0x00,
	// Char "x" offset 1035
	0xC6,0x6C,0x38,0x38,0x38,0x28,0x6C,0xC6,
	// Char "y" offset 1043
	0xC6,0x44,0x4C,0x68,0x28,0x38,0x30,0x10,0x10,0x20,0x60,
	// Char "z" offset 1054
	0x7E,0x0C,0x08,0x18,0x30,0x60,0x40,0xFE,
	// Char "{" offset 1062
	0x30,0x20,0x20,0x20,0x20,0x60,0xC0,0x60,0x20,0x20,0x20,0x20,0x30,
	// Char "|" offset 1075
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "}" offset 1088
	0xC0,0x20,0x20,0x20,0x20,0x20,0x10,0x20,0x20,0x20,0x20,0x60,0xC0,
	// Char "~" offset 1101
	0x71,0x0E,

};
