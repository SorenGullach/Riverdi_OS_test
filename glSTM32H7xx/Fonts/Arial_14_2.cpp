
#include "glFont.h"

extern const uint8_t Arial_14_2_Pixels[];

// Font index for Arial_14_2
const FontItem Arial_14_2[] = {
	{ // Char "!" 
		'!', 		// This char
		3,16, 		// Width and height of the image
		1,3,2,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+0), // Data offset
	},
	{ // Char """ 
		'"', 		// This char
		4,16, 		// Width and height of the image
		1,3,3,6, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+10), // Data offset
	},
	{ // Char "#" 
		'#', 		// This char
		7,16, 		// Width and height of the image
		0,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+14), // Data offset
	},
	{ // Char "$" 
		'$', 		// This char
		7,16, 		// Width and height of the image
		1,2,6,13, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,12, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+34), // Data offset
	},
	{ // Char "%" 
		'%', 		// This char
		12,16, 		// Width and height of the image
		1,3,11,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+58), // Data offset
	},
	{ // Char "&" 
		'&', 		// This char
		9,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+88), // Data offset
	},
	{ // Char "'" 
		'\'', 		// This char
		2,16, 		// Width and height of the image
		1,3,1,6, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+118), // Data offset
	},
	{ // Char "(" 
		'(', 		// This char
		4,16, 		// Width and height of the image
		1,3,3,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+122), // Data offset
	},
	{ // Char ")" 
		')', 		// This char
		4,16, 		// Width and height of the image
		1,3,3,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+135), // Data offset
	},
	{ // Char "*" 
		'*', 		// This char
		5,16, 		// Width and height of the image
		1,3,4,6, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+148), // Data offset
	},
	{ // Char "+" 
		'+', 		// This char
		8,16, 		// Width and height of the image
		1,5,7,11, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+156), // Data offset
	},
	{ // Char "," 
		',', 		// This char
		3,16, 		// Width and height of the image
		1,12,2,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,3, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+170), // Data offset
	},
	{ // Char "-" 
		'-', 		// This char
		4,16, 		// Width and height of the image
		0,9,3,9, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+173), // Data offset
	},
	{ // Char "." 
		'.', 		// This char
		3,16, 		// Width and height of the image
		1,12,2,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+174), // Data offset
	},
	{ // Char "/" 
		'/', 		// This char
		3,16, 		// Width and height of the image
		0,4,2,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,9, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+175), // Data offset
	},
	{ // Char "0" 
		'0', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+184), // Data offset
	},
	{ // Char "1" 
		'1', 		// This char
		7,16, 		// Width and height of the image
		1,3,4,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+204), // Data offset
	},
	{ // Char "2" 
		'2', 		// This char
		7,16, 		// Width and height of the image
		0,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+224), // Data offset
	},
	{ // Char "3" 
		'3', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+244), // Data offset
	},
	{ // Char "4" 
		'4', 		// This char
		7,16, 		// Width and height of the image
		0,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+264), // Data offset
	},
	{ // Char "5" 
		'5', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+284), // Data offset
	},
	{ // Char "6" 
		'6', 		// This char
		7,16, 		// Width and height of the image
		0,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+304), // Data offset
	},
	{ // Char "7" 
		'7', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+324), // Data offset
	},
	{ // Char "8" 
		'8', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+344), // Data offset
	},
	{ // Char "9" 
		'9', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+364), // Data offset
	},
	{ // Char ":" 
		':', 		// This char
		3,16, 		// Width and height of the image
		1,5,2,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+384), // Data offset
	},
	{ // Char ";" 
		';', 		// This char
		3,16, 		// Width and height of the image
		1,5,2,14, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+392), // Data offset
	},
	{ // Char "<" 
		'<', 		// This char
		8,16, 		// Width and height of the image
		1,5,6,11, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+402), // Data offset
	},
	{ // Char "=" 
		'=', 		// This char
		8,16, 		// Width and height of the image
		1,6,6,9, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,4, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+416), // Data offset
	},
	{ // Char ">" 
		'>', 		// This char
		8,16, 		// Width and height of the image
		1,5,6,11, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,7, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+424), // Data offset
	},
	{ // Char "?" 
		'?', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+438), // Data offset
	},
	{ // Char "@" 
		'@', 		// This char
		14,16, 		// Width and height of the image
		1,3,13,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		4,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+458), // Data offset
	},
	{ // Char "A" 
		'A', 		// This char
		9,16, 		// Width and height of the image
		0,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+510), // Data offset
	},
	{ // Char "B" 
		'B', 		// This char
		9,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+540), // Data offset
	},
	{ // Char "C" 
		'C', 		// This char
		10,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+570), // Data offset
	},
	{ // Char "D" 
		'D', 		// This char
		10,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+600), // Data offset
	},
	{ // Char "E" 
		'E', 		// This char
		9,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+630), // Data offset
	},
	{ // Char "F" 
		'F', 		// This char
		8,16, 		// Width and height of the image
		1,3,7,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+660), // Data offset
	},
	{ // Char "G" 
		'G', 		// This char
		10,16, 		// Width and height of the image
		1,3,9,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+680), // Data offset
	},
	{ // Char "H" 
		'H', 		// This char
		10,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+710), // Data offset
	},
	{ // Char "I" 
		'I', 		// This char
		3,16, 		// Width and height of the image
		1,3,2,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+740), // Data offset
	},
	{ // Char "J" 
		'J', 		// This char
		7,16, 		// Width and height of the image
		0,3,5,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+750), // Data offset
	},
	{ // Char "K" 
		'K', 		// This char
		9,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+770), // Data offset
	},
	{ // Char "L" 
		'L', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+800), // Data offset
	},
	{ // Char "M" 
		'M', 		// This char
		11,16, 		// Width and height of the image
		1,3,10,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+820), // Data offset
	},
	{ // Char "N" 
		'N', 		// This char
		10,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+850), // Data offset
	},
	{ // Char "O" 
		'O', 		// This char
		10,16, 		// Width and height of the image
		1,3,9,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+880), // Data offset
	},
	{ // Char "P" 
		'P', 		// This char
		9,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+910), // Data offset
	},
	{ // Char "Q" 
		'Q', 		// This char
		10,16, 		// Width and height of the image
		1,3,9,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+940), // Data offset
	},
	{ // Char "R" 
		'R', 		// This char
		10,16, 		// Width and height of the image
		1,3,9,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+970), // Data offset
	},
	{ // Char "S" 
		'S', 		// This char
		9,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1000), // Data offset
	},
	{ // Char "T" 
		'T', 		// This char
		8,16, 		// Width and height of the image
		0,3,7,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1030), // Data offset
	},
	{ // Char "U" 
		'U', 		// This char
		10,16, 		// Width and height of the image
		1,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1050), // Data offset
	},
	{ // Char "V" 
		'V', 		// This char
		9,16, 		// Width and height of the image
		0,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1080), // Data offset
	},
	{ // Char "W" 
		'W', 		// This char
		13,16, 		// Width and height of the image
		0,3,12,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		4,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1110), // Data offset
	},
	{ // Char "X" 
		'X', 		// This char
		9,16, 		// Width and height of the image
		0,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1150), // Data offset
	},
	{ // Char "Y" 
		'Y', 		// This char
		9,16, 		// Width and height of the image
		0,3,8,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1180), // Data offset
	},
	{ // Char "Z" 
		'Z', 		// This char
		8,16, 		// Width and height of the image
		0,3,7,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1210), // Data offset
	},
	{ // Char "[" 
		'[', 		// This char
		3,16, 		// Width and height of the image
		1,3,2,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1230), // Data offset
	},
	{ // Char "\" 
		'\\', 		// This char
		3,16, 		// Width and height of the image
		0,3,2,10, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1243), // Data offset
	},
	{ // Char "]" 
		']', 		// This char
		3,16, 		// Width and height of the image
		0,3,2,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1251), // Data offset
	},
	{ // Char "^" 
		'^', 		// This char
		6,16, 		// Width and height of the image
		0,3,5,7, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,5, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1264), // Data offset
	},
	{ // Char "_" 
		'_', 		// This char
		7,16, 		// Width and height of the image
		0,15,6,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,1, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1274), // Data offset
	},
	{ // Char "`" 
		'`', 		// This char
		4,16, 		// Width and height of the image
		1,3,2,4, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1276), // Data offset
	},
	{ // Char "a" 
		'a', 		// This char
		7,16, 		// Width and height of the image
		1,5,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1278), // Data offset
	},
	{ // Char "b" 
		'b', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1294), // Data offset
	},
	{ // Char "c" 
		'c', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1314), // Data offset
	},
	{ // Char "d" 
		'd', 		// This char
		7,16, 		// Width and height of the image
		0,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1330), // Data offset
	},
	{ // Char "e" 
		'e', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1350), // Data offset
	},
	{ // Char "f" 
		'f', 		// This char
		3,16, 		// Width and height of the image
		0,3,2,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1366), // Data offset
	},
	{ // Char "g" 
		'g', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1376), // Data offset
	},
	{ // Char "h" 
		'h', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1398), // Data offset
	},
	{ // Char "i" 
		'i', 		// This char
		3,16, 		// Width and height of the image
		1,3,1,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1418), // Data offset
	},
	{ // Char "j" 
		'j', 		// This char
		3,16, 		// Width and height of the image
		0,3,1,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1428), // Data offset
	},
	{ // Char "k" 
		'k', 		// This char
		7,16, 		// Width and height of the image
		1,3,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1441), // Data offset
	},
	{ // Char "l" 
		'l', 		// This char
		3,16, 		// Width and height of the image
		1,3,1,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1461), // Data offset
	},
	{ // Char "m" 
		'm', 		// This char
		11,16, 		// Width and height of the image
		1,5,10,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1471), // Data offset
	},
	{ // Char "n" 
		'n', 		// This char
		7,16, 		// Width and height of the image
		1,5,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1495), // Data offset
	},
	{ // Char "o" 
		'o', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1511), // Data offset
	},
	{ // Char "p" 
		'p', 		// This char
		7,16, 		// Width and height of the image
		1,5,6,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1527), // Data offset
	},
	{ // Char "q" 
		'q', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1549), // Data offset
	},
	{ // Char "r" 
		'r', 		// This char
		4,16, 		// Width and height of the image
		1,5,3,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1571), // Data offset
	},
	{ // Char "s" 
		's', 		// This char
		7,16, 		// Width and height of the image
		1,5,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1579), // Data offset
	},
	{ // Char "t" 
		't', 		// This char
		3,16, 		// Width and height of the image
		0,3,2,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,10, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1595), // Data offset
	},
	{ // Char "u" 
		'u', 		// This char
		7,16, 		// Width and height of the image
		1,5,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1605), // Data offset
	},
	{ // Char "v" 
		'v', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1621), // Data offset
	},
	{ // Char "w" 
		'w', 		// This char
		10,16, 		// Width and height of the image
		0,5,9,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		3,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1637), // Data offset
	},
	{ // Char "x" 
		'x', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1661), // Data offset
	},
	{ // Char "y" 
		'y', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,11, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1677), // Data offset
	},
	{ // Char "z" 
		'z', 		// This char
		7,16, 		// Width and height of the image
		0,5,6,12, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,8, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1699), // Data offset
	},
	{ // Char "{" 
		'{', 		// This char
		4,16, 		// Width and height of the image
		0,3,3,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1715), // Data offset
	},
	{ // Char "|" 
		'|', 		// This char
		3,16, 		// Width and height of the image
		1,3,1,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1728), // Data offset
	},
	{ // Char "}" 
		'}', 		// This char
		4,16, 		// Width and height of the image
		0,3,3,15, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		1,13, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1741), // Data offset
	},
	{ // Char "~" 
		'~', 		// This char
		8,16, 		// Width and height of the image
		1,7,7,8, 	// Start and end coordinates of the image
		2, 			// Number of bits per pixel
		2,2, 		// Stride in X and Y directions
		(uint8_t*)(Arial_14_2_Pixels+1754), // Data offset
	},
};

