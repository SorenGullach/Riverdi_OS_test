
#include "glFont.h"

extern const uint8_t Arial_16_2_Pixels[];

// Font index for Arial_16_2
const FontItem Arial_16_2[] = {
	{ // Char "!" 
		'!', 		// This char
		4,18, 		// Width and height of the image
		1,3,2,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+0), // Data offset
	},
	{ // Char """ 
		'"', 		// This char
		5,18, 		// Width and height of the image
		1,3,4,6, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+12), // Data offset
	},
	{ // Char "#" 
		'#', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+20), // Data offset
	},
	{ // Char "$" 
		'$', 		// This char
		8,18, 		// Width and height of the image
		1,2,7,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,14, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+44), // Data offset
	},
	{ // Char "%" 
		'%', 		// This char
		14,18, 		// Width and height of the image
		1,3,12,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		4,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+72), // Data offset
	},
	{ // Char "&" 
		'&', 		// This char
		10,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+120), // Data offset
	},
	{ // Char "'" 
		'\'', 		// This char
		3,18, 		// Width and height of the image
		1,3,1,6, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+156), // Data offset
	},
	{ // Char "(" 
		'(', 		// This char
		5,18, 		// Width and height of the image
		1,3,4,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+160), // Data offset
	},
	{ // Char ")" 
		')', 		// This char
		5,18, 		// Width and height of the image
		1,3,4,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+190), // Data offset
	},
	{ // Char "*" 
		'*', 		// This char
		6,18, 		// Width and height of the image
		1,3,5,7, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+220), // Data offset
	},
	{ // Char "+" 
		'+', 		// This char
		9,18, 		// Width and height of the image
		1,6,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+230), // Data offset
	},
	{ // Char "," 
		',', 		// This char
		4,18, 		// Width and height of the image
		1,14,2,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+251), // Data offset
	},
	{ // Char "-" 
		'-', 		// This char
		5,18, 		// Width and height of the image
		0,11,4,11, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+255), // Data offset
	},
	{ // Char "." 
		'.', 		// This char
		4,18, 		// Width and height of the image
		1,14,2,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+257), // Data offset
	},
	{ // Char "/" 
		'/', 		// This char
		4,18, 		// Width and height of the image
		0,3,3,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+258), // Data offset
	},
	{ // Char "0" 
		'0', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+270), // Data offset
	},
	{ // Char "1" 
		'1', 		// This char
		8,18, 		// Width and height of the image
		2,3,5,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+294), // Data offset
	},
	{ // Char "2" 
		'2', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+318), // Data offset
	},
	{ // Char "3" 
		'3', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+342), // Data offset
	},
	{ // Char "4" 
		'4', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+366), // Data offset
	},
	{ // Char "5" 
		'5', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+390), // Data offset
	},
	{ // Char "6" 
		'6', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+414), // Data offset
	},
	{ // Char "7" 
		'7', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+438), // Data offset
	},
	{ // Char "8" 
		'8', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+462), // Data offset
	},
	{ // Char "9" 
		'9', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+486), // Data offset
	},
	{ // Char ":" 
		':', 		// This char
		4,18, 		// Width and height of the image
		1,6,2,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+510), // Data offset
	},
	{ // Char ";" 
		';', 		// This char
		4,18, 		// Width and height of the image
		1,6,2,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+519), // Data offset
	},
	{ // Char "<" 
		'<', 		// This char
		9,18, 		// Width and height of the image
		1,6,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+531), // Data offset
	},
	{ // Char "=" 
		'=', 		// This char
		9,18, 		// Width and height of the image
		1,7,8,11, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+552), // Data offset
	},
	{ // Char ">" 
		'>', 		// This char
		9,18, 		// Width and height of the image
		1,6,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+567), // Data offset
	},
	{ // Char "?" 
		'?', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+588), // Data offset
	},
	{ // Char "@" 
		'@', 		// This char
		16,18, 		// Width and height of the image
		1,3,15,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		4,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+612), // Data offset
	},
	{ // Char "A" 
		'A', 		// This char
		10,18, 		// Width and height of the image
		0,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+672), // Data offset
	},
	{ // Char "B" 
		'B', 		// This char
		10,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+708), // Data offset
	},
	{ // Char "C" 
		'C', 		// This char
		11,18, 		// Width and height of the image
		1,3,10,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+744), // Data offset
	},
	{ // Char "D" 
		'D', 		// This char
		11,18, 		// Width and height of the image
		1,3,10,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+780), // Data offset
	},
	{ // Char "E" 
		'E', 		// This char
		10,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+816), // Data offset
	},
	{ // Char "F" 
		'F', 		// This char
		9,18, 		// Width and height of the image
		1,3,8,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+852), // Data offset
	},
	{ // Char "G" 
		'G', 		// This char
		12,18, 		// Width and height of the image
		1,3,11,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+888), // Data offset
	},
	{ // Char "H" 
		'H', 		// This char
		11,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+924), // Data offset
	},
	{ // Char "I" 
		'I', 		// This char
		4,18, 		// Width and height of the image
		1,3,2,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+960), // Data offset
	},
	{ // Char "J" 
		'J', 		// This char
		8,18, 		// Width and height of the image
		0,3,6,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+972), // Data offset
	},
	{ // Char "K" 
		'K', 		// This char
		10,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+996), // Data offset
	},
	{ // Char "L" 
		'L', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1032), // Data offset
	},
	{ // Char "M" 
		'M', 		// This char
		13,18, 		// Width and height of the image
		1,3,11,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		4,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1056), // Data offset
	},
	{ // Char "N" 
		'N', 		// This char
		11,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1104), // Data offset
	},
	{ // Char "O" 
		'O', 		// This char
		12,18, 		// Width and height of the image
		1,3,11,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1140), // Data offset
	},
	{ // Char "P" 
		'P', 		// This char
		10,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1176), // Data offset
	},
	{ // Char "Q" 
		'Q', 		// This char
		12,18, 		// Width and height of the image
		1,3,11,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1212), // Data offset
	},
	{ // Char "R" 
		'R', 		// This char
		11,18, 		// Width and height of the image
		1,3,10,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1251), // Data offset
	},
	{ // Char "S" 
		'S', 		// This char
		10,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1287), // Data offset
	},
	{ // Char "T" 
		'T', 		// This char
		9,18, 		// Width and height of the image
		0,3,8,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1323), // Data offset
	},
	{ // Char "U" 
		'U', 		// This char
		11,18, 		// Width and height of the image
		1,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1359), // Data offset
	},
	{ // Char "V" 
		'V', 		// This char
		10,18, 		// Width and height of the image
		0,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1395), // Data offset
	},
	{ // Char "W" 
		'W', 		// This char
		15,18, 		// Width and height of the image
		0,3,14,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		4,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1431), // Data offset
	},
	{ // Char "X" 
		'X', 		// This char
		10,18, 		// Width and height of the image
		0,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1479), // Data offset
	},
	{ // Char "Y" 
		'Y', 		// This char
		10,18, 		// Width and height of the image
		0,3,9,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1515), // Data offset
	},
	{ // Char "Z" 
		'Z', 		// This char
		9,18, 		// Width and height of the image
		0,3,8,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1551), // Data offset
	},
	{ // Char "[" 
		'[', 		// This char
		4,18, 		// Width and height of the image
		1,3,3,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1587), // Data offset
	},
	{ // Char "\" 
		'\\', 		// This char
		4,18, 		// Width and height of the image
		0,3,3,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1602), // Data offset
	},
	{ // Char "]" 
		']', 		// This char
		4,18, 		// Width and height of the image
		0,3,3,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1614), // Data offset
	},
	{ // Char "^" 
		'^', 		// This char
		7,18, 		// Width and height of the image
		0,3,6,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,6, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1629), // Data offset
	},
	{ // Char "_" 
		'_', 		// This char
		8,18, 		// Width and height of the image
		0,17,7,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1641), // Data offset
	},
	{ // Char "`" 
		'`', 		// This char
		5,18, 		// Width and height of the image
		1,3,2,4, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1643), // Data offset
	},
	{ // Char "a" 
		'a', 		// This char
		8,18, 		// Width and height of the image
		1,6,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1647), // Data offset
	},
	{ // Char "b" 
		'b', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1665), // Data offset
	},
	{ // Char "c" 
		'c', 		// This char
		8,18, 		// Width and height of the image
		1,6,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1689), // Data offset
	},
	{ // Char "d" 
		'd', 		// This char
		8,18, 		// Width and height of the image
		0,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1707), // Data offset
	},
	{ // Char "e" 
		'e', 		// This char
		8,18, 		// Width and height of the image
		1,6,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1731), // Data offset
	},
	{ // Char "f" 
		'f', 		// This char
		4,18, 		// Width and height of the image
		0,3,3,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1749), // Data offset
	},
	{ // Char "g" 
		'g', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1761), // Data offset
	},
	{ // Char "h" 
		'h', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1785), // Data offset
	},
	{ // Char "i" 
		'i', 		// This char
		3,18, 		// Width and height of the image
		1,3,2,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1809), // Data offset
	},
	{ // Char "j" 
		'j', 		// This char
		3,18, 		// Width and height of the image
		0,3,2,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1821), // Data offset
	},
	{ // Char "k" 
		'k', 		// This char
		8,18, 		// Width and height of the image
		1,3,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1836), // Data offset
	},
	{ // Char "l" 
		'l', 		// This char
		3,18, 		// Width and height of the image
		1,3,2,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1860), // Data offset
	},
	{ // Char "m" 
		'm', 		// This char
		13,18, 		// Width and height of the image
		1,6,11,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		4,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1872), // Data offset
	},
	{ // Char "n" 
		'n', 		// This char
		8,18, 		// Width and height of the image
		1,6,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1908), // Data offset
	},
	{ // Char "o" 
		'o', 		// This char
		8,18, 		// Width and height of the image
		1,6,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1926), // Data offset
	},
	{ // Char "p" 
		'p', 		// This char
		8,18, 		// Width and height of the image
		1,6,7,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1944), // Data offset
	},
	{ // Char "q" 
		'q', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1968), // Data offset
	},
	{ // Char "r" 
		'r', 		// This char
		5,18, 		// Width and height of the image
		1,6,4,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+1992), // Data offset
	},
	{ // Char "s" 
		's', 		// This char
		8,18, 		// Width and height of the image
		1,6,6,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+2010), // Data offset
	},
	{ // Char "t" 
		't', 		// This char
		4,18, 		// Width and height of the image
		0,3,3,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+2028), // Data offset
	},
	{ // Char "u" 
		'u', 		// This char
		8,18, 		// Width and height of the image
		1,6,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+2040), // Data offset
	},
	{ // Char "v" 
		'v', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+2058), // Data offset
	},
	{ // Char "w" 
		'w', 		// This char
		11,18, 		// Width and height of the image
		0,6,10,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+2076), // Data offset
	},
	{ // Char "x" 
		'x', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+2103), // Data offset
	},
	{ // Char "y" 
		'y', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+2121), // Data offset
	},
	{ // Char "z" 
		'z', 		// This char
		8,18, 		// Width and height of the image
		0,6,7,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+2145), // Data offset
	},
	{ // Char "{" 
		'{', 		// This char
		5,18, 		// Width and height of the image
		0,3,4,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+2163), // Data offset
	},
	{ // Char "|" 
		'|', 		// This char
		4,18, 		// Width and height of the image
		1,3,2,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+2193), // Data offset
	},
	{ // Char "}" 
		'}', 		// This char
		5,18, 		// Width and height of the image
		0,3,4,17, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,15, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+2208), // Data offset
	},
	{ // Char "~" 
		'~', 		// This char
		9,18, 		// Width and height of the image
		1,8,8,9, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_16_2_Pixels+2238), // Data offset
	},
};

