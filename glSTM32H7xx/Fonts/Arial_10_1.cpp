
#include "glFont.h"

extern const uint8_t Arial_10_1_Pixels[];

// Font index for Arial_10_1
const FontItem Arial_10_1[] = {
	{ // Char "!" 
		'!', 		// This char
		2,11, 		// Width and height of the image
		1,2,1,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+0), // Data offset
	},
	{ // Char """ 
		'"', 		// This char
		3,11, 		// Width and height of the image
		0,2,2,4, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+7), // Data offset
	},
	{ // Char "#" 
		'#', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+10), // Data offset
	},
	{ // Char "$" 
		'$', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,9, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+17), // Data offset
	},
	{ // Char "%" 
		'%', 		// This char
		8,11, 		// Width and height of the image
		1,2,7,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+25), // Data offset
	},
	{ // Char "&" 
		'&', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+32), // Data offset
	},
	{ // Char "'" 
		'\'', 		// This char
		1,11, 		// Width and height of the image
		0,2,0,4, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+39), // Data offset
	},
	{ // Char "(" 
		'(', 		// This char
		3,11, 		// Width and height of the image
		1,2,2,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+42), // Data offset
	},
	{ // Char ")" 
		')', 		// This char
		3,11, 		// Width and height of the image
		1,2,2,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+51), // Data offset
	},
	{ // Char "*" 
		'*', 		// This char
		3,11, 		// Width and height of the image
		0,3,2,4, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+60), // Data offset
	},
	{ // Char "+" 
		'+', 		// This char
		5,11, 		// Width and height of the image
		0,3,4,7, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+62), // Data offset
	},
	{ // Char "," 
		',', 		// This char
		2,11, 		// Width and height of the image
		1,8,1,9, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+67), // Data offset
	},
	{ // Char "-" 
		'-', 		// This char
		3,11, 		// Width and height of the image
		0,6,2,6, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+69), // Data offset
	},
	{ // Char "." 
		'.', 		// This char
		2,11, 		// Width and height of the image
		1,8,1,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+70), // Data offset
	},
	{ // Char "/" 
		'/', 		// This char
		2,11, 		// Width and height of the image
		0,4,1,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+71), // Data offset
	},
	{ // Char "0" 
		'0', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+76), // Data offset
	},
	{ // Char "1" 
		'1', 		// This char
		5,11, 		// Width and height of the image
		1,2,3,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+83), // Data offset
	},
	{ // Char "2" 
		'2', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+90), // Data offset
	},
	{ // Char "3" 
		'3', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+97), // Data offset
	},
	{ // Char "4" 
		'4', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+104), // Data offset
	},
	{ // Char "5" 
		'5', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+111), // Data offset
	},
	{ // Char "6" 
		'6', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+118), // Data offset
	},
	{ // Char "7" 
		'7', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+125), // Data offset
	},
	{ // Char "8" 
		'8', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+132), // Data offset
	},
	{ // Char "9" 
		'9', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+139), // Data offset
	},
	{ // Char ":" 
		':', 		// This char
		2,11, 		// Width and height of the image
		1,4,1,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+146), // Data offset
	},
	{ // Char ";" 
		';', 		// This char
		2,11, 		// Width and height of the image
		1,4,1,9, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,6, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+151), // Data offset
	},
	{ // Char "<" 
		'<', 		// This char
		5,11, 		// Width and height of the image
		0,3,4,7, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+157), // Data offset
	},
	{ // Char "=" 
		'=', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,6, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+162), // Data offset
	},
	{ // Char ">" 
		'>', 		// This char
		5,11, 		// Width and height of the image
		0,3,4,7, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+165), // Data offset
	},
	{ // Char "?" 
		'?', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+170), // Data offset
	},
	{ // Char "@" 
		'@', 		// This char
		10,11, 		// Width and height of the image
		0,2,9,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+177), // Data offset
	},
	{ // Char "A" 
		'A', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+195), // Data offset
	},
	{ // Char "B" 
		'B', 		// This char
		6,11, 		// Width and height of the image
		1,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+202), // Data offset
	},
	{ // Char "C" 
		'C', 		// This char
		7,11, 		// Width and height of the image
		0,2,6,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+209), // Data offset
	},
	{ // Char "D" 
		'D', 		// This char
		7,11, 		// Width and height of the image
		1,2,6,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+216), // Data offset
	},
	{ // Char "E" 
		'E', 		// This char
		6,11, 		// Width and height of the image
		1,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+223), // Data offset
	},
	{ // Char "F" 
		'F', 		// This char
		6,11, 		// Width and height of the image
		1,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+230), // Data offset
	},
	{ // Char "G" 
		'G', 		// This char
		7,11, 		// Width and height of the image
		0,2,6,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+237), // Data offset
	},
	{ // Char "H" 
		'H', 		// This char
		7,11, 		// Width and height of the image
		1,2,6,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+244), // Data offset
	},
	{ // Char "I" 
		'I', 		// This char
		2,11, 		// Width and height of the image
		1,2,1,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+251), // Data offset
	},
	{ // Char "J" 
		'J', 		// This char
		5,11, 		// Width and height of the image
		0,2,3,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+258), // Data offset
	},
	{ // Char "K" 
		'K', 		// This char
		6,11, 		// Width and height of the image
		1,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+265), // Data offset
	},
	{ // Char "L" 
		'L', 		// This char
		5,11, 		// Width and height of the image
		1,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+272), // Data offset
	},
	{ // Char "M" 
		'M', 		// This char
		8,11, 		// Width and height of the image
		1,2,7,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+279), // Data offset
	},
	{ // Char "N" 
		'N', 		// This char
		7,11, 		// Width and height of the image
		1,2,6,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+286), // Data offset
	},
	{ // Char "O" 
		'O', 		// This char
		7,11, 		// Width and height of the image
		0,2,6,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+293), // Data offset
	},
	{ // Char "P" 
		'P', 		// This char
		6,11, 		// Width and height of the image
		1,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+300), // Data offset
	},
	{ // Char "Q" 
		'Q', 		// This char
		7,11, 		// Width and height of the image
		0,2,6,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+307), // Data offset
	},
	{ // Char "R" 
		'R', 		// This char
		7,11, 		// Width and height of the image
		1,2,6,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+314), // Data offset
	},
	{ // Char "S" 
		'S', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+321), // Data offset
	},
	{ // Char "T" 
		'T', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+328), // Data offset
	},
	{ // Char "U" 
		'U', 		// This char
		7,11, 		// Width and height of the image
		1,2,6,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+335), // Data offset
	},
	{ // Char "V" 
		'V', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+342), // Data offset
	},
	{ // Char "W" 
		'W', 		// This char
		9,11, 		// Width and height of the image
		0,2,8,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+349), // Data offset
	},
	{ // Char "X" 
		'X', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+363), // Data offset
	},
	{ // Char "Y" 
		'Y', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+370), // Data offset
	},
	{ // Char "Z" 
		'Z', 		// This char
		6,11, 		// Width and height of the image
		0,2,5,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+377), // Data offset
	},
	{ // Char "[" 
		'[', 		// This char
		2,11, 		// Width and height of the image
		1,2,1,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+384), // Data offset
	},
	{ // Char "\" 
		'\\', 		// This char
		2,11, 		// Width and height of the image
		0,2,1,6, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+393), // Data offset
	},
	{ // Char "]" 
		']', 		// This char
		2,11, 		// Width and height of the image
		0,2,1,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+398), // Data offset
	},
	{ // Char "^" 
		'^', 		// This char
		4,11, 		// Width and height of the image
		0,2,3,5, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+407), // Data offset
	},
	{ // Char "_" 
		'_', 		// This char
		5,11, 		// Width and height of the image
		0,10,4,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+411), // Data offset
	},
	{ // Char "`" 
		'`', 		// This char
		3,11, 		// Width and height of the image
		1,2,1,3, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+412), // Data offset
	},
	{ // Char "a" 
		'a', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+414), // Data offset
	},
	{ // Char "b" 
		'b', 		// This char
		5,11, 		// Width and height of the image
		1,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+419), // Data offset
	},
	{ // Char "c" 
		'c', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+426), // Data offset
	},
	{ // Char "d" 
		'd', 		// This char
		5,11, 		// Width and height of the image
		0,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+431), // Data offset
	},
	{ // Char "e" 
		'e', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+438), // Data offset
	},
	{ // Char "f" 
		'f', 		// This char
		2,11, 		// Width and height of the image
		0,2,1,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+443), // Data offset
	},
	{ // Char "g" 
		'g', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+450), // Data offset
	},
	{ // Char "h" 
		'h', 		// This char
		5,11, 		// Width and height of the image
		1,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+457), // Data offset
	},
	{ // Char "i" 
		'i', 		// This char
		2,11, 		// Width and height of the image
		1,2,1,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+464), // Data offset
	},
	{ // Char "j" 
		'j', 		// This char
		2,11, 		// Width and height of the image
		0,2,1,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+471), // Data offset
	},
	{ // Char "k" 
		'k', 		// This char
		5,11, 		// Width and height of the image
		1,2,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+480), // Data offset
	},
	{ // Char "l" 
		'l', 		// This char
		2,11, 		// Width and height of the image
		1,2,1,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+487), // Data offset
	},
	{ // Char "m" 
		'm', 		// This char
		8,11, 		// Width and height of the image
		1,4,7,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+494), // Data offset
	},
	{ // Char "n" 
		'n', 		// This char
		5,11, 		// Width and height of the image
		1,4,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+499), // Data offset
	},
	{ // Char "o" 
		'o', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+504), // Data offset
	},
	{ // Char "p" 
		'p', 		// This char
		5,11, 		// Width and height of the image
		1,4,4,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+509), // Data offset
	},
	{ // Char "q" 
		'q', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+516), // Data offset
	},
	{ // Char "r" 
		'r', 		// This char
		3,11, 		// Width and height of the image
		1,4,2,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+523), // Data offset
	},
	{ // Char "s" 
		's', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+528), // Data offset
	},
	{ // Char "t" 
		't', 		// This char
		2,11, 		// Width and height of the image
		0,2,1,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+533), // Data offset
	},
	{ // Char "u" 
		'u', 		// This char
		5,11, 		// Width and height of the image
		1,4,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+540), // Data offset
	},
	{ // Char "v" 
		'v', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+545), // Data offset
	},
	{ // Char "w" 
		'w', 		// This char
		7,11, 		// Width and height of the image
		0,4,6,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+550), // Data offset
	},
	{ // Char "x" 
		'x', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+555), // Data offset
	},
	{ // Char "y" 
		'y', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+560), // Data offset
	},
	{ // Char "z" 
		'z', 		// This char
		5,11, 		// Width and height of the image
		0,4,4,8, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+567), // Data offset
	},
	{ // Char "{" 
		'{', 		// This char
		3,11, 		// Width and height of the image
		0,2,2,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+572), // Data offset
	},
	{ // Char "|" 
		'|', 		// This char
		2,11, 		// Width and height of the image
		1,2,1,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+581), // Data offset
	},
	{ // Char "}" 
		'}', 		// This char
		3,11, 		// Width and height of the image
		0,2,2,10, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+590), // Data offset
	},
	{ // Char "~" 
		'~', 		// This char
		5,11, 		// Width and height of the image
		1,5,4,6, 	// Start and end coordinates of the image
		1, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_10_1_Pixels+599), // Data offset
	},
};

