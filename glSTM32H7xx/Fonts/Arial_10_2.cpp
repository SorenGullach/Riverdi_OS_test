
#include "glFont.h"

extern const uint8_t Arial_10_2_Pixels[];

// Font index for Arial_10_2
const FontItem Arial_10_2[] = {
	{ // Char "!" 
		'!', 		// This char
		2,11, 		// Width and height of the image
		1,2,1,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+0), // Data offset
	},
	{ // Char """ 
		'"', 		// This char
		3,11, 		// Width and height of the image
		0,2,2,4, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+7), // Data offset
	},
	{ // Char "#" 
		'#', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+10), // Data offset
	},
	{ // Char "$" 
		'$', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,9, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+24), // Data offset
	},
	{ // Char "%" 
		'%', 		// This char
		8,11, 		// Width and height of the image
		1,2,7,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+40), // Data offset
	},
	{ // Char "&" 
		'&', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+54), // Data offset
	},
	{ // Char "'" 
		'\'', 		// This char
		1,11, 		// Width and height of the image
		0,2,0,4, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+68), // Data offset
	},
	{ // Char "(" 
		'(', 		// This char
		3,11, 		// Width and height of the image
		1,2,2,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+71), // Data offset
	},
	{ // Char ")" 
		')', 		// This char
		3,11, 		// Width and height of the image
		1,2,2,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+80), // Data offset
	},
	{ // Char "*" 
		'*', 		// This char
		3,11, 		// Width and height of the image
		0,3,2,4, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+89), // Data offset
	},
	{ // Char "+" 
		'+', 		// This char
		5,11, 		// Width and height of the image
		0,3,4,7, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+91), // Data offset
	},
	{ // Char "," 
		',', 		// This char
		2,11, 		// Width and height of the image
		1,8,1,9, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+101), // Data offset
	},
	{ // Char "-" 
		'-', 		// This char
		3,11, 		// Width and height of the image
		0,6,2,6, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+103), // Data offset
	},
	{ // Char "." 
		'.', 		// This char
		2,11, 		// Width and height of the image
		1,8,1,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+104), // Data offset
	},
	{ // Char "/" 
		'/', 		// This char
		2,11, 		// Width and height of the image
		0,4,1,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+105), // Data offset
	},
	{ // Char "0" 
		'0', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+110), // Data offset
	},
	{ // Char "1" 
		'1', 		// This char
		5,11, 		// Width and height of the image
		1,2,3,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+124), // Data offset
	},
	{ // Char "2" 
		'2', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+138), // Data offset
	},
	{ // Char "3" 
		'3', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+152), // Data offset
	},
	{ // Char "4" 
		'4', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+166), // Data offset
	},
	{ // Char "5" 
		'5', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+180), // Data offset
	},
	{ // Char "6" 
		'6', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+194), // Data offset
	},
	{ // Char "7" 
		'7', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+208), // Data offset
	},
	{ // Char "8" 
		'8', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+222), // Data offset
	},
	{ // Char "9" 
		'9', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+236), // Data offset
	},
	{ // Char ":" 
		':', 		// This char
		2,11, 		// Width and height of the image
		1,4,1,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+250), // Data offset
	},
	{ // Char ";" 
		';', 		// This char
		2,11, 		// Width and height of the image
		1,4,1,9, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,6, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+255), // Data offset
	},
	{ // Char "<" 
		'<', 		// This char
		5,11, 		// Width and height of the image
		0,3,4,7, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+261), // Data offset
	},
	{ // Char "=" 
		'=', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,6, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+271), // Data offset
	},
	{ // Char ">" 
		'>', 		// This char
		5,11, 		// Width and height of the image
		0,3,4,7, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+277), // Data offset
	},
	{ // Char "?" 
		'?', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+287), // Data offset
	},
	{ // Char "@" 
		'@', 		// This char
		10,11, 		// Width and height of the image
		0,2,9,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+301), // Data offset
	},
	{ // Char "A" 
		'A', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+328), // Data offset
	},
	{ // Char "B" 
		'B', 		// This char
		6,11, 		// Width and height of the image
		1,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+342), // Data offset
	},
	{ // Char "C" 
		'C', 		// This char
		7,11, 		// Width and height of the image
		0,2,6,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+356), // Data offset
	},
	{ // Char "D" 
		'D', 		// This char
		7,11, 		// Width and height of the image
		1,2,6,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+370), // Data offset
	},
	{ // Char "E" 
		'E', 		// This char
		6,11, 		// Width and height of the image
		1,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+384), // Data offset
	},
	{ // Char "F" 
		'F', 		// This char
		6,11, 		// Width and height of the image
		1,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+398), // Data offset
	},
	{ // Char "G" 
		'G', 		// This char
		7,11, 		// Width and height of the image
		0,2,6,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+412), // Data offset
	},
	{ // Char "H" 
		'H', 		// This char
		7,11, 		// Width and height of the image
		1,2,6,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+426), // Data offset
	},
	{ // Char "I" 
		'I', 		// This char
		2,11, 		// Width and height of the image
		1,2,1,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+440), // Data offset
	},
	{ // Char "J" 
		'J', 		// This char
		5,11, 		// Width and height of the image
		0,2,3,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+447), // Data offset
	},
	{ // Char "K" 
		'K', 		// This char
		6,11, 		// Width and height of the image
		1,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+461), // Data offset
	},
	{ // Char "L" 
		'L', 		// This char
		5,11, 		// Width and height of the image
		1,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+475), // Data offset
	},
	{ // Char "M" 
		'M', 		// This char
		8,11, 		// Width and height of the image
		1,2,7,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+489), // Data offset
	},
	{ // Char "N" 
		'N', 		// This char
		7,11, 		// Width and height of the image
		1,2,6,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+503), // Data offset
	},
	{ // Char "O" 
		'O', 		// This char
		7,11, 		// Width and height of the image
		0,2,6,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+517), // Data offset
	},
	{ // Char "P" 
		'P', 		// This char
		6,11, 		// Width and height of the image
		1,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+531), // Data offset
	},
	{ // Char "Q" 
		'Q', 		// This char
		7,11, 		// Width and height of the image
		0,2,6,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+545), // Data offset
	},
	{ // Char "R" 
		'R', 		// This char
		7,11, 		// Width and height of the image
		1,2,6,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+559), // Data offset
	},
	{ // Char "S" 
		'S', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+573), // Data offset
	},
	{ // Char "T" 
		'T', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+587), // Data offset
	},
	{ // Char "U" 
		'U', 		// This char
		7,11, 		// Width and height of the image
		1,2,6,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+601), // Data offset
	},
	{ // Char "V" 
		'V', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+615), // Data offset
	},
	{ // Char "W" 
		'W', 		// This char
		9,11, 		// Width and height of the image
		0,2,8,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+629), // Data offset
	},
	{ // Char "X" 
		'X', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+650), // Data offset
	},
	{ // Char "Y" 
		'Y', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+664), // Data offset
	},
	{ // Char "Z" 
		'Z', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+678), // Data offset
	},
	{ // Char "[" 
		'[', 		// This char
		2,11, 		// Width and height of the image
		1,2,1,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+692), // Data offset
	},
	{ // Char "\" 
		'\\', 		// This char
		2,11, 		// Width and height of the image
		0,2,1,6, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+701), // Data offset
	},
	{ // Char "]" 
		']', 		// This char
		2,11, 		// Width and height of the image
		0,2,1,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+706), // Data offset
	},
	{ // Char "^" 
		'^', 		// This char
		4,11, 		// Width and height of the image
		0,2,3,5, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+715), // Data offset
	},
	{ // Char "_" 
		'_', 		// This char
		5,11, 		// Width and height of the image
		0,10,4,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+719), // Data offset
	},
	{ // Char "`" 
		'`', 		// This char
		3,11, 		// Width and height of the image
		1,2,1,3, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+721), // Data offset
	},
	{ // Char "a" 
		'a', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+723), // Data offset
	},
	{ // Char "b" 
		'b', 		// This char
		5,11, 		// Width and height of the image
		1,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+733), // Data offset
	},
	{ // Char "c" 
		'c', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+747), // Data offset
	},
	{ // Char "d" 
		'd', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+757), // Data offset
	},
	{ // Char "e" 
		'e', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+771), // Data offset
	},
	{ // Char "f" 
		'f', 		// This char
		2,11, 		// Width and height of the image
		0,2,1,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+781), // Data offset
	},
	{ // Char "g" 
		'g', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+788), // Data offset
	},
	{ // Char "h" 
		'h', 		// This char
		5,11, 		// Width and height of the image
		1,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+802), // Data offset
	},
	{ // Char "i" 
		'i', 		// This char
		2,11, 		// Width and height of the image
		1,2,1,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+816), // Data offset
	},
	{ // Char "j" 
		'j', 		// This char
		2,11, 		// Width and height of the image
		0,2,1,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+823), // Data offset
	},
	{ // Char "k" 
		'k', 		// This char
		5,11, 		// Width and height of the image
		1,2,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+832), // Data offset
	},
	{ // Char "l" 
		'l', 		// This char
		2,11, 		// Width and height of the image
		1,2,1,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+846), // Data offset
	},
	{ // Char "m" 
		'm', 		// This char
		8,11, 		// Width and height of the image
		1,4,7,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+853), // Data offset
	},
	{ // Char "n" 
		'n', 		// This char
		5,11, 		// Width and height of the image
		1,4,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+863), // Data offset
	},
	{ // Char "o" 
		'o', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+873), // Data offset
	},
	{ // Char "p" 
		'p', 		// This char
		5,11, 		// Width and height of the image
		1,4,4,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+883), // Data offset
	},
	{ // Char "q" 
		'q', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+897), // Data offset
	},
	{ // Char "r" 
		'r', 		// This char
		3,11, 		// Width and height of the image
		1,4,2,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+911), // Data offset
	},
	{ // Char "s" 
		's', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+916), // Data offset
	},
	{ // Char "t" 
		't', 		// This char
		2,11, 		// Width and height of the image
		0,2,1,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+926), // Data offset
	},
	{ // Char "u" 
		'u', 		// This char
		5,11, 		// Width and height of the image
		1,4,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+933), // Data offset
	},
	{ // Char "v" 
		'v', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+943), // Data offset
	},
	{ // Char "w" 
		'w', 		// This char
		7,11, 		// Width and height of the image
		0,4,6,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+953), // Data offset
	},
	{ // Char "x" 
		'x', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+963), // Data offset
	},
	{ // Char "y" 
		'y', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+973), // Data offset
	},
	{ // Char "z" 
		'z', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+987), // Data offset
	},
	{ // Char "{" 
		'{', 		// This char
		3,11, 		// Width and height of the image
		0,2,2,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+997), // Data offset
	},
	{ // Char "|" 
		'|', 		// This char
		2,11, 		// Width and height of the image
		1,2,1,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+1006), // Data offset
	},
	{ // Char "}" 
		'}', 		// This char
		3,11, 		// Width and height of the image
		0,2,2,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+1015), // Data offset
	},
	{ // Char "~" 
		'~', 		// This char
		5,11, 		// Width and height of the image
		1,5,4,6, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_2_Pixels+1024), // Data offset
	},
};

