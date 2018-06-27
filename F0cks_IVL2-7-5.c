/*
 * F0cks_IVL2-7-5.c
 *
 *  Created on: Jun 27, 2018
 *      Author: f0cks
 */

#include "F0cks_IVL2-7-5.h"

Seven_Segment_CodeTypeDef F0cks_IVL2_7_5_Generate_Char_Code(char c, PostionTypeDef pos)
{
	Seven_Segment_CodeTypeDef code = 0;
	switch(c)
	{
		case '0':
			code = CODE_0;
			break;
		case '1':
			code = CODE_1;
			break;
		case '2':
			code = CODE_2;
			break;
		case '3':
			code = CODE_3;
			break;
		case '4':
			code = CODE_4;
			break;
		case '5':
			code = CODE_5;
			break;
		case '6':
			code = CODE_6;
			break;
		case '7':
			code = CODE_7;
			break;
		case '8':
			code = CODE_8;
			break;
		case '9':
			code = CODE_9;
			break;
		case 'A':
		case 'a':
			code = CODE_A;
			break;
		case 'B':
		case 'b':
			code = CODE_B;
			break;
		case 'C':
		case 'c':
			code = CODE_C;
			break;
		case 'D':
		case 'd':
			code = CODE_D;
			break;
		case 'E':
		case 'e':
			code = CODE_E;
			break;
		case 'F':
		case 'f':
			code = CODE_F;
			break;
		case 'G':
		case 'g':
			code = CODE_G;
			break;
		case 'H':
		case 'h':
			code = CODE_H;
			break;
		case 'I':
		case 'i':
			code = CODE_I;
			break;
		case 'J':
		case 'j':
			code = CODE_J;
			break;
		case 'K':
		case 'k':
			code = CODE_K;
			break;
		case 'L':
		case 'l':
			code = CODE_L;
			break;
		case 'M':
		case 'm':
			code = CODE_M;
			break;
		case 'N':
		case 'n':
			code = CODE_N;
			break;
		case 'O':
		case 'o':
			code = CODE_O;
			break;
		case 'P':
		case 'p':
			code = CODE_P;
			break;
		case 'Q':
		case 'q':
			code = CODE_Q;
			break;
		case 'R':
		case 'r':
			code = CODE_R;
			break;
		case 'S':
		case 's':
			code = CODE_S;
			break;
		case 'T':
		case 't':
			code = CODE_T;
			break;
		case 'U':
		case 'u':
			code = CODE_U;
			break;
		case 'V':
		case 'v':
			code = CODE_V;
			break;
		case 'W':
		case 'w':
			code = CODE_W;
			break;
		case 'X':
		case 'x':
			code = CODE_X;
			break;
		case 'Y':
		case 'y':
			code = CODE_Y;
			break;
		case 'Z':
		case 'z':
			code = CODE_Z;
			break;
		default:
			code = CODE_BLANK;
	}

	switch(pos)
	{
		case 0x01:
			code |= 0b10000000000000;
			break;
		case 0x02:
			code |= 0b00001000000000;
			break;
		case 0x03:
			code |= 0b00000000010000;
			break;
		case 0x04:
			code |= 0b00000000000001;
			break;
		default:
			code |= 0b00000000000000;
	}

	return code;
}

Seven_Segment_CodeTypeDef F0cks_IVL2_7_5_Generate_Dot_Code(Dot_CodeTypeDef dot)
{
	switch(dot)
	{
		case 0x01 :
			return 0b01000010000000;
		case 0x02 :
			return 0b00000011000000;
		case 0x03 :
			return 0b01000011000000;
		case 0x04:
		default:
			return 0b00000000000000;

	}
}