// Font data for Arial_16_2 
const uint8_t Arial_16_2_Pixels[] = {
	// Char "!" offset 0
	0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x00,0x2C,
	// Char """ offset 12
	0x32,0xC0,0x32,0xC0,0x30,0xC0,0x30,0x80,
	// Char "#" offset 20
	0x03,0x03,0x03,0x03,0x02,0x02,0x0A,0x08,0xFF,0xFF,0x0C,0x0C,0x0C,0x08,0x08,0x28,0xFF,0xFF,0x20,0x30,0x30,0x30,0x30,0x20,
	// Char "$" offset 44
	0x00,0xC0,0x0F,0xF0,0x2C,0xCC,0x30,0xCA,0x30,0xC0,0x3C,0xC0,0x0F,0xE0,0x00,0xFC,0x00,0xCB,0x00,0xC3,0x30,0xCB,0x3C,0xCE,0x0F,0xF8,0x00,0xC0,
	// Char "%" offset 72
	0x0F,0xC0,0x28,0x00,0x38,0xA0,0x30,0x00,0x30,0xB0,0x80,0x00,0x30,0xB0,0xC0,0x00,0x38,0xA2,0x00,0x00,0x0F,0xC3,0x00,0x00,0x00,0x08,0x3F,0x00,0x00,0x08,0xB0,0xC0,0x00,0x30,0xE0,0xC0,0x00,0x20,0xE0,0xC0,0x00,0xC0,0xB0,0xC0,0x02,0x80,0x3F,0x00,
	// Char "&" offset 120
	0x02,0xF8,0x00,0x0B,0x0E,0x00,0x0E,0x0E,0x00,0x0B,0x0E,0x00,0x03,0xBC,0x00,0x02,0xE0,0x00,0x0F,0xB0,0x00,0x38,0x3C,0xE0,0x30,0x0F,0xC0,0x30,0x03,0x80,0x2C,0x0F,0xE0,0x0B,0xF8,0x30,
	// Char "'" offset 156
	0x30,0x30,0x30,0x30,
	// Char "(" offset 160
	0x02,0x80,0x03,0x00,0x0E,0x00,0x0C,0x00,0x2C,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x2C,0x00,0x0C,0x00,0x0E,0x00,0x03,0x00,0x02,0x80,
	// Char ")" offset 190
	0x30,0x00,0x0C,0x00,0x0A,0x00,0x03,0x00,0x03,0x00,0x03,0x80,0x02,0x80,0x02,0xC0,0x02,0x80,0x03,0x80,0x03,0x00,0x03,0x00,0x0A,0x00,0x0C,0x00,0x30,0x00,
	// Char "*" offset 220
	0x03,0x00,0x3A,0xE0,0x0B,0x00,0x0E,0x80,0x28,0xC0,
	// Char "+" offset 230
	0x00,0xC0,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,0x3F,0xFF,0x80,0x00,0xC0,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,
	// Char "," offset 251
	0x2C,0x08,0x08,0x20,
	// Char "-" offset 255
	0xBF,0xC0,
	// Char "." offset 257
	0x2C,
	// Char "/" offset 258
	0x03,0x03,0x02,0x08,0x0C,0x0C,0x28,0x30,0x30,0x20,0x80,0xC0,
	// Char "0" offset 270
	0x03,0xF0,0x0C,0x0C,0x38,0x0A,0x30,0x03,0x30,0x03,0x30,0x03,0x30,0x03,0x30,0x03,0x30,0x03,0x38,0x0A,0x0C,0x0C,0x03,0xF0,
	// Char "1" offset 294
	0x00,0x30,0x00,0xF0,0x03,0xF0,0x0E,0xB0,0x00,0xB0,0x00,0xB0,0x00,0xB0,0x00,0xB0,0x00,0xB0,0x00,0xB0,0x00,0xB0,0x00,0xB0,
	// Char "2" offset 318
	0x0F,0xF0,0x3C,0x0C,0x30,0x0B,0x00,0x0B,0x00,0x0E,0x00,0x0C,0x00,0x38,0x00,0xE0,0x03,0x80,0x0E,0x00,0x38,0x00,0xBF,0xFF,
	// Char "3" offset 342
	0x0B,0xF0,0x2C,0x2C,0x38,0x0E,0x00,0x0E,0x00,0x2C,0x00,0xF8,0x00,0x0E,0x00,0x03,0x00,0x03,0x30,0x0B,0x2C,0x0E,0x0B,0xF0,
	// Char "4" offset 366
	0x00,0x2C,0x00,0x3C,0x00,0xFC,0x02,0xAC,0x03,0x2C,0x0E,0x2C,0x2C,0x2C,0x30,0x2C,0xBF,0xFF,0x00,0x2C,0x00,0x2C,0x00,0x2C,
	// Char "5" offset 390
	0x0F,0xFE,0x0C,0x00,0x0C,0x00,0x28,0x00,0x3F,0xF8,0x3C,0x0E,0x00,0x0B,0x00,0x03,0x00,0x03,0x30,0x0B,0x2C,0x0C,0x0B,0xF0,
	// Char "6" offset 414
	0x03,0xF8,0x0C,0x0E,0x38,0x0B,0x30,0x00,0x33,0xF8,0xBC,0x0E,0xB0,0x0B,0xB0,0x03,0x30,0x03,0x30,0x0B,0x2C,0x0E,0x03,0xF0,
	// Char "7" offset 438
	0x3F,0xFF,0x00,0x0E,0x00,0x2C,0x00,0x30,0x00,0xB0,0x00,0xE0,0x02,0xC0,0x03,0x80,0x03,0x80,0x03,0x00,0x03,0x00,0x0B,0x00,
	// Char "8" offset 462
	0x0B,0xF0,0x0C,0x0C,0x38,0x0A,0x38,0x0A,0x0C,0x0C,0x03,0xF0,0x2C,0x0E,0x30,0x0B,0x30,0x03,0x30,0x03,0x2C,0x0E,0x0B,0xF8,
	// Char "9" offset 486
	0x0B,0xF0,0x2C,0x0C,0x38,0x0B,0x30,0x03,0x30,0x03,0x38,0x0B,0x2C,0x0F,0x0B,0xF3,0x00,0x0B,0x38,0x0E,0x2C,0x2C,0x0B,0xF0,
	// Char ":" offset 510
	0x2C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,
	// Char ";" offset 519
	0x2C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x2C,0x08,0x08,0x20,
	// Char "<" offset 531
	0x00,0x03,0x80,0x00,0x3C,0x00,0x0F,0xC0,0x00,0x30,0x00,0x00,0x0F,0xC0,0x00,0x00,0x3C,0x00,0x00,0x03,0x80,
	// Char "=" offset 552
	0x3F,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xFF,0x80,
	// Char ">" offset 567
	0x30,0x00,0x00,0x0F,0x80,0x00,0x00,0x3C,0x00,0x00,0x03,0x80,0x00,0x3C,0x00,0x0F,0x80,0x00,0x30,0x00,0x00,
	// Char "?" offset 588
	0x0B,0xF8,0x2C,0x0E,0x38,0x0B,0x30,0x03,0x00,0x0B,0x00,0x0E,0x00,0x3C,0x00,0xF0,0x00,0xC0,0x00,0xC0,0x00,0x00,0x00,0xC0,
	// Char "@" offset 612
	0x00,0x0F,0xFC,0x00,0x00,0xF0,0x03,0xC0,0x03,0x00,0x00,0xB0,0x0E,0x0B,0xCB,0x28,0x0C,0x3C,0x3E,0x0C,0x38,0xB0,0x0E,0x0C,0x30,0xE0,0x0C,0x0C,0x30,0xC0,0x0C,0x0C,0x30,0xC0,0x2C,0x0C,0x30,0xE0,0x38,0x30,0x28,0xB0,0xF8,0xE0,0x0C,0x3F,0x2F,0x00,0x0B,0x00,0x00,0x0E,0x02,0xE0,0x00,0xF0,0x00,0x2F,0xFF,0x00,
	// Char "A" offset 672
	0x00,0xF0,0x00,0x00,0xEC,0x00,0x02,0xCC,0x00,0x03,0x8E,0x00,0x03,0x0B,0x00,0x0B,0x03,0x00,0x0C,0x03,0x80,0x2F,0xFF,0xC0,0x38,0x00,0xC0,0x30,0x00,0xF0,0xB0,0x00,0xB0,0xE0,0x00,0x30,
	// Char "B" offset 708
	0x2F,0xFF,0x00,0x2C,0x02,0xC0,0x2C,0x00,0xC0,0x2C,0x00,0xC0,0x2C,0x02,0x80,0x2F,0xFF,0x80,0x2C,0x02,0xC0,0x2C,0x00,0xE0,0x2C,0x00,0xE0,0x2C,0x00,0xE0,0x2C,0x02,0xC0,0x2F,0xFF,0x00,
	// Char "C" offset 744
	0x00,0xFF,0x80,0x0B,0x00,0xF0,0x0C,0x00,0x38,0x2C,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x00,0x00,0x2C,0x00,0x2C,0x0C,0x00,0x38,0x0B,0x00,0xF0,0x00,0xFF,0x80,
	// Char "D" offset 780
	0x2F,0xFF,0x00,0x2C,0x02,0xC0,0x2C,0x00,0xB0,0x2C,0x00,0x30,0x2C,0x00,0x38,0x2C,0x00,0x38,0x2C,0x00,0x38,0x2C,0x00,0x38,0x2C,0x00,0x30,0x2C,0x00,0xB0,0x2C,0x02,0xC0,0x2F,0xFF,0x00,
	// Char "E" offset 816
	0x2F,0xFF,0xE0,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2F,0xFF,0xC0,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2F,0xFF,0xF0,
	// Char "F" offset 852
	0x2F,0xFF,0xC0,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2F,0xFF,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,
	// Char "G" offset 888
	0x00,0xFF,0xC0,0x03,0x80,0xB8,0x0C,0x00,0x2C,0x2C,0x00,0x08,0x38,0x00,0x00,0x38,0x00,0x00,0x38,0x03,0xFE,0x38,0x00,0x0E,0x2C,0x00,0x0E,0x0C,0x00,0x0E,0x03,0x80,0x3C,0x00,0xFF,0xC0,
	// Char "H" offset 924
	0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2F,0xFF,0xF0,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,
	// Char "I" offset 960
	0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,
	// Char "J" offset 972
	0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0xB0,0x38,0x30,0x38,0x38,0x30,0x0F,0xC0,
	// Char "K" offset 996
	0x2C,0x00,0xF0,0x2C,0x03,0xC0,0x2C,0x0F,0x00,0x2C,0x3C,0x00,0x2C,0xB0,0x00,0x2E,0xF0,0x00,0x2F,0x38,0x00,0x2C,0x2C,0x00,0x2C,0x0F,0x00,0x2C,0x03,0xC0,0x2C,0x00,0xE0,0x2C,0x00,0xB0,
	// Char "L" offset 1032
	0x2C,0x00,0x2C,0x00,0x2C,0x00,0x2C,0x00,0x2C,0x00,0x2C,0x00,0x2C,0x00,0x2C,0x00,0x2C,0x00,0x2C,0x00,0x2C,0x00,0x2F,0xFF,
	// Char "M" offset 1056
	0x3C,0x00,0x0B,0x00,0x3F,0x00,0x0F,0x00,0x3B,0x00,0x3B,0x00,0x3A,0x80,0x3B,0x00,0x38,0xC0,0xAB,0x00,0x38,0xC0,0xCB,0x00,0x38,0xE0,0xCB,0x00,0x38,0xB2,0x8B,0x00,0x38,0x33,0x0B,0x00,0x38,0x3F,0x0B,0x00,0x38,0x2E,0x0B,0x00,0x38,0x0C,0x0B,0x00,
	// Char "N" offset 1104
	0x2C,0x00,0x30,0x2F,0x00,0x30,0x2F,0x80,0x30,0x2E,0xC0,0x30,0x2C,0xE0,0x30,0x2C,0xB0,0x30,0x2C,0x3C,0x30,0x2C,0x0E,0x30,0x2C,0x0B,0x30,0x2C,0x03,0xF0,0x2C,0x00,0xF0,0x2C,0x00,0xB0,
	// Char "O" offset 1140
	0x00,0xFF,0x80,0x03,0x80,0xF0,0x0C,0x00,0x2C,0x2C,0x00,0x0C,0x38,0x00,0x0E,0x38,0x00,0x0E,0x38,0x00,0x0E,0x38,0x00,0x0E,0x2C,0x00,0x0C,0x0C,0x00,0x2C,0x03,0x80,0xF0,0x00,0xFF,0x80,
	// Char "P" offset 1176
	0x2F,0xFF,0x80,0x2C,0x00,0xE0,0x2C,0x00,0xB0,0x2C,0x00,0xB0,0x2C,0x00,0xB0,0x2C,0x00,0xE0,0x2F,0xFF,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,0x2C,0x00,0x00,
	// Char "Q" offset 1212
	0x00,0xFF,0x80,0x0B,0x00,0xF0,0x2C,0x00,0x38,0x38,0x00,0x0C,0x30,0x00,0x0C,0x30,0x00,0x0E,0x30,0x00,0x0E,0x30,0x00,0x0E,0x38,0x00,0x0C,0x0C,0x0B,0x3C,0x0B,0x02,0xF0,0x00,0xFF,0xFC,0x00,0x00,0x02,
	// Char "R" offset 1251
	0x2F,0xFF,0xC0,0x2C,0x00,0xE0,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0xE0,0x2F,0xFF,0x80,0x2C,0x0F,0x00,0x2C,0x03,0xC0,0x2C,0x00,0xE0,0x2C,0x00,0xB0,0x2C,0x00,0x3C,
	// Char "S" offset 1287
	0x03,0xFF,0x00,0x0C,0x02,0xC0,0x28,0x00,0xE0,0x38,0x00,0x00,0x2F,0x00,0x00,0x0B,0xFE,0x00,0x00,0x3F,0xC0,0x00,0x00,0xE0,0x00,0x00,0xB0,0x30,0x00,0xA0,0x2C,0x00,0xC0,0x03,0xFF,0x00,
	// Char "T" offset 1323
	0xBF,0xFF,0xC0,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,0x00,0xE0,0x00,
	// Char "U" offset 1359
	0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x2C,0x00,0x30,0x0C,0x00,0xB0,0x0F,0x00,0xC0,0x02,0xFF,0x00,
	// Char "V" offset 1395
	0xE0,0x00,0x30,0xB0,0x00,0xB0,0x38,0x00,0xF0,0x3C,0x00,0xE0,0x2C,0x02,0xC0,0x0E,0x03,0x80,0x0B,0x03,0x00,0x03,0x0B,0x00,0x03,0x8E,0x00,0x00,0xCC,0x00,0x00,0xF8,0x00,0x00,0xB0,0x00,
	// Char "W" offset 1431
	0xB0,0x03,0x80,0x2C,0xB0,0x0B,0xC0,0x38,0x30,0x0C,0xC0,0x38,0x38,0x0C,0xE0,0x30,0x2C,0x0C,0xB0,0xB0,0x0C,0x28,0x30,0xA0,0x0C,0x30,0x30,0xC0,0x0E,0x30,0x28,0xC0,0x0A,0xB0,0x2C,0xC0,0x03,0xA0,0x0E,0x80,0x03,0xC0,0x0F,0x00,0x03,0xC0,0x0B,0x00,
	// Char "X" offset 1479
	0x38,0x00,0xF0,0x2C,0x02,0xC0,0x0F,0x03,0x80,0x03,0x8E,0x00,0x02,0xFC,0x00,0x00,0xF0,0x00,0x00,0xF8,0x00,0x03,0xEC,0x00,0x0B,0x0B,0x00,0x0E,0x03,0x80,0x3C,0x00,0xE0,0xF0,0x00,0xB0,
	// Char "Y" offset 1515
	0xF0,0x00,0xB0,0x3C,0x00,0xC0,0x0E,0x03,0xC0,0x0B,0x0B,0x00,0x03,0x8E,0x00,0x00,0xFC,0x00,0x00,0xF0,0x00,0x00,0xB0,0x00,0x00,0xB0,0x00,0x00,0xB0,0x00,0x00,0xB0,0x00,0x00,0xB0,0x00,
	// Char "Z" offset 1551
	0x3F,0xFF,0xC0,0x00,0x03,0xC0,0x00,0x0B,0x00,0x00,0x0C,0x00,0x00,0x38,0x00,0x00,0xF0,0x00,0x02,0xC0,0x00,0x03,0x80,0x00,0x0F,0x00,0x00,0x2C,0x00,0x00,0x30,0x00,0x00,0xBF,0xFF,0xC0,
	// Char "[" offset 1587
	0x3F,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x3F,
	// Char "\" offset 1602
	0xA0,0x30,0x30,0x20,0x08,0x0C,0x0C,0x0A,0x02,0x03,0x02,0x02,
	// Char "]" offset 1614
	0xBE,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0x0E,0xBE,
	// Char "^" offset 1629
	0x03,0x00,0x0A,0xC0,0x0C,0xC0,0x28,0xA0,0x30,0x30,0xB0,0x38,
	// Char "_" offset 1641
	0xFF,0xFF,
	// Char "`" offset 1643
	0x3C,0x00,0x0C,0x00,
	// Char "a" offset 1647
	0x0B,0xFC,0x2C,0x0E,0x30,0x0B,0x00,0xFF,0x2F,0xCB,0x30,0x0B,0x30,0x0F,0x38,0x2F,0x0F,0xEB,
	// Char "b" offset 1665
	0x38,0x00,0x38,0x00,0x38,0x00,0x3B,0xF8,0x3C,0x0E,0x38,0x0B,0x30,0x03,0x30,0x03,0x30,0x03,0x38,0x0B,0x3C,0x0E,0x33,0xF0,
	// Char "c" offset 1689
	0x0B,0xF8,0x2C,0x0E,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x2C,0x0E,0x0B,0xF8,
	// Char "d" offset 1707
	0x00,0x0B,0x00,0x0B,0x00,0x0B,0x0B,0xFB,0x2C,0x2F,0x30,0x0F,0x30,0x0B,0xB0,0x0B,0x30,0x0B,0x30,0x0F,0x2C,0x2F,0x0B,0xFB,
	// Char "e" offset 1731
	0x0B,0xF0,0x2C,0x0E,0x38,0x0B,0x30,0x03,0x3F,0xFF,0x30,0x00,0x30,0x03,0x2C,0x0E,0x0B,0xF8,
	// Char "f" offset 1749
	0x0F,0x2C,0x2C,0xBF,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,
	// Char "g" offset 1761
	0x0B,0xFB,0x2C,0x2F,0x30,0x0F,0xB0,0x0B,0xB0,0x0B,0xB0,0x0B,0x30,0x0F,0x2C,0x2E,0x0B,0xEA,0x00,0x0E,0x30,0x0C,0x2F,0xF0,
	// Char "h" offset 1785
	0x38,0x00,0x38,0x00,0x38,0x00,0x3B,0xFC,0x3C,0x0E,0x38,0x0B,0x38,0x0B,0x38,0x0B,0x38,0x0B,0x38,0x0B,0x38,0x0B,0x38,0x0B,
	// Char "i" offset 1809
	0x38,0x00,0x00,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,
	// Char "j" offset 1821
	0x38,0x00,0x00,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x30,0xF0,
	// Char "k" offset 1836
	0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x2E,0x38,0xB0,0x38,0xC0,0x3F,0x80,0x3F,0xC0,0x38,0xF0,0x38,0x30,0x38,0x2C,0x38,0x0E,
	// Char "l" offset 1860
	0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,
	// Char "m" offset 1872
	0x33,0xF8,0xFC,0x00,0x3C,0x2F,0x0B,0x00,0x38,0x0E,0x03,0x00,0x38,0x0C,0x03,0x00,0x38,0x0C,0x03,0x00,0x38,0x0C,0x03,0x00,0x38,0x0C,0x03,0x00,0x38,0x0C,0x03,0x00,0x38,0x0C,0x03,0x00,
	// Char "n" offset 1908
	0x3B,0xFC,0x3C,0x0E,0x38,0x0B,0x38,0x0B,0x38,0x0B,0x38,0x0B,0x38,0x0B,0x38,0x0B,0x38,0x0B,
	// Char "o" offset 1926
	0x0B,0xF8,0x2C,0x0E,0x30,0x0B,0x30,0x03,0x30,0x03,0x30,0x03,0x30,0x0B,0x2C,0x0E,0x0B,0xF0,
	// Char "p" offset 1944
	0x33,0xF8,0x3C,0x0E,0x38,0x0B,0x30,0x03,0x30,0x03,0x30,0x03,0x38,0x0B,0x3C,0x0C,0x3B,0xF0,0x38,0x00,0x38,0x00,0x38,0x00,
	// Char "q" offset 1968
	0x0B,0xEB,0x2C,0x2F,0x30,0x0F,0x30,0x0B,0xB0,0x0B,0x30,0x0B,0x30,0x0F,0x2C,0x2F,0x0B,0xFB,0x00,0x0B,0x00,0x0B,0x00,0x0B,
	// Char "r" offset 1992
	0x3B,0xC0,0x3C,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,0x38,0x00,
	// Char "s" offset 2010
	0x0F,0xF0,0x30,0x2C,0x30,0x00,0x3E,0x00,0x0F,0xF0,0x00,0x3C,0x00,0x0C,0x30,0x2C,0x0F,0xF0,
	// Char "t" offset 2028
	0x0C,0x2C,0x2C,0xFF,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x2C,0x0F,
	// Char "u" offset 2040
	0x38,0x0B,0x38,0x0B,0x38,0x0B,0x38,0x0B,0x38,0x0B,0x38,0x0B,0x38,0x0F,0x2C,0x2F,0x0F,0xEB,
	// Char "v" offset 2058
	0xB0,0x0A,0x30,0x0C,0x38,0x0C,0x2C,0x38,0x0C,0x30,0x0E,0xB0,0x0B,0xE0,0x03,0xC0,0x03,0xC0,
	// Char "w" offset 2076
	0xE0,0x38,0x0C,0xB0,0x3C,0x0C,0x30,0xBC,0x28,0x30,0x8C,0x30,0x28,0xCA,0x30,0x2C,0xCB,0xB0,0x0E,0x83,0xE0,0x0F,0x03,0xC0,0x0B,0x03,0xC0,
	// Char "x" offset 2103
	0xB0,0x0E,0x2C,0x38,0x0E,0xB0,0x0B,0xC0,0x03,0xC0,0x0B,0xE0,0x0C,0xB0,0x38,0x3C,0xB0,0x0E,
	// Char "y" offset 2121
	0xB0,0x0E,0x30,0x0C,0x38,0x2C,0x2C,0x38,0x0C,0x30,0x0A,0xB0,0x03,0xA0,0x03,0xC0,0x02,0xC0,0x03,0x80,0x03,0x00,0x3C,0x00,
	// Char "z" offset 2145
	0x3F,0xFC,0x00,0x3C,0x00,0xB0,0x00,0xC0,0x03,0x80,0x0F,0x00,0x2C,0x00,0x30,0x00,0xFF,0xFE,
	// Char "{" offset 2163
	0x03,0xC0,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0C,0x00,0x0C,0x00,0x2C,0x00,0xA0,0x00,0x2C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0E,0x00,0x03,0xC0,
	// Char "|" offset 2193
	0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,0x28,
	// Char "}" offset 2208
	0xB8,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0C,0x00,0x0E,0x00,0x0B,0x00,0x00,0xC0,0x0B,0x00,0x0E,0x00,0x0E,0x00,0x0E,0x00,0x0C,0x00,0x0C,0x00,0xB8,0x00,
	// Char "~" offset 2238
	0x3F,0xC0,0x80,0x00,0xBF,0x00,

};