// Font data for Arial_14_2 
const uint8_t Arial_14_2_Pixels[] = {
	// Char "!" offset 0
	0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x3C,0x00,0x3C,
	// Char """ offset 10
	0x33,0x33,0x32,0x22,
	// Char "#" offset 14
	0x02,0x0C,0x0A,0x08,0x0C,0x28,0xFF,0xFC,0x0C,0x30,0x28,0x30,0xFF,0xFC,0x30,0x80,0x30,0xC0,0x20,0xC0,
	// Char "$" offset 34
	0x02,0x00,0x0F,0xF0,0x3A,0x2C,0x32,0x00,0x32,0x00,0x0F,0xC0,0x02,0xF8,0x02,0x0C,0x02,0x0C,0x32,0x2C,0x2F,0xF0,0x02,0x00,
	// Char "%" offset 58
	0x2F,0x80,0xC0,0x30,0xC0,0x80,0x30,0xC3,0x00,0x30,0xCA,0x00,0x0F,0x8C,0x00,0x00,0x28,0xFC,0x00,0x32,0x8E,0x00,0x83,0x0A,0x00,0xC2,0x8E,0x03,0x00,0xF8,
	// Char "&" offset 88
	0x03,0xF0,0x00,0x0C,0x28,0x00,0x0C,0x28,0x00,0x0B,0xB0,0x00,0x0B,0xC0,0x00,0x3C,0xE3,0x00,0x30,0x3F,0x00,0x30,0x0E,0x00,0x38,0x3F,0x00,0x0F,0xE2,0xC0,
	// Char "'" offset 118
	0x30,0x30,0x30,0x20,
	// Char "(" offset 122
	0x03,0x08,0x0C,0x28,0x30,0x30,0x30,0x30,0x30,0x28,0x0C,0x08,0x03,
	// Char ")" offset 135
	0x30,0x08,0x0C,0x0A,0x03,0x03,0x03,0x03,0x03,0x0A,0x0C,0x08,0x30,
	// Char "*" offset 148
	0x08,0x00,0x3A,0xC0,0x0E,0x00,0x32,0x80,
	// Char "+" offset 156
	0x02,0x80,0x02,0x80,0x02,0x80,0x3F,0xFE,0x02,0x80,0x02,0x80,0x02,0x80,
	// Char "," offset 170
	0x38,0x08,0x20,
	// Char "-" offset 173
	0xBF,
	// Char "." offset 174
	0x38,
	// Char "/" offset 175
	0x08,0x0C,0x0C,0x08,0x20,0x30,0x20,0xA0,0xC0,
	// Char "0" offset 184
	0x0F,0xE0,0x28,0x38,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x28,0x38,0x0F,0xE0,
	// Char "1" offset 204
	0x00,0xC0,0x03,0xC0,0x2E,0xC0,0x20,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,
	// Char "2" offset 224
	0x0F,0xE0,0x38,0x38,0x30,0x0C,0x00,0x2C,0x00,0x30,0x00,0xE0,0x03,0x80,0x0E,0x00,0x38,0x00,0xBF,0xFC,
	// Char "3" offset 244
	0x0F,0xE0,0x38,0x30,0x30,0x28,0x00,0x30,0x03,0xE0,0x00,0x2C,0x00,0x0C,0x30,0x0C,0x38,0x38,0x0F,0xE0,
	// Char "4" offset 264
	0x00,0x30,0x00,0xF0,0x02,0xB0,0x02,0x30,0x0C,0x30,0x28,0x30,0x30,0x30,0xBF,0xFC,0x00,0x30,0x00,0x30,
	// Char "5" offset 284
	0x0F,0xF8,0x28,0x00,0x20,0x00,0x3F,0xE0,0x38,0x38,0x00,0x0C,0x00,0x0C,0x30,0x0C,0x38,0x38,0x0F,0xE0,
	// Char "6" offset 304
	0x0F,0xF0,0x2C,0x2C,0x30,0x00,0xB0,0x00,0xAB,0xF0,0xB8,0x2C,0xA0,0x0C,0x30,0x0C,0x38,0x2C,0x0F,0xF0,
	// Char "7" offset 324
	0x3F,0xFC,0x00,0x38,0x00,0xB0,0x00,0xC0,0x02,0xC0,0x03,0x80,0x03,0x00,0x0B,0x00,0x0A,0x00,0x0E,0x00,
	// Char "8" offset 344
	0x0F,0xE0,0x38,0x38,0x30,0x28,0x38,0x38,0x0B,0xC0,0x38,0x38,0x30,0x0C,0x30,0x0C,0x38,0x38,0x0F,0xF0,
	// Char "9" offset 364
	0x0F,0xE0,0x38,0x28,0x30,0x0C,0x30,0x0C,0x38,0x2C,0x0F,0xCC,0x00,0x0C,0x00,0x2C,0x30,0x30,0x0F,0xE0,
	// Char ":" offset 384
	0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x38,
	// Char ";" offset 392
	0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x08,0x20,
	// Char "<" offset 402
	0x00,0x08,0x00,0xF0,0x0F,0x00,0x30,0x00,0x0F,0x00,0x00,0xF0,0x00,0x08,
	// Char "=" offset 416
	0x3F,0xFC,0x00,0x00,0x00,0x00,0x3F,0xFC,
	// Char ">" offset 424
	0x30,0x00,0x0F,0x00,0x00,0xF0,0x00,0x0C,0x00,0xF0,0x0F,0x00,0x30,0x00,
	// Char "?" offset 438
	0x0F,0xF0,0x38,0x2C,0x30,0x0C,0x00,0x0C,0x00,0x38,0x00,0xE0,0x02,0x80,0x03,0x80,0x00,0x00,0x03,0x80,
	// Char "@" offset 458
	0x00,0x3F,0xF0,0x00,0x03,0xC0,0x0F,0x00,0x0E,0x00,0x03,0x80,0x28,0x2F,0x30,0xC0,0x30,0xB0,0xF0,0xC0,0x30,0xC0,0xB0,0xC0,0x32,0x80,0xA0,0xC0,0x32,0x80,0xC2,0xC0,0x30,0xC2,0xC3,0x00,0x20,0xBC,0xFC,0x00,0x0C,0x00,0x00,0xE0,0x03,0xC0,0x0B,0x00,0x00,0xBF,0xF8,0x00,
	// Char "A" offset 510
	0x00,0xE0,0x00,0x03,0xB0,0x00,0x03,0x30,0x00,0x0A,0x28,0x00,0x0C,0x0C,0x00,0x0C,0x0E,0x00,0x3F,0xFF,0x00,0x30,0x03,0x00,0xB0,0x02,0x80,0xE0,0x00,0xC0,
	// Char "B" offset 540
	0x3F,0xFC,0x00,0x30,0x03,0x00,0x30,0x03,0x00,0x30,0x02,0x00,0x3F,0xFF,0x00,0x30,0x03,0x00,0x30,0x02,0x80,0x30,0x02,0x80,0x30,0x03,0x00,0x3F,0xFC,0x00,
	// Char "C" offset 570
	0x03,0xFE,0x00,0x0E,0x03,0x80,0x38,0x00,0xC0,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x38,0x00,0xC0,0x0E,0x03,0xC0,0x03,0xFE,0x00,
	// Char "D" offset 600
	0x3F,0xFC,0x00,0x30,0x03,0x00,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x03,0x00,0x3F,0xFC,0x00,
	// Char "E" offset 630
	0x3F,0xFF,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x3F,0xFF,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x3F,0xFF,0x80,
	// Char "F" offset 660
	0x3F,0xFF,0x30,0x00,0x30,0x00,0x30,0x00,0x3F,0xFC,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,
	// Char "G" offset 680
	0x02,0xFF,0x00,0x0E,0x00,0xC0,0x28,0x00,0xA0,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x0F,0xF0,0x30,0x00,0x30,0x28,0x00,0x30,0x0E,0x00,0xF0,0x02,0xFF,0x00,
	// Char "H" offset 710
	0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x3F,0xFF,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,
	// Char "I" offset 740
	0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,0x38,
	// Char "J" offset 750
	0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0xA0,0x30,0x30,0xA0,0x2F,0xC0,
	// Char "K" offset 770
	0x30,0x03,0xC0,0x30,0x0E,0x00,0x30,0x3C,0x00,0x30,0xF0,0x00,0x33,0xC0,0x00,0x3F,0xB0,0x00,0x3C,0x3C,0x00,0x30,0x0E,0x00,0x30,0x03,0x00,0x30,0x02,0xC0,
	// Char "L" offset 800
	0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x30,0x00,0x3F,0xFC,
	// Char "M" offset 820
	0x38,0x00,0x38,0x3C,0x00,0xF8,0x3A,0x00,0xF8,0x33,0x02,0xB8,0x32,0x03,0x38,0x30,0x83,0x38,0x30,0xCA,0x38,0x30,0xAC,0x38,0x30,0x3C,0x38,0x30,0x38,0x38,
	// Char "N" offset 850
	0x3C,0x00,0xC0,0x3E,0x00,0xC0,0x3B,0x00,0xC0,0x32,0xC0,0xC0,0x30,0xE0,0xC0,0x30,0x30,0xC0,0x30,0x2C,0xC0,0x30,0x0F,0xC0,0x30,0x03,0xC0,0x30,0x02,0xC0,
	// Char "O" offset 880
	0x03,0xFE,0x00,0x0E,0x02,0xC0,0x38,0x00,0xA0,0x30,0x00,0x30,0x30,0x00,0x30,0x30,0x00,0x30,0x30,0x00,0x30,0x38,0x00,0xA0,0x0E,0x02,0xC0,0x03,0xFE,0x00,
	// Char "P" offset 910
	0x3F,0xFE,0x00,0x30,0x03,0x80,0x30,0x02,0x80,0x30,0x02,0x80,0x30,0x03,0x00,0x3F,0xFE,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,0x30,0x00,0x00,
	// Char "Q" offset 940
	0x03,0xFE,0x00,0x0E,0x03,0xC0,0x38,0x00,0xE0,0x30,0x00,0x30,0x30,0x00,0x30,0x30,0x00,0x30,0x30,0x00,0x30,0x38,0x08,0xA0,0x0E,0x0B,0xC0,0x03,0xFF,0xF0,
	// Char "R" offset 970
	0x3F,0xFF,0x00,0x30,0x03,0x80,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x03,0x80,0x3F,0xFE,0x00,0x30,0x2C,0x00,0x30,0x0B,0x00,0x30,0x03,0xC0,0x30,0x00,0xE0,
	// Char "S" offset 1000
	0x0B,0xFC,0x00,0x28,0x0B,0x00,0x30,0x03,0x00,0x3C,0x00,0x00,0x0F,0xF0,0x00,0x00,0x3F,0x00,0x00,0x03,0x80,0x30,0x02,0x80,0x3C,0x03,0x00,0x0B,0xFC,0x00,
	// Char "T" offset 1030
	0xBF,0xFF,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,0x00,0xC0,
	// Char "U" offset 1050
	0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x30,0x00,0xC0,0x28,0x02,0xC0,0x0C,0x03,0x80,0x03,0xFC,0x00,
	// Char "V" offset 1080
	0xE0,0x00,0xC0,0x30,0x02,0xC0,0x38,0x03,0x00,0x2C,0x03,0x00,0x0C,0x0E,0x00,0x0A,0x0C,0x00,0x03,0x28,0x00,0x03,0x30,0x00,0x02,0xF0,0x00,0x00,0xE0,0x00,
	// Char "W" offset 1110
	0xA0,0x0E,0x00,0xC0,0x30,0x0F,0x02,0xC0,0x30,0x23,0x03,0x80,0x30,0x32,0x83,0x00,0x28,0x30,0xC3,0x00,0x0C,0xA0,0xCA,0x00,0x0C,0xC0,0x8A,0x00,0x0A,0xC0,0xAC,0x00,0x0B,0x80,0x3C,0x00,0x03,0x00,0x38,0x00,
	// Char "X" offset 1150
	0x38,0x03,0xC0,0x0C,0x0B,0x00,0x0B,0x0C,0x00,0x03,0xB0,0x00,0x00,0xE0,0x00,0x02,0xF0,0x00,0x03,0x38,0x00,0x0E,0x0E,0x00,0x38,0x0B,0x00,0xF0,0x03,0xC0,
	// Char "Y" offset 1180
	0xF0,0x03,0xC0,0x38,0x03,0x00,0x0C,0x0C,0x00,0x0B,0x28,0x00,0x03,0xF0,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,0x00,0xC0,0x00,
	// Char "Z" offset 1210
	0x3F,0xFF,0x00,0x0E,0x00,0x3C,0x00,0xB0,0x00,0xC0,0x03,0x80,0x0E,0x00,0x2C,0x00,0x30,0x00,0xBF,0xFF,
	// Char "[" offset 1230
	0x3C,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3C,
	// Char "\" offset 1243
	0x80,0x20,0x30,0x30,0x28,0x0C,0x0C,0x08,
	// Char "]" offset 1251
	0xBC,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,0xBC,
	// Char "^" offset 1264
	0x0B,0x00,0x0E,0x00,0x28,0xC0,0x30,0xC0,0xB0,0xB0,
	// Char "_" offset 1274
	0xFF,0xFC,
	// Char "`" offset 1276
	0x38,0x0C,
	// Char "a" offset 1278
	0x0F,0xF0,0x30,0x3C,0x00,0x2C,0x03,0xFC,0x3E,0x2C,0x30,0x2C,0x30,0x3C,0x2F,0xCC,
	// Char "b" offset 1294
	0x30,0x00,0x30,0x00,0x3B,0xF0,0x3C,0x2C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x3C,0x38,0x3B,0xF0,
	// Char "c" offset 1314
	0x0F,0xE0,0x38,0x38,0x30,0x00,0xB0,0x00,0xB0,0x00,0x30,0x00,0x38,0x28,0x0F,0xF0,
	// Char "d" offset 1330
	0x00,0x2C,0x00,0x2C,0x0F,0xEC,0x38,0x3C,0x30,0x2C,0xB0,0x0C,0xB0,0x0C,0x30,0x2C,0x38,0x3C,0x0F,0xEC,
	// Char "e" offset 1350
	0x0F,0xF0,0x38,0x28,0x30,0x0C,0xBF,0xFC,0xB0,0x00,0x30,0x00,0x38,0x0C,0x0F,0xF0,
	// Char "f" offset 1366
	0x0C,0x28,0xFC,0x28,0x28,0x28,0x28,0x28,0x28,0x28,
	// Char "g" offset 1376
	0x0F,0xEC,0x38,0x3C,0x30,0x2C,0xA0,0x2C,0xA0,0x2C,0x30,0x2C,0x38,0x3C,0x0F,0xE8,0x00,0x28,0x30,0x30,0x2F,0xC0,
	// Char "h" offset 1398
	0x30,0x00,0x30,0x00,0x3B,0xF0,0x3C,0x38,0x30,0x2C,0x30,0x2C,0x30,0x2C,0x30,0x2C,0x30,0x2C,0x30,0x2C,
	// Char "i" offset 1418
	0x30,0x00,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "j" offset 1428
	0x30,0x00,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0xE0,
	// Char "k" offset 1441
	0x30,0x00,0x30,0x00,0x30,0x38,0x30,0xC0,0x33,0x80,0x3F,0x00,0x3A,0xC0,0x30,0xE0,0x30,0x30,0x30,0x2C,
	// Char "l" offset 1461
	0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "m" offset 1471
	0x33,0xF3,0xF0,0x3C,0x3C,0x28,0x30,0x28,0x0C,0x30,0x28,0x0C,0x30,0x28,0x0C,0x30,0x28,0x0C,0x30,0x28,0x0C,0x30,0x28,0x0C,
	// Char "n" offset 1495
	0x3B,0xF0,0x3C,0x38,0x30,0x2C,0x30,0x2C,0x30,0x2C,0x30,0x2C,0x30,0x2C,0x30,0x2C,
	// Char "o" offset 1511
	0x0F,0xE0,0x38,0x38,0x30,0x0C,0xB0,0x0C,0xB0,0x0C,0x30,0x0C,0x38,0x38,0x0F,0xE0,
	// Char "p" offset 1527
	0x33,0xF0,0x3C,0x2C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x30,0x0C,0x3C,0x28,0x3B,0xF0,0x30,0x00,0x30,0x00,0x30,0x00,
	// Char "q" offset 1549
	0x0F,0xCC,0x38,0x3C,0x30,0x2C,0xB0,0x0C,0xB0,0x0C,0x30,0x2C,0x38,0x3C,0x0F,0xEC,0x00,0x2C,0x00,0x2C,0x00,0x2C,
	// Char "r" offset 1571
	0x3B,0x38,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "s" offset 1579
	0x2F,0xC0,0x30,0x30,0x30,0x00,0x3F,0x00,0x02,0xF0,0x00,0x38,0x30,0x30,0x2F,0xC0,
	// Char "t" offset 1595
	0x30,0x30,0xFC,0x30,0x30,0x30,0x30,0x30,0x30,0x2C,
	// Char "u" offset 1605
	0x30,0x2C,0x30,0x2C,0x30,0x2C,0x30,0x2C,0x30,0x2C,0x30,0x2C,0x38,0x3C,0x0F,0xCC,
	// Char "v" offset 1621
	0xA0,0x28,0x30,0x30,0x30,0x30,0x28,0xA0,0x0C,0xC0,0x0E,0xC0,0x0B,0xC0,0x03,0x80,
	// Char "w" offset 1637
	0xE0,0xB0,0x30,0xA0,0xF0,0x20,0x30,0xE0,0x80,0x30,0xA8,0xC0,0x2A,0x8C,0x80,0x0B,0x0E,0x00,0x0F,0x0F,0x00,0x0E,0x0B,0x00,
	// Char "x" offset 1661
	0xB0,0x38,0x28,0xB0,0x0E,0xC0,0x0B,0x80,0x0B,0x80,0x0C,0xC0,0x38,0xB0,0xB0,0x38,
	// Char "y" offset 1677
	0xA0,0x38,0x30,0x30,0x30,0xA0,0x28,0x80,0x0C,0xC0,0x0E,0x80,0x0B,0x00,0x03,0x00,0x02,0x00,0x08,0x00,0x38,0x00,
	// Char "z" offset 1699
	0x3F,0xF8,0x00,0xB0,0x00,0xC0,0x03,0x80,0x0E,0x00,0x2C,0x00,0x30,0x00,0xBF,0xF8,
	// Char "{" offset 1715
	0x0B,0x0C,0x0C,0x0C,0x0C,0x28,0xA0,0x28,0x0C,0x0C,0x0C,0x0C,0x0B,
	// Char "|" offset 1728
	0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,
	// Char "}" offset 1741
	0xF0,0x0C,0x0C,0x0C,0x0C,0x0C,0x03,0x0C,0x0C,0x0C,0x0C,0x2C,0xF0,
	// Char "~" offset 1754
	0x2F,0x02,0x00,0xFC,

};