// Font data for Arial_10_1 
const uint8_t Arial_10_1_Pixels[] = {
	// Char "!" offset 0
	0x40,0x40,0x40,0x40,0x40,0x00,0x40,
	// Char """ offset 7
	0xA0,0xA0,0x20,
	// Char "#" offset 10
	0x28,0x08,0xF8,0x50,0xF8,0x50,0x90,
	// Char "$" offset 17
	0x70,0x68,0x60,0x38,0x28,0xE8,0x70,0x20,
	// Char "%" offset 25
	0x62,0x54,0x54,0x6F,0x1D,0x15,0x27,
	// Char "&" offset 32
	0x38,0x48,0x30,0x70,0x9C,0xC8,0x74,
	// Char "'" offset 39
	0x80,0x80,0x80,
	// Char "(" offset 42
	0x20,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x20,
	// Char ")" offset 51
	0x40,0x40,0x20,0x20,0x20,0x20,0x20,0x40,0x40,
	// Char "*" offset 60
	0xE0,0x60,
	// Char "+" offset 62
	0x30,0x30,0xF8,0x30,0x30,
	// Char "," offset 67
	0x40,0x40,
	// Char "-" offset 69
	0xE0,
	// Char "." offset 70
	0x40,
	// Char "/" offset 71
	0x40,0x40,0x40,0x80,0x80,
	// Char "0" offset 76
	0x70,0x48,0x88,0x88,0x88,0x48,0x70,
	// Char "1" offset 83
	0x10,0x30,0x50,0x10,0x10,0x10,0x10,
	// Char "2" offset 90
	0x70,0xC8,0x08,0x10,0x20,0x40,0xF8,
	// Char "3" offset 97
	0x70,0x48,0x08,0x30,0x08,0xC8,0x70,
	// Char "4" offset 104
	0x10,0x30,0x30,0x50,0xF8,0x10,0x10,
	// Char "5" offset 111
	0x78,0x40,0x70,0x48,0x08,0xC8,0x70,
	// Char "6" offset 118
	0x70,0x48,0xF0,0xC8,0x88,0x48,0x70,
	// Char "7" offset 125
	0xF8,0x08,0x10,0x20,0x20,0x20,0x20,
	// Char "8" offset 132
	0x70,0x48,0x48,0x30,0xC8,0xC8,0x70,
	// Char "9" offset 139
	0x70,0x48,0x88,0xC8,0x78,0x48,0x70,
	// Char ":" offset 146
	0x40,0x00,0x00,0x00,0x40,
	// Char ";" offset 151
	0x40,0x00,0x00,0x00,0x40,0x40,
	// Char "<" offset 157
	0x08,0x30,0xC0,0x30,0x08,
	// Char "=" offset 162
	0xF8,0x00,0xF8,
	// Char ">" offset 165
	0xC0,0x30,0x08,0x30,0xC0,
	// Char "?" offset 170
	0x78,0xC8,0x08,0x10,0x20,0x00,0x20,
	// Char "@" offset 177
	0x1F,0x00,0x21,0x80,0x4E,0x80,0x52,0x40,0xE2,0xC0,0x76,0x80,0x5F,0x00,0x60,0xC0,0x1F,0x00,
	// Char "A" offset 195
	0x10,0x30,0x28,0x48,0x7C,0xC4,0x84,
	// Char "B" offset 202
	0x78,0x44,0x44,0x7C,0x44,0x44,0x78,
	// Char "C" offset 209
	0x3C,0x46,0x40,0x80,0x40,0x46,0x3C,
	// Char "D" offset 216
	0x7C,0x44,0x42,0x42,0x42,0x44,0x78,
	// Char "E" offset 223
	0x7C,0x40,0x40,0x7C,0x40,0x40,0x7C,
	// Char "F" offset 230
	0x7C,0x40,0x40,0x78,0x40,0x40,0x40,
	// Char "G" offset 237
	0x3C,0x42,0x40,0xCE,0x42,0x42,0x3C,
	// Char "H" offset 244
	0x46,0x46,0x46,0x7E,0x46,0x46,0x46,
	// Char "I" offset 251
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "J" offset 258
	0x10,0x10,0x10,0x10,0x10,0x90,0x70,
	// Char "K" offset 265
	0x44,0x48,0x50,0x70,0x48,0x44,0x44,
	// Char "L" offset 272
	0x40,0x40,0x40,0x40,0x40,0x40,0x78,
	// Char "M" offset 279
	0x63,0x63,0x67,0x65,0x51,0x59,0x59,
	// Char "N" offset 286
	0x46,0x66,0x76,0x56,0x4E,0x4E,0x46,
	// Char "O" offset 293
	0x3C,0x46,0x42,0x82,0x42,0x46,0x3C,
	// Char "P" offset 300
	0x7C,0x44,0x44,0x7C,0x40,0x40,0x40,
	// Char "Q" offset 307
	0x3C,0x46,0xC2,0x82,0xC2,0x4A,0x3E,
	// Char "R" offset 314
	0x7C,0x44,0x44,0x7C,0x48,0x44,0x46,
	// Char "S" offset 321
	0x78,0x44,0x40,0x38,0x04,0xC4,0x78,
	// Char "T" offset 328
	0xFC,0x10,0x10,0x10,0x10,0x10,0x10,
	// Char "U" offset 335
	0x46,0x46,0x46,0x46,0x46,0x44,0x3C,
	// Char "V" offset 342
	0x84,0x44,0x44,0x48,0x28,0x28,0x30,
	// Char "W" offset 349
	0x8C,0x80,0xCC,0x80,0x4C,0x80,0x52,0x80,0x53,0x80,0x33,0x00,0x33,0x00,
	// Char "X" offset 363
	0xC4,0x68,0x30,0x10,0x28,0x4C,0x84,
	// Char "Y" offset 370
	0x84,0x48,0x28,0x30,0x10,0x10,0x10,
	// Char "Z" offset 377
	0x7C,0x08,0x10,0x30,0x60,0x40,0xFC,
	// Char "[" offset 384
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "\" offset 393
	0x80,0x00,0x40,0x40,0x40,
	// Char "]" offset 398
	0xC0,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0xC0,
	// Char "^" offset 407
	0x20,0x60,0x50,0x90,
	// Char "_" offset 411
	0xF8,
	// Char "`" offset 412
	0x40,0x40,
	// Char "a" offset 414
	0x78,0x08,0x78,0x88,0x78,
	// Char "b" offset 419
	0x40,0x40,0x78,0x48,0x48,0x48,0x70,
	// Char "c" offset 426
	0x70,0xC8,0x80,0xC8,0x70,
	// Char "d" offset 431
	0x08,0x08,0x78,0xC8,0x88,0xC8,0x78,
	// Char "e" offset 438
	0x70,0xC8,0xF8,0xC0,0x78,
	// Char "f" offset 443
	0x40,0x40,0xC0,0x40,0x40,0x40,0x40,
	// Char "g" offset 450
	0x78,0xC8,0x88,0xC8,0x78,0xC8,0x70,
	// Char "h" offset 457
	0x40,0x40,0x78,0x48,0x48,0x48,0x48,
	// Char "i" offset 464
	0x40,0x00,0x40,0x40,0x40,0x40,0x40,
	// Char "j" offset 471
	0x40,0x00,0x40,0x40,0x40,0x40,0x40,0x40,0x80,
	// Char "k" offset 480
	0x40,0x40,0x58,0x60,0x60,0x50,0x58,
	// Char "l" offset 487
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "m" offset 494
	0x76,0x49,0x49,0x49,0x49,
	// Char "n" offset 499
	0x78,0x48,0x48,0x48,0x48,
	// Char "o" offset 504
	0x70,0xC8,0x88,0xC8,0x70,
	// Char "p" offset 509
	0x78,0x48,0x48,0x48,0x70,0x40,0x40,
	// Char "q" offset 516
	0x78,0xC8,0x88,0xC8,0x78,0x08,0x08,
	// Char "r" offset 523
	0x60,0x40,0x40,0x40,0x40,
	// Char "s" offset 528
	0x70,0x80,0x70,0x08,0xF0,
	// Char "t" offset 533
	0x40,0x40,0xC0,0x40,0x40,0x40,0x40,
	// Char "u" offset 540
	0x48,0x48,0x48,0x48,0x78,
	// Char "v" offset 545
	0x88,0x50,0x50,0x70,0x20,
	// Char "w" offset 550
	0x9A,0xDA,0x6E,0x6C,0x6C,
	// Char "x" offset 555
	0xD8,0x70,0x20,0x50,0xD8,
	// Char "y" offset 560
	0x88,0x50,0x50,0x70,0x20,0x20,0x40,
	// Char "z" offset 567
	0xF8,0x10,0x20,0x40,0xF8,
	// Char "{" offset 572
	0x60,0x40,0x40,0x40,0x80,0x40,0x40,0x40,0x60,
	// Char "|" offset 581
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x40,
	// Char "}" offset 590
	0xC0,0x40,0x40,0x40,0x20,0x40,0x40,0x40,0xC0,
	// Char "~" offset 599
	0x60,0x18,

};
