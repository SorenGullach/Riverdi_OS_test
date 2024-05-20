
#include "glFont.h"

extern const uint8_t Arial_12_2_Pixels[];

// Font index for Arial_12_2
const FontItem Arial_12_2[] = {
	{ // Char "!" 
		'!', 		// This char
		3,13, 		// Width and height of the image
		1,2,1,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+0), // Data offset
	},
	{ // Char """ 
		'"', 		// This char
		4,13, 		// Width and height of the image
		0,2,3,4, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+9), // Data offset
	},
	{ // Char "#" 
		'#', 		// This char
		6,13, 		// Width and height of the image
		0,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+12), // Data offset
	},
	{ // Char "$" 
		'$', 		// This char
		6,13, 		// Width and height of the image
		0,2,5,11, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+30), // Data offset
	},
	{ // Char "%" 
		'%', 		// This char
		10,13, 		// Width and height of the image
		1,2,9,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+50), // Data offset
	},
	{ // Char "&" 
		'&', 		// This char
		8,13, 		// Width and height of the image
		0,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+77), // Data offset
	},
	{ // Char "'" 
		'\'', 		// This char
		2,13, 		// Width and height of the image
		0,2,1,4, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+95), // Data offset
	},
	{ // Char "(" 
		'(', 		// This char
		3,13, 		// Width and height of the image
		1,2,2,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+98), // Data offset
	},
	{ // Char ")" 
		')', 		// This char
		3,13, 		// Width and height of the image
		1,2,2,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+109), // Data offset
	},
	{ // Char "*" 
		'*', 		// This char
		4,13, 		// Width and height of the image
		0,2,3,5, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+120), // Data offset
	},
	{ // Char "+" 
		'+', 		// This char
		7,13, 		// Width and height of the image
		1,4,6,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+124), // Data offset
	},
	{ // Char "," 
		',', 		// This char
		3,13, 		// Width and height of the image
		1,10,1,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+134), // Data offset
	},
	{ // Char "-" 
		'-', 		// This char
		3,13, 		// Width and height of the image
		0,7,2,7, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+137), // Data offset
	},
	{ // Char "." 
		'.', 		// This char
		3,13, 		// Width and height of the image
		1,10,1,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+138), // Data offset
	},
	{ // Char "/" 
		'/', 		// This char
		3,13, 		// Width and height of the image
		0,2,2,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+139), // Data offset
	},
	{ // Char "0" 
		'0', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+148), // Data offset
	},
	{ // Char "1" 
		'1', 		// This char
		6,13, 		// Width and height of the image
		1,2,4,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+166), // Data offset
	},
	{ // Char "2" 
		'2', 		// This char
		6,13, 		// Width and height of the image
		0,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+184), // Data offset
	},
	{ // Char "3" 
		'3', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+202), // Data offset
	},
	{ // Char "4" 
		'4', 		// This char
		6,13, 		// Width and height of the image
		0,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+220), // Data offset
	},
	{ // Char "5" 
		'5', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+238), // Data offset
	},
	{ // Char "6" 
		'6', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+256), // Data offset
	},
	{ // Char "7" 
		'7', 		// This char
		6,13, 		// Width and height of the image
		0,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+274), // Data offset
	},
	{ // Char "8" 
		'8', 		// This char
		6,13, 		// Width and height of the image
		0,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+292), // Data offset
	},
	{ // Char "9" 
		'9', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+310), // Data offset
	},
	{ // Char ":" 
		':', 		// This char
		3,13, 		// Width and height of the image
		1,4,1,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+328), // Data offset
	},
	{ // Char ";" 
		';', 		// This char
		3,13, 		// Width and height of the image
		1,4,1,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+335), // Data offset
	},
	{ // Char "<" 
		'<', 		// This char
		7,13, 		// Width and height of the image
		1,4,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+344), // Data offset
	},
	{ // Char "=" 
		'=', 		// This char
		7,13, 		// Width and height of the image
		1,5,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+354), // Data offset
	},
	{ // Char ">" 
		'>', 		// This char
		7,13, 		// Width and height of the image
		1,4,5,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+362), // Data offset
	},
	{ // Char "?" 
		'?', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+372), // Data offset
	},
	{ // Char "@" 
		'@', 		// This char
		12,13, 		// Width and height of the image
		1,2,11,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+390), // Data offset
	},
	{ // Char "A" 
		'A', 		// This char
		8,13, 		// Width and height of the image
		0,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+423), // Data offset
	},
	{ // Char "B" 
		'B', 		// This char
		8,13, 		// Width and height of the image
		1,2,6,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+441), // Data offset
	},
	{ // Char "C" 
		'C', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+459), // Data offset
	},
	{ // Char "D" 
		'D', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+477), // Data offset
	},
	{ // Char "E" 
		'E', 		// This char
		8,13, 		// Width and height of the image
		1,2,6,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+495), // Data offset
	},
	{ // Char "F" 
		'F', 		// This char
		7,13, 		// Width and height of the image
		1,2,6,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+513), // Data offset
	},
	{ // Char "G" 
		'G', 		// This char
		9,13, 		// Width and height of the image
		1,2,8,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+531), // Data offset
	},
	{ // Char "H" 
		'H', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+558), // Data offset
	},
	{ // Char "I" 
		'I', 		// This char
		3,13, 		// Width and height of the image
		1,2,1,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+576), // Data offset
	},
	{ // Char "J" 
		'J', 		// This char
		6,13, 		// Width and height of the image
		0,2,4,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+585), // Data offset
	},
	{ // Char "K" 
		'K', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+603), // Data offset
	},
	{ // Char "L" 
		'L', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+621), // Data offset
	},
	{ // Char "M" 
		'M', 		// This char
		9,13, 		// Width and height of the image
		1,2,8,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+639), // Data offset
	},
	{ // Char "N" 
		'N', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+666), // Data offset
	},
	{ // Char "O" 
		'O', 		// This char
		9,13, 		// Width and height of the image
		1,2,8,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+684), // Data offset
	},
	{ // Char "P" 
		'P', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+711), // Data offset
	},
	{ // Char "Q" 
		'Q', 		// This char
		9,13, 		// Width and height of the image
		1,2,8,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+729), // Data offset
	},
	{ // Char "R" 
		'R', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+756), // Data offset
	},
	{ // Char "S" 
		'S', 		// This char
		8,13, 		// Width and height of the image
		1,2,6,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+774), // Data offset
	},
	{ // Char "T" 
		'T', 		// This char
		7,13, 		// Width and height of the image
		0,2,6,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+792), // Data offset
	},
	{ // Char "U" 
		'U', 		// This char
		8,13, 		// Width and height of the image
		1,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+810), // Data offset
	},
	{ // Char "V" 
		'V', 		// This char
		8,13, 		// Width and height of the image
		0,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+828), // Data offset
	},
	{ // Char "W" 
		'W', 		// This char
		11,13, 		// Width and height of the image
		0,2,10,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+846), // Data offset
	},
	{ // Char "X" 
		'X', 		// This char
		8,13, 		// Width and height of the image
		0,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+873), // Data offset
	},
	{ // Char "Y" 
		'Y', 		// This char
		8,13, 		// Width and height of the image
		0,2,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+891), // Data offset
	},
	{ // Char "Z" 
		'Z', 		// This char
		7,13, 		// Width and height of the image
		0,2,6,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+909), // Data offset
	},
	{ // Char "[" 
		'[', 		// This char
		3,13, 		// Width and height of the image
		1,2,2,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+927), // Data offset
	},
	{ // Char "\" 
		'\\', 		// This char
		3,13, 		// Width and height of the image
		0,2,2,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+938), // Data offset
	},
	{ // Char "]" 
		']', 		// This char
		3,13, 		// Width and height of the image
		0,2,2,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+947), // Data offset
	},
	{ // Char "^" 
		'^', 		// This char
		5,13, 		// Width and height of the image
		0,2,4,6, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+958), // Data offset
	},
	{ // Char "_" 
		'_', 		// This char
		6,13, 		// Width and height of the image
		0,12,5,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+968), // Data offset
	},
	{ // Char "`" 
		'`', 		// This char
		3,13, 		// Width and height of the image
		1,2,2,3, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+970), // Data offset
	},
	{ // Char "a" 
		'a', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+972), // Data offset
	},
	{ // Char "b" 
		'b', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+986), // Data offset
	},
	{ // Char "c" 
		'c', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1004), // Data offset
	},
	{ // Char "d" 
		'd', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1018), // Data offset
	},
	{ // Char "e" 
		'e', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1036), // Data offset
	},
	{ // Char "f" 
		'f', 		// This char
		3,13, 		// Width and height of the image
		0,2,2,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1050), // Data offset
	},
	{ // Char "g" 
		'g', 		// This char
		6,13, 		// Width and height of the image
		0,4,5,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1059), // Data offset
	},
	{ // Char "h" 
		'h', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1077), // Data offset
	},
	{ // Char "i" 
		'i', 		// This char
		2,13, 		// Width and height of the image
		1,2,1,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1095), // Data offset
	},
	{ // Char "j" 
		'j', 		// This char
		2,13, 		// Width and height of the image
		0,2,1,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1104), // Data offset
	},
	{ // Char "k" 
		'k', 		// This char
		6,13, 		// Width and height of the image
		1,2,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1115), // Data offset
	},
	{ // Char "l" 
		'l', 		// This char
		2,13, 		// Width and height of the image
		1,2,1,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1133), // Data offset
	},
	{ // Char "m" 
		'm', 		// This char
		9,13, 		// Width and height of the image
		1,4,8,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1142), // Data offset
	},
	{ // Char "n" 
		'n', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1163), // Data offset
	},
	{ // Char "o" 
		'o', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1177), // Data offset
	},
	{ // Char "p" 
		'p', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1191), // Data offset
	},
	{ // Char "q" 
		'q', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1209), // Data offset
	},
	{ // Char "r" 
		'r', 		// This char
		3,13, 		// Width and height of the image
		1,4,2,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1227), // Data offset
	},
	{ // Char "s" 
		's', 		// This char
		6,13, 		// Width and height of the image
		0,4,4,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1234), // Data offset
	},
	{ // Char "t" 
		't', 		// This char
		3,13, 		// Width and height of the image
		0,2,2,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1248), // Data offset
	},
	{ // Char "u" 
		'u', 		// This char
		6,13, 		// Width and height of the image
		1,4,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1257), // Data offset
	},
	{ // Char "v" 
		'v', 		// This char
		6,13, 		// Width and height of the image
		0,4,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1271), // Data offset
	},
	{ // Char "w" 
		'w', 		// This char
		8,13, 		// Width and height of the image
		0,4,7,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1285), // Data offset
	},
	{ // Char "x" 
		'x', 		// This char
		6,13, 		// Width and height of the image
		0,4,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1299), // Data offset
	},
	{ // Char "y" 
		'y', 		// This char
		6,13, 		// Width and height of the image
		0,4,5,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1313), // Data offset
	},
	{ // Char "z" 
		'z', 		// This char
		6,13, 		// Width and height of the image
		0,4,5,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1331), // Data offset
	},
	{ // Char "{" 
		'{', 		// This char
		4,13, 		// Width and height of the image
		0,2,3,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1345), // Data offset
	},
	{ // Char "|" 
		'|', 		// This char
		3,13, 		// Width and height of the image
		1,2,1,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1356), // Data offset
	},
	{ // Char "}" 
		'}', 		// This char
		4,13, 		// Width and height of the image
		0,2,3,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1367), // Data offset
	},
	{ // Char "~" 
		'~', 		// This char
		7,13, 		// Width and height of the image
		0,6,6,7, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_12_2_Pixels+1378), // Data offset
	},
};

