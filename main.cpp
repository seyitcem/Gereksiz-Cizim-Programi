#include "res/main.h"
#include "res/start.cpp"
#include "res/kayit.cpp"
#include <fstream>

int main(){
    initwindow(500,500,"WORK AREA");
	dosya.open("log.txt",fstream::app);

	if (!(dosya.is_open())) cout << "Hata. Dosya acilamadi." << endl;

    icerik();

    system("PAUSE");
	closegraph();
	dosya.close();
	return 0;
}
