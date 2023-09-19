#include <stdio.h>
#include <windows.h>

#pragma comment(lib, "user32.lib")


int main(int argc, char* argv[]){
	if(argc < 2){
		MessageBeep(MB_ICONHAND);
	}else{
		if(argv[1][0] == '0'){	
			MessageBeep(MB_ICONHAND);
		}else{
			MessageBeep(MB_ICONASTERISK);
		}
	}

	return 0;
}