// Font data for Arial_12_2 
const uint8_t Arial_12_2_Pixels[] = {
	// Char "!" offset 0
	0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x00,0x30,
	// Char """ offset 9
	0xA3,0xA2,0x02,
	// Char "#" offset 12
	0x08,0x30,0x0C,0x20,0xFF,0xF0,0x08,0x80,0x28,0xC0,0xFF,0xF0,0x30,0x80,0x32,0x80,0x22,0x00,
	// Char "$" offset 30
	0x2F,0xC0,0x32,0x30,0x32,0x00,0x32,0x00,0x0B,0xC0,0x02,0x30,0xA2,0x30,0x32,0x30,0x0F,0xC0,0x02,0x00,
	// Char "%" offset 50
	0x2F,0x03,0x00,0x32,0x0A,0x00,0x22,0x8C,0x00,0x32,0x20,0x00,0x2E,0x33,0xC0,0x00,0x88,0x30,0x00,0xCC,0x30,0x02,0x08,0x30,0x03,0x03,0xC0,
	// Char "&" offset 77
	0x0B,0xC0,0x0C,0xA0,0x0C,0xA0,0x0F,0xC0,0x0F,0x00,0x30,0xCC,0xA0,0xB8,0x30,0x3C,0x0F,0xCA,
	// Char "'" offset 95
	0xA0,0xA0,0x20,
	// Char "(" offset 98
	0x08,0x0C,0x20,0x30,0x30,0x30,0x30,0x30,0x20,0x0C,0x08,
	// Char ")" offset 109
	0x30,0x28,0x0C,0x08,0x08,0x08,0x08,0x08,0x0C,0x28,0x30,
	// Char "*" offset 120
	0x0C,0xAB,0x0C,0x33,
	// Char "+" offset 124
	0x03,0x00,0x03,0x00,0x3F,0xF8,0x03,0x00,0x03,0x00,
	// Char "," offset 134
	0x30,0x20,0x20,
	// Char "-" offset 137
	0xBC,
	// Char "." offset 138
	0x30,
	// Char "/" offset 139
	0x08,0x0C,0x0C,0x28,0x30,0x30,0x20,0x80,0xC0,
	// Char "0" offset 148
	0x0F,0xC0,0x38,0xA0,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x38,0xA0,0x0F,0xC0,
	// Char "1" offset 166
	0x02,0x80,0x0B,0x80,0x2E,0x80,0x02,0x80,0x02,0x80,0x02,0x80,0x02,0x80,0x02,0x80,0x02,0x80,
	// Char "2" offset 184
	0x2F,0xC0,0x20,0xA0,0x00,0x30,0x00,0xB0,0x00,0xC0,0x03,0x00,0x0C,0x00,0x30,0x00,0xBF,0xF0,
	// Char "3" offset 202
	0x2F,0x80,0x30,0xE0,0x00,0xA0,0x00,0xE0,0x03,0xC0,0x00,0x30,0x00,0x30,0x30,0xB0,0x2F,0xC0,
	// Char "4" offset 220
	0x00,0xC0,0x02,0xC0,0x02,0xC0,0x0C,0xC0,0x28,0xC0,0x30,0xC0,0xBF,0xF0,0x00,0xC0,0x00,0xC0,
	// Char "5" offset 238
	0x2F,0xE0,0x28,0x00,0x30,0x00,0x3F,0xC0,0x30,0xB0,0x00,0x30,0x00,0x30,0x30,0xA0,0x2F,0xC0,
	// Char "6" offset 256
	0x0F,0xC0,0x38,0x30,0x30,0x00,0x2F,0xC0,0x30,0xB0,0x30,0x30,0x30,0x30,0x30,0xB0,0x0F,0xC0,
	// Char "7" offset 274
	0xBF,0xF0,0x00,0xA0,0x00,0xC0,0x02,0x80,0x03,0x00,0x0A,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,
	// Char "8" offset 292
	0x0F,0xC0,0x30,0xA0,0x30,0xB0,0x38,0xA0,0x0F,0x80,0x30,0xB0,0xB0,0x30,0x30,0xB0,0x0F,0xC0,
	// Char "9" offset 310
	0x0F,0xC0,0x30,0xA0,0x30,0x30,0x30,0x30,0x30,0xB0,0x2F,0xB0,0x00,0x30,0x30,0xE0,0x2F,0x80,
	// Char ":" offset 328
	0x30,0x00,0x00,0x00,0x00,0x00,0x30,
	// Char ";" offset 335
	0x30,0x00,0x00,0x00,0x00,0x00,0x30,0x20,0x20,
	// Char "<" offset 344
	0x00,0x30,0x0F,0xC0,0x30,0x00,0x0F,0xC0,0x00,0x30,
	// Char "=" offset 354
	0x3F,0xF0,0x00,0x00,0x00,0x00,0x3F,0xF0,
	// Char ">" offset 362
	0x30,0x00,0x0F,0xC0,0x00,0x30,0x0F,0xC0,0x30,0x00,
	// Char "?" offset 372
	0x0F,0xC0,0x30,0xB0,0x20,0x30,0x00,0x30,0x00,0xC0,0x03,0x00,0x03,0x00,0x00,0x00,0x03,0x00,
	// Char "@" offset 390
	0x00,0xFF,0xC0,0x0B,0x00,0xB0,0x0C,0x00,0x0C,0x20,0xBC,0xCC,0x32,0xC3,0x8A,0x33,0x02,0x08,0x33,0x03,0x0C,0x33,0x0B,0x38,0x30,0xFB,0xE0,0x2C,0x00,0x0A,0x0B,0x00,0x38,
	// Char "A" offset 423
	0x02,0xC0,0x03,0xC0,0x0A,0xA0,0x0C,0x30,0x0C,0x20,0x2F,0xF8,0x30,0x0C,0x30,0x0E,0xA0,0x0B,
	// Char "B" offset 441
	0x3F,0xF0,0x30,0x2C,0x30,0x0C,0x30,0x28,0x3F,0xF0,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x3F,0xF0,
	// Char "C" offset 459
	0x03,0xF8,0x0C,0x0E,0x38,0x03,0x30,0x00,0x30,0x00,0x30,0x00,0x38,0x03,0x0C,0x0E,0x03,0xF8,
	// Char "D" offset 477
	0x3F,0xF0,0x30,0x0C,0x30,0x0B,0x30,0x03,0x30,0x03,0x30,0x03,0x30,0x0B,0x30,0x0C,0x3F,0xF0,
	// Char "E" offset 495
	0x3F,0xFC,0x30,0x00,0x30,0x00,0x30,0x00,0x3F,0xFC,0x30,0x00,0x30,0x00,0x30,0x00,0x3F,0xFC,
	// Char "F" offset 513
	0x3F,0xFC,0x30,0x00,0x30,0x00,0x30,0x00,0x3F,0xF0,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,
	// Char "G" offset 531
	0x03,0xFC,0x00,0x0C,0x03,0x00,0x38,0x03,0x00,0x30,0x00,0x00,0x30,0x3F,0x80,0x30,0x02,0x80,0x38,0x02,0x80,0x0C,0x03,0x80,0x03,0xFC,0x00,
	// Char "H" offset 558
	0x30,0x0A,0x30,0x0A,0x30,0x0A,0x30,0x0A,0x3F,0xFE,0x30,0x0A,0x30,0x0A,0x30,0x0A,0x30,0x0A,
	// Char "I" offset 576
	0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "J" offset 585
	0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0xA0,0xC0,0xA2,0xC0,0x3F,0x00,
	// Char "K" offset 603
	0x30,0x0F,0x30,0x38,0x30,0xE0,0x33,0x80,0x3F,0x80,0x38,0xE0,0x30,0x30,0x30,0x2C,0x30,0x0F,
	// Char "L" offset 621
	0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x3F,0xF0,
	// Char "M" offset 639
	0x3C,0x03,0xC0,0x3C,0x03,0xC0,0x3A,0x0A,0xC0,0x33,0x0C,0xC0,0x33,0x0C,0xC0,0x32,0x28,0xC0,0x30,0xB0,0xC0,0x30,0xF0,0xC0,0x30,0xE0,0xC0,
	// Char "N" offset 666
	0x38,0x0A,0x3C,0x0A,0x3B,0x0A,0x33,0x0A,0x30,0xCA,0x30,0xAA,0x30,0x3A,0x30,0x2E,0x30,0x0E,
	// Char "O" offset 684
	0x03,0xF8,0x00,0x0C,0x0B,0x00,0x30,0x03,0x00,0x30,0x02,0x80,0x30,0x02,0x80,0x30,0x02,0x80,0x30,0x03,0x00,0x0C,0x0B,0x00,0x03,0xF8,0x00,
	// Char "P" offset 711
	0x3F,0xF8,0x30,0x0C,0x30,0x0A,0x30,0x0C,0x3F,0xF8,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,
	// Char "Q" offset 729
	0x03,0xF8,0x00,0x2C,0x0F,0x00,0x30,0x03,0x00,0x30,0x02,0x80,0x30,0x02,0x80,0x30,0x02,0x80,0x30,0x23,0x00,0x2C,0x2E,0x00,0x03,0xFB,0xC0,
	// Char "R" offset 756
	0x3F,0xFC,0x30,0x0E,0x30,0x0A,0x30,0x0E,0x3F,0xF8,0x30,0x30,0x30,0x2C,0x30,0x0E,0x30,0x03,
	// Char "S" offset 774
	0x0F,0xF0,0x38,0x2C,0x30,0x0C,0x3C,0x00,0x03,0xF0,0x00,0x0C,0x20,0x0C,0x30,0x0C,0x0F,0xF0,
	// Char "T" offset 792
	0xBF,0xFC,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,0x03,0x00,
	// Char "U" offset 810
	0x30,0x0A,0x30,0x0A,0x30,0x0A,0x30,0x0A,0x30,0x0A,0x30,0x0A,0x30,0x0A,0x2C,0x0C,0x0B,0xF0,
	// Char "V" offset 828
	0xB0,0x0B,0x30,0x0E,0x38,0x0C,0x2C,0x28,0x0C,0x30,0x0C,0x30,0x0A,0xA0,0x03,0xC0,0x03,0xC0,
	// Char "W" offset 846
	0xA0,0x38,0x0C,0xA0,0x3C,0x0C,0x30,0x8C,0x28,0x30,0xC8,0x30,0x28,0xC2,0x30,0x08,0x83,0x30,0x0E,0x03,0x20,0x0F,0x02,0x80,0x0B,0x00,0xC0,
	// Char "X" offset 873
	0x30,0x0C,0x2C,0x38,0x0E,0xB0,0x03,0xC0,0x03,0xC0,0x0B,0xE0,0x0C,0x30,0x38,0x2C,0xF0,0x0E,
	// Char "Y" offset 891
	0xE0,0x0E,0x30,0x2C,0x0C,0x30,0x0E,0xA0,0x03,0xC0,0x02,0x80,0x02,0x80,0x02,0x80,0x02,0x80,
	// Char "Z" offset 909
	0x3F,0xFC,0x00,0x38,0x00,0xA0,0x00,0xC0,0x03,0x00,0x0C,0x00,0x28,0x00,0x30,0x00,0xFF,0xFC,
	// Char "[" offset 927
	0x3C,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3C,
	// Char "\" offset 938
	0xC0,0xA0,0x20,0x30,0x20,0x28,0x0C,0x0C,0x08,
	// Char "]" offset 947
	0xB8,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0xB8,
	// Char "^" offset 958
	0x0C,0x00,0x0A,0x00,0x33,0x00,0x32,0x80,0xA0,0xC0,
	// Char "_" offset 968
	0xFF,0xF0,
	// Char "`" offset 970
	0x30,0x28,
	// Char "a" offset 972
	0x0F,0xC0,0x30,0xB0,0x00,0x30,0x2F,0xF0,0x30,0x30,0x30,0xF0,0x3F,0x30,
	// Char "b" offset 986
	0x30,0x00,0x30,0x00,0x3B,0xC0,0x38,0xB0,0x30,0x30,0x30,0x30,0x30,0x30,0x38,0xB0,0x3B,0xC0,
	// Char "c" offset 1004
	0x0F,0xC0,0x30,0xA0,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0xB0,0x0F,0xC0,
	// Char "d" offset 1018
	0x00,0x30,0x00,0x30,0x0F,0xB0,0x38,0xB0,0x30,0x30,0x30,0x30,0x30,0x30,0x38,0xB0,0x0F,0xB0,
	// Char "e" offset 1036
	0x0F,0xC0,0x30,0xB0,0x30,0x30,0x3F,0xF0,0x30,0x00,0x30,0xB0,0x0F,0xC0,
	// Char "f" offset 1050
	0x2C,0x30,0xFC,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "g" offset 1059
	0x0F,0xB0,0x30,0xF0,0x30,0x30,0xB0,0x30,0x30,0x30,0x30,0xF0,0x0F,0xB0,0x00,0xA0,0x3F,0xC0,
	// Char "h" offset 1077
	0x30,0x00,0x30,0x00,0x3B,0xC0,0x38,0xB0,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "i" offset 1095
	0x30,0x00,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "j" offset 1104
	0x30,0x00,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0xE0,
	// Char "k" offset 1115
	0x30,0x00,0x30,0x00,0x30,0xB0,0x32,0x80,0x3A,0x00,0x3B,0x00,0x32,0x80,0x30,0xC0,0x30,0x30,
	// Char "l" offset 1133
	0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "m" offset 1142
	0x3B,0xCF,0x80,0x38,0xB0,0xC0,0x30,0xA0,0xC0,0x30,0xA0,0xC0,0x30,0xA0,0xC0,0x30,0xA0,0xC0,0x30,0xA0,0xC0,
	// Char "n" offset 1163
	0x3B,0xC0,0x38,0xB0,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "o" offset 1177
	0x0F,0xC0,0x38,0xB0,0x30,0x30,0x30,0x30,0x30,0x30,0x38,0xB0,0x0F,0xC0,
	// Char "p" offset 1191
	0x3B,0xC0,0x38,0xB0,0x30,0x30,0x30,0x30,0x30,0x30,0x38,0xB0,0x3B,0xC0,0x30,0x00,0x30,0x00,
	// Char "q" offset 1209
	0x0F,0xB0,0x30,0xB0,0x30,0x30,0x30,0x30,0x30,0x30,0x38,0xB0,0x0F,0xB0,0x00,0x30,0x00,0x30,
	// Char "r" offset 1227
	0x3C,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "s" offset 1234
	0x2F,0x80,0x30,0xC0,0x30,0x00,0x2F,0x80,0x00,0xC0,0xA0,0xC0,0x3F,0x80,
	// Char "t" offset 1248
	0x30,0x30,0xFC,0x30,0x30,0x30,0x30,0x30,0x3C,
	// Char "u" offset 1257
	0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0xB0,0x30,0xF0,0x2F,0xB0,
	// Char "v" offset 1271
	0xA0,0xA0,0x30,0xC0,0x30,0xC0,0x32,0x80,0x2A,0x00,0x0F,0x00,0x0E,0x00,
	// Char "w" offset 1285
	0xC0,0xC2,0xA2,0xC3,0x32,0x23,0x33,0x22,0x22,0x38,0x2E,0x2C,0x0C,0x28,
	// Char "x" offset 1299
	0xA0,0xC0,0x30,0x80,0x0F,0x00,0x0A,0x00,0x0B,0x00,0x30,0xC0,0xC0,0xA0,
	// Char "y" offset 1313
	0xA0,0xA0,0x30,0xC0,0x30,0xC0,0x22,0x80,0x0B,0x00,0x0F,0x00,0x0A,0x00,0x0C,0x00,0x38,0x00,
	// Char "z" offset 1331
	0xBF,0xE0,0x00,0xC0,0x03,0x00,0x0E,0x00,0x28,0x00,0xA0,0x00,0xFF,0xE0,
	// Char "{" offset 1345
	0x0E,0x28,0x28,0x28,0x30,0xC0,0x30,0x28,0x28,0x28,0x0E,
	// Char "|" offset 1356
	0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "}" offset 1367
	0xB0,0x28,0x28,0x28,0x0C,0x03,0x0C,0x28,0x28,0x28,0xB0,
	// Char "~" offset 1378
	0x3E,0x08,0x82,0xF0,

};
