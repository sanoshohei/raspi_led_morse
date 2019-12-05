#define MORSE_ENP  0
#define MORSE_DOT  1
#define MORSE_DASH 2

int lookup_code(char code[6], char c){
	switch(c){
	case 'a':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DASH;
		code[2] = MORSE_ENP;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'b':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DOT;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'c':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DASH;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'd':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DOT;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;
	
	case 'e':
		code[0] = MORSE_DOT;
		code[1] = MORSE_ENP;
		code[2] = MORSE_ENP;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;
	
	case 'f':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DASH;
		code[3] = MORSE_DOT;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'g':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DOT;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'h':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DOT;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'i':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DOT;
		code[2] = MORSE_ENP;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'j':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DASH;
		code[3] = MORSE_DASH;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'k':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DASH;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'l':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DOT;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'm':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DASH;
		code[2] = MORSE_ENP;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'n':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DOT;
		code[2] = MORSE_ENP;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'o':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DASH;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'p':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DASH;
		code[3] = MORSE_DOT;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'q':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DASH;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'r':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DOT;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 's':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DOT;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 't':
		code[0] = MORSE_DASH;
		code[1] = MORSE_ENP;
		code[2] = MORSE_ENP;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'u':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DASH;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'v':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DASH;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'w':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DASH;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'x':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DASH;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'y':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DASH;
		code[3] = MORSE_DASH;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case 'z':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DOT;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 1;

	case '0':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DASH;
		code[3] = MORSE_DASH;
		code[4] = MORSE_DASH;
		code[5] = MORSE_ENP;
		return 1;

	case '1':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DASH;
		code[3] = MORSE_DASH;
		code[4] = MORSE_DASH;
		code[5] = MORSE_ENP;
		return 1;

	case '2':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DASH;
		code[3] = MORSE_DASH;
		code[4] = MORSE_DASH;
		code[5] = MORSE_ENP;
		return 1;

	case '3':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DASH;
		code[4] = MORSE_DASH;
		code[5] = MORSE_ENP;
		return 1;

	case '4':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DOT;
		code[4] = MORSE_DASH;
		code[5] = MORSE_ENP;
		return 1;

	case '5':
		code[0] = MORSE_DOT;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DOT;
		code[4] = MORSE_DOT;
		code[5] = MORSE_ENP;
		return 1;

	case '6':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DOT;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DOT;
		code[4] = MORSE_DOT;
		code[5] = MORSE_ENP;
		return 1;

	case '7':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DOT;
		code[3] = MORSE_DOT;
		code[4] = MORSE_DOT;
		code[5] = MORSE_ENP;
		return 1;

	case '8':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DASH;
		code[3] = MORSE_DOT;
		code[4] = MORSE_DOT;
		code[5] = MORSE_ENP;
		return 1;

	case '9':
		code[0] = MORSE_DASH;
		code[1] = MORSE_DASH;
		code[2] = MORSE_DASH;
		code[3] = MORSE_DASH;
		code[4] = MORSE_DOT;
		code[5] = MORSE_ENP;
		return 1;

	default:
		code[0] = MORSE_ENP;
		code[1] = MORSE_ENP;
		code[2] = MORSE_ENP;
		code[3] = MORSE_ENP;
		code[4] = MORSE_ENP;
		code[5] = MORSE_ENP;
		return 0;
	}
}
