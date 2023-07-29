#ifndef ASCII_H
#define ASCII_H

#include <iostream>

std::string ascii_text(std::string s){

	std::string buffer, temp;
	int columns;

	// Iterate through 5 rows
	for(int i = 1; i <= 5; ++i){
		// Iterate through all letters from string s
		for(int j = 0; j < s.length(); ++j){
			
			// Ensures that all letters are small
			char letter = tolower(s.at(j));

			// Get ASCII
			switch(letter){
			case 'a':
				temp = " #####  ##   ## ####### ##   ## ##   ## ";
				columns = 8;
				break;
			case 'b':
				temp = "######  ##   ## ######  ##   ## ######  ";
				columns = 8;
				break;
			case 'c':
				temp = " ###### ##      ##      ##       ###### ";
				columns = 8;
				break;
			case 'd':
				temp = "######  ##   ## ##   ## ##   ## ######  ";
				columns = 8;
				break;
			case 'e':
				temp = "####### ##      #####   ##      ####### ";
				columns = 8;
				break;
			case 'f':
				temp = "####### ##      #####   ##      ##      ";
				columns = 8;
				break;
			case 'g':
				temp = " ######  ##       ##   ### ##    ##  ######  ";
				columns = 9;
				break;
			case 'h':
				temp = "##   ## ##   ## ####### ##   ## ##   ## ";
				columns = 8;
				break;
			case 'i':
				temp = "## ## ## ## ## ";
				columns = 3;
				break;
			case 'j':
				temp = "     ##      ##      ## ##   ##  #####  ";
				columns = 8;
				break;
			case 'k':
				temp = "##   ## ##  ##  #####   ##  ##  ##   ## ";
				columns = 8;
				break;
			case 'l':
				temp = "##      ##      ##      ##      ####### ";
				columns = 8;
				break;
			case 'm':
				temp = "###    ### ####  #### ## #### ## ##  ##  ## ##      ## ";
				columns = 11;
				break;
			case 'n':
				temp = "###    ## ####   ## ## ##  ## ##  ## ## ##   #### ";
				columns = 10;
				break;
			case 'o':
				temp = " ######  ##    ## ##    ## ##    ##  ######  ";
				columns = 9;
				break;
			case 'p':
				temp = "######  ##   ## ######  ##      ##      ";
				columns = 8;
				break;
			case 'q':
				temp = " ######  ##    ## ##  # ## ##   ###  ######  ";
				columns = 9;
				break;
			case 'r':
				temp = "######  ##   ## ######  ##   ## ##   ## ";
				columns = 8;
				break;
			case 's':
				temp = "####### ##      #######      ## ####### ";
				columns = 8;
				break;
			case 't':
				temp = "########    ##       ##       ##       ##    ";
				columns = 9;
				break;
			case 'u':
				temp = "##    ## ##    ## ##    ## ##    ##  ######  ";
				columns = 9;
				break;
			case 'v':
				temp = "##    ## ##    ## ##    ##  ##  ##    ####   ";
				columns = 9;
				break;
			case 'w':
				temp = "##     ## ##     ## ##  #  ## ## ### ##  ### ###  ";
				columns = 10;
				break;
			case 'x':
				temp = "##   ##  ## ##    ###    ## ##  ##   ## ";
				columns = 8;
				break;
			case 'y':
				temp = "##    ##  ##  ##    ####      ##       ##    ";
				columns = 9;
				break;
			case 'z':
				temp = "#######    ###    ###    ###    ####### ";
				columns = 8;
				break;
			case '1':
				temp = " ## ###  ##  ##  ## ";
				columns = 4;
				break;
			case '2':
				temp = "######       ##  #####  ##      ####### ";
				columns = 8;
				break;
			case '3':
				temp = "######       ##  #####       ## ######  ";
				columns = 8;
				break;
			case '4':
				temp = "##   ## ##   ## #######      ##      ## ";
				columns = 8;
				break;
			case '5':
				temp = "####### ##      #######      ## ####### ";
				columns = 8;
				break;
			case '6':
				temp = " ######  ##       #######  ##    ##  ######  ";
				columns = 9;
				break;
			case '7':
				temp = "#######      ##     ##     ##      ##   ";
				columns = 8;
				break;
			case '8':
				temp = " #####  ##   ##  #####  ##   ##  #####  ";
				columns = 8;
				break;
			case '9':
				temp = " #####  ##   ##  ######      ##  #####  ";
				columns = 8;
				break;
			case '0':
				temp = " ######  ##  #### ## ## ## ####  ##  ######  ";
				columns = 9;
				break;
			}

			// Iterate through chars
			for(int k = (i -1) * columns; k < i * columns; ++k){
				buffer.push_back(temp[k]);
			}

			// Print extra space
			buffer.push_back(' ');
		}
		
		// Print new line at the end
		buffer.push_back('\n');
	}
	return buffer;
}

#endif // ASCII_H