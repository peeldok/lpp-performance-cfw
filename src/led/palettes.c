#include "led/palettes.h"

u8 palette[palette_custom][3][128] = {
	{ // User-defined flash-backed palette 1
		{0},
		{0},
		{0}
	},
	{ // User-defined flash-backed palette 2
		{0},
		{0},
		{0}
	},
	{ // User-defined flash-backed palette 3
		{0},
		{0},
		{0}
	}
};

const u8 palette_preset[palette_count - palette_custom][3][128] = {
	{ // Novation's default palette
		{0, 9, 15, 63, 63, 63, 31, 15, 63, 63, 48, 16, 63, 63, 47, 24, 33, 20, 12, 8, 18, 0, 0, 0, 18, 0, 0, 0, 15, 0, 0, 0, 18, 0, 0, 0, 22, 15, 0, 0, 18, 0, 0, 0, 12, 0, 0, 0, 33, 11, 5, 4, 63, 63, 23, 15, 63, 63, 23, 12, 63, 37, 29, 8, 0, 0, 0, 0, 0, 9, 31, 7, 63, 46, 43, 24, 3, 0, 0, 0, 15, 30, 43, 15, 63, 33, 28, 0, 14, 21, 13, 22, 12, 33, 52, 63, 63, 45, 35, 32, 14, 4, 3, 5, 5, 25, 41, 54, 53, 63, 39, 25, 7, 54, 31, 38, 35, 15, 28, 55, 39, 13, 6, 1, 45, 15, 44, 18},
		{0, 9, 15, 63, 18, 0, 0, 0, 46, 17, 12, 4, 41, 63, 47, 24, 63, 63, 30, 22, 63, 63, 31, 15, 63, 63, 28, 22, 63, 63, 31, 15, 63, 63, 24, 16, 48, 56, 24, 14, 33, 21, 13, 7, 8, 0, 0, 0, 18, 0, 0, 0, 18, 0, 0, 0, 18, 0, 0, 0, 5, 13, 20, 16, 14, 21, 20, 0, 17, 0, 31, 7, 0, 63, 58, 63, 34, 63, 41, 10, 0, 0, 6, 8, 18, 55, 63, 63, 63, 63, 63, 34, 20, 31, 7, 0, 31, 43, 63, 22, 10, 18, 19, 5, 7, 14, 0, 20, 26, 55, 55, 44, 7, 63, 63, 37, 25, 15, 28, 63, 0, 0, 51, 16, 43, 12, 23, 5},
		{0, 9, 15, 63, 18, 0, 0, 0, 26, 0, 0, 0, 9, 0, 0, 0, 16, 0, 0, 0, 18, 0, 0, 0, 23, 6, 3, 3, 15, 21, 8, 7, 63, 37, 13, 12, 63, 63, 28, 24, 63, 63, 30, 15, 63, 63, 31, 15, 63, 63, 28, 14, 63, 63, 23, 15, 33, 18, 7, 4, 0, 0, 0, 1, 0, 13, 31, 63, 19, 50, 31, 7, 0, 11, 1, 2, 0, 33, 63, 63, 63, 63, 30, 0, 0, 1, 5, 0, 9, 27, 50, 63, 48, 57, 63, 22, 0, 0, 0, 1, 0, 3, 13, 10, 22, 6, 2, 15, 6, 9, 11, 3, 11, 26, 46, 63, 63, 15, 28, 63, 0, 0, 0, 0, 0, 0, 0, 0}
	},
	{ // mat1jaczyyy's custom palette
		{0, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 11, 23, 35, 51, 47, 7, 15, 23, 39, 31, 3, 7, 11, 27, 15, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 3, 7, 11, 27, 15, 7, 15, 23, 39, 31, 11, 23, 35, 51, 47, 15, 31, 47, 62, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 9, 18, 27, 36, 45, 54, 63},
		{0, 0, 0, 0, 15, 0, 3, 7, 11, 27, 15, 7, 15, 23, 39, 31, 11, 23, 35, 51, 47, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 62, 63, 11, 23, 35, 51, 47, 7, 15, 23, 39, 31, 3, 7, 11, 27, 15, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 9, 18, 27, 36, 45, 54, 63},
		{0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 0, 0, 0, 15, 0, 3, 7, 11, 27, 15, 7, 15, 23, 39, 31, 11, 23, 35, 51, 47, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 63, 63, 15, 31, 47, 62, 63, 11, 23, 35, 51, 47, 7, 15, 23, 39, 31, 3, 7, 11, 27, 15, 9, 18, 27, 36, 45, 54, 63}
	},
	{ // Launchpad S legacy palette
		{0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63, 0, 21, 42, 63},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 21, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 42, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63, 63},
		{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	}
};

u8 palette_value(u8 i, u8 v, u8 c) {
	if (i < palette_custom) return palette[i][c][v];
	return palette_preset[i - palette_custom][c][v];
}