// Font data for Arial_10_2 
const uint8_t Arial_10_2_Pixels[] = {
	// Char "!" offset 0
	0x30,0x30,0x30,0x30,0x30,0x00,0x30,
	// Char """ offset 7
	0x8C,0x88,0x08,
	// Char "#" offset 10
	0x08,0x80,0x00,0x80,0xFF,0xC0,0x32,0x00,0xFF,0xC0,0x22,0x00,0x82,0x00,
	// Char "$" offset 24
	0x3F,0x00,0x28,0xC0,0x38,0x00,0x0F,0x80,0x08,0xC0,0xA8,0xC0,0x3F,0x00,0x08,0x00,
	// Char "%" offset 40
	0x3C,0x0C,0x22,0x30,0x22,0x20,0x3C,0xEF,0x02,0xB2,0x03,0x32,0x08,0x2F,
	// Char "&" offset 54
	0x0F,0x80,0x20,0xC0,0x0F,0x00,0x3E,0x00,0x82,0xB0,0xA0,0xC0,0x3F,0x30,
	// Char "'" offset 68
	0x80,0x80,0x80,
	// Char "(" offset 71
	0x0C,0x20,0x30,0x20,0x20,0x20,0x30,0x20,0x0C,
	// Char ")" offset 80
	0x20,0x20,0x08,0x0C,0x0C,0x0C,0x08,0x20,0x20,
	// Char "*" offset 89
	0xBC,0x28,
	// Char "+" offset 91
	0x0A,0x00,0x0A,0x00,0xBF,0xC0,0x0A,0x00,0x0A,0x00,
	// Char "," offset 101
	0x30,0x20,
	// Char "-" offset 103
	0xBC,
	// Char "." offset 104
	0x30,
	// Char "/" offset 105
	0x20,0x20,0x20,0x80,0x80,
	// Char "0" offset 110
	0x2F,0x00,0x20,0xC0,0x80,0xC0,0x80,0xC0,0x80,0xC0,0x20,0xC0,0x2F,0x00,
	// Char "1" offset 124
	0x03,0x00,0x0F,0x00,0x23,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,
	// Char "2" offset 138
	0x3F,0x00,0xA0,0xC0,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xBF,0xC0,
	// Char "3" offset 152
	0x3F,0x00,0x20,0x80,0x00,0x80,0x0F,0x00,0x00,0xC0,0xA0,0xC0,0x3F,0x00,
	// Char "4" offset 166
	0x03,0x00,0x0B,0x00,0x0A,0x00,0x32,0x00,0xBF,0xC0,0x02,0x00,0x02,0x00,
	// Char "5" offset 180
	0x3F,0xC0,0x30,0x00,0x3F,0x00,0x20,0xC0,0x00,0xC0,0xA0,0xC0,0x3F,0x00,
	// Char "6" offset 194
	0x2F,0x00,0x20,0xC0,0xAF,0x00,0xA0,0xC0,0x80,0xC0,0x20,0xC0,0x2F,0x00,
	// Char "7" offset 208
	0xBF,0xC0,0x00,0x80,0x03,0x00,0x08,0x00,0x0C,0x00,0x08,0x00,0x08,0x00,
	// Char "8" offset 222
	0x2F,0x00,0x20,0xC0,0x20,0x80,0x0F,0x00,0xA0,0xC0,0xA0,0xC0,0x3F,0x00,
	// Char "9" offset 236
	0x2F,0x00,0x20,0xC0,0x80,0xC0,0xA0,0xC0,0x3F,0xC0,0x20,0xC0,0x3F,0x00,
	// Char ":" offset 250
	0x30,0x00,0x00,0x00,0x30,
	// Char ";" offset 255
	0x30,0x00,0x00,0x00,0x30,0x20,
	// Char "<" offset 261
	0x00,0xC0,0x0F,0x00,0xA0,0x00,0x0F,0x00,0x00,0xC0,
	// Char "=" offset 271
	0xBF,0xC0,0x00,0x00,0xBF,0xC0,
	// Char ">" offset 277
	0xB0,0x00,0x0F,0x00,0x00,0xC0,0x0F,0x00,0xB0,0x00,
	// Char "?" offset 287
	0x3F,0x80,0xA0,0xC0,0x00,0xC0,0x03,0x00,0x0C,0x00,0x00,0x00,0x0C,0x00,
	// Char "@" offset 301
	0x03,0xFE,0x00,0x0C,0x02,0xC0,0x30,0xF8,0x80,0x23,0x0C,0x20,0xA8,0x08,0xA0,0x2A,0x28,0xC0,0x33,0xEF,0x00,0x2C,0x00,0xE0,0x03,0xFF,0x00,
	// Char "A" offset 328
	0x03,0x00,0x0E,0x00,0x08,0x80,0x20,0x80,0x3F,0xE0,0xA0,0x30,0xC0,0x20,
	// Char "B" offset 342
	0x3F,0xC0,0x20,0x30,0x20,0x20,0x3F,0xE0,0x20,0x30,0x20,0x30,0x3F,0xC0,
	// Char "C" offset 356
	0x0F,0xE0,0x30,0x28,0x20,0x00,0x80,0x00,0x20,0x00,0x30,0x28,0x0F,0xE0,
	// Char "D" offset 370
	0x3F,0xE0,0x20,0x30,0x20,0x08,0x20,0x08,0x20,0x08,0x20,0x30,0x3F,0xC0,
	// Char "E" offset 384
	0x3F,0xF0,0x20,0x00,0x20,0x00,0x3F,0xE0,0x20,0x00,0x20,0x00,0x3F,0xF0,
	// Char "F" offset 398
	0x3F,0xE0,0x20,0x00,0x20,0x00,0x3F,0xC0,0x20,0x00,0x20,0x00,0x20,0x00,
	// Char "G" offset 412
	0x0F,0xF0,0x30,0x0C,0x20,0x00,0xA0,0xFC,0x20,0x08,0x30,0x0C,0x0F,0xF0,
	// Char "H" offset 426
	0x20,0x28,0x20,0x28,0x20,0x28,0x3F,0xF8,0x20,0x28,0x20,0x28,0x20,0x28,
	// Char "I" offset 440
	0x30,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "J" offset 447
	0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x83,0x00,0x3E,0x00,
	// Char "K" offset 461
	0x20,0x30,0x20,0xC0,0x23,0x00,0x2F,0x00,0x30,0xC0,0x20,0x20,0x20,0x20,
	// Char "L" offset 475
	0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x20,0x00,0x3F,0xC0,
	// Char "M" offset 489
	0x38,0x0E,0x3C,0x0E,0x2C,0x2A,0x28,0x32,0x22,0x02,0x23,0x82,0x22,0x82,
	// Char "N" offset 503
	0x30,0x28,0x3C,0x28,0x2A,0x28,0x23,0x28,0x20,0xE8,0x20,0xB8,0x20,0x38,
	// Char "O" offset 517
	0x0F,0xF0,0x30,0x2C,0x20,0x08,0x80,0x08,0x20,0x08,0x30,0x2C,0x0F,0xF0,
	// Char "P" offset 531
	0x3F,0xE0,0x20,0x30,0x20,0x30,0x3F,0xE0,0x20,0x00,0x20,0x00,0x20,0x00,
	// Char "Q" offset 545
	0x0F,0xF0,0x30,0x2C,0xA0,0x0C,0x80,0x08,0xA0,0x08,0x30,0xC8,0x0F,0xFC,
	// Char "R" offset 559
	0x3F,0xF0,0x20,0x20,0x20,0x20,0x3F,0xE0,0x20,0xC0,0x20,0x30,0x20,0x28,
	// Char "S" offset 573
	0x2F,0xC0,0x20,0x30,0x30,0x00,0x0F,0xC0,0x00,0x30,0xA0,0x30,0x2F,0xC0,
	// Char "T" offset 587
	0xFF,0xF0,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,0x02,0x00,
	// Char "U" offset 601
	0x20,0x28,0x20,0x28,0x20,0x28,0x20,0x28,0x20,0x28,0x30,0x30,0x0F,0xE0,
	// Char "V" offset 615
	0xC0,0x20,0x20,0x30,0x30,0x20,0x20,0x80,0x08,0xC0,0x0C,0x80,0x0B,0x00,
	// Char "W" offset 629
	0x80,0xF0,0x80,0xA0,0xF0,0x80,0x20,0xA0,0xC0,0x32,0x08,0x80,0x23,0x0E,0x80,0x0E,0x0B,0x00,0x0E,0x0B,0x00,
	// Char "X" offset 650
	0xA0,0x30,0x28,0xC0,0x0F,0x00,0x03,0x00,0x0C,0x80,0x30,0xA0,0xC0,0x30,
	// Char "Y" offset 664
	0xC0,0x30,0x30,0x80,0x08,0x80,0x0B,0x00,0x02,0x00,0x02,0x00,0x02,0x00,
	// Char "Z" offset 678
	0x3F,0xE0,0x00,0x80,0x02,0x00,0x0A,0x00,0x28,0x00,0x20,0x00,0xFF,0xF0,
	// Char "[" offset 692
	0x30,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x30,
	// Char "\" offset 701
	0x80,0x00,0x20,0x20,0x20,
	// Char "]" offset 706
	0xB0,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0xB0,
	// Char "^" offset 715
	0x0C,0x28,0x22,0x83,
	// Char "_" offset 719
	0xFF,0xC0,
	// Char "`" offset 721
	0x30,0x20,
	// Char "a" offset 723
	0x3F,0x80,0x00,0xC0,0x2F,0xC0,0x80,0xC0,0x3F,0xC0,
	// Char "b" offset 733
	0x20,0x00,0x20,0x00,0x2F,0x80,0x30,0xC0,0x20,0x80,0x20,0xC0,0x3F,0x00,
	// Char "c" offset 747
	0x3F,0x00,0xA0,0x80,0x80,0x00,0xA0,0xC0,0x3F,0x00,
	// Char "d" offset 757
	0x00,0xC0,0x00,0xC0,0x3E,0xC0,0xA0,0xC0,0x80,0xC0,0xA0,0xC0,0x3F,0xC0,
	// Char "e" offset 771
	0x3F,0x00,0xA0,0xC0,0xBF,0xC0,0xA0,0x00,0x3F,0xC0,
	// Char "f" offset 781
	0x30,0x30,0xF0,0x30,0x30,0x30,0x30,
	// Char "g" offset 788
	0x3E,0xC0,0xA0,0xC0,0x80,0xC0,0xA0,0xC0,0x3E,0xC0,0xA0,0x80,0x3F,0x00,
	// Char "h" offset 802
	0x20,0x00,0x20,0x00,0x2F,0x80,0x30,0xC0,0x20,0xC0,0x20,0xC0,0x20,0xC0,
	// Char "i" offset 816
	0x20,0x00,0x20,0x20,0x20,0x20,0x20,
	// Char "j" offset 823
	0x20,0x00,0x20,0x20,0x20,0x20,0x20,0x20,0xC0,
	// Char "k" offset 832
	0x20,0x00,0x20,0x00,0x23,0x80,0x2C,0x00,0x3C,0x00,0x23,0x00,0x22,0x80,
	// Char "l" offset 846
	0x20,0x20,0x20,0x20,0x20,0x20,0x20,
	// Char "m" offset 853
	0x2F,0x3C,0x30,0xC2,0x20,0x82,0x20,0x82,0x20,0x82,
	// Char "n" offset 863
	0x3F,0x80,0x30,0xC0,0x20,0xC0,0x20,0xC0,0x20,0xC0,
	// Char "o" offset 873
	0x3F,0x00,0xA0,0xC0,0x80,0xC0,0xA0,0xC0,0x3F,0x00,
	// Char "p" offset 883
	0x2F,0x80,0x30,0xC0,0x20,0x80,0x30,0xC0,0x2F,0x00,0x20,0x00,0x20,0x00,
	// Char "q" offset 897
	0x3E,0xC0,0xA0,0xC0,0x80,0xC0,0xA0,0xC0,0x2F,0xC0,0x00,0xC0,0x00,0xC0,
	// Char "r" offset 911
	0x3C,0x20,0x20,0x20,0x20,
	// Char "s" offset 916
	0x3F,0x00,0x80,0x00,0x3F,0x00,0x00,0x80,0xBF,0x00,
	// Char "t" offset 926
	0x20,0x20,0xF0,0x20,0x20,0x20,0x30,
	// Char "u" offset 933
	0x20,0xC0,0x20,0xC0,0x20,0xC0,0x20,0xC0,0x3F,0xC0,
	// Char "v" offset 943
	0x80,0xC0,0x22,0x00,0x33,0x00,0x2A,0x00,0x0C,0x00,
	// Char "w" offset 953
	0xC3,0x8C,0xA3,0x8C,0x38,0xE8,0x3C,0xE0,0x2C,0xB0,
	// Char "x" offset 963
	0xA2,0x80,0x2A,0x00,0x0C,0x00,0x33,0x00,0xE2,0x80,
	// Char "y" offset 973
	0x80,0x80,0x22,0x00,0x33,0x00,0x2E,0x00,0x0C,0x00,0x0C,0x00,0x30,0x00,
	// Char "z" offset 987
	0xBF,0x80,0x03,0x00,0x0C,0x00,0x30,0x00,0xFF,0x80,
	// Char "{" offset 997
	0x2C,0x30,0x30,0x30,0xC0,0x30,0x30,0x20,0x2C,
	// Char "|" offset 1006
	0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
	// Char "}" offset 1015
	0xF0,0x30,0x30,0x20,0x08,0x20,0x30,0x30,0xF0,
	// Char "~" offset 1024
	0x3C,0x00,0x03,0xC0,

};
