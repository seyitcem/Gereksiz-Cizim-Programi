#include <iostream>
#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <bits/stdc++.h>

using namespace std;

fstream dosya;

enum string_code{
    eArc,
    eLine,
    eCircle,
    eRectangle,
    eRectangleD,
    eSetColor,
    eSetFillStyle,
    eFloodFill,
    eWARNING,
    eEXIT,
};

void menu_list();
string_code donustur(string text);
void arc_ciz();
void line_ciz();
void circle_ciz();
void rectangle_ciz();
void rectangle_ciz_d();
void renk_degistir();
void doku_ayari();
void doldur();
int renk_code(string renk);
int pattern_code(string text);
void rectangle_dolu(int x1,int y1,int x2,int y2);
void kayit(string function_name, int x, int y, string color);
void kayit(string function_name,int x1,int y1, int x2,int y2);
void kayit(string function_name,int x,int y,int r);
void kayit(string function_name,int x,int y,int s_angle,int e_angle,int radius);
void kayit(string function_name, string doku, string color);
void kayit(string function_name, string color);

void menu_list(){
    cout << "arc -> arc ciz" << endl;
    cout << "line -> line ciz" << endl;
    cout << "circle -> circle ciz" << endl;
    cout << "rectangle -> rectangle ciz" << endl;
    cout << "rectangle_d -> dolu rectangle ciz" << endl;
    cout << "setcolor -> renk degistir" << endl;
    cout << "setfillstyle -> doku degistir" << endl;
    cout << "floodfill -> doku ile kaplama" << endl;
    cout << "Ne yapmak istiyorsunuz:";
}

string_code donustur(string text) {
	if (text == "arc") return eArc;
	if (text == "line") return eLine;
	if (text == "circle") return eCircle;
	if (text == "rectangle") return eRectangle;
	if (text == "rectangle_d") return eRectangleD;
	if (text == "setcolor") return eSetColor;
	if (text == "setfillstyle") return eSetFillStyle;
	if (text == "floodfill") return eFloodFill;
	if (text == "exit") return eEXIT;
	return eWARNING;
}

void doldur(){
    int x,y;
    string border_color;
    cout << "x koordinatini giriniz:";
    cin >> x;
    cout << "y koordinatini giriniz:";
    cin >> y;
    cout << "Kenarlik rengini giriniz:";
    cin >> border_color;
    transform(border_color.begin(), border_color.end(), border_color.begin(), ::toupper);
    floodfill(x,y,renk_code(border_color));
    kayit("floodfill",x,y,border_color);
}

void doku_ayari(){
    string doku;
    string renk;
    cout << "###DOKU###" << endl;
    cout << "EMPTY_FILL" << endl;
    cout << "SOLID_FILL" << endl;
    cout << "LINE_FILL" << endl;
    cout << "LTSLASH_FILL" << endl;
    cout << "SLASH_FILL" << endl;
    cout << "BKSLASH_FILL" << endl;
    cout << "LTBKSLASH_FILL" << endl;
    cout << "HATCH_FILL" << endl;
    cout << "XHATCH_FILL" << endl;
    cout << "INTERLEAVE_FILL" << endl;
    cout << "WIDE_DOT_FILL" << endl;
    cout << "CLOSE_DOT_FILL" << endl;
    cout << "USER_FILL" << endl;
    cout << "Istediginiz doku tipini giriniz:";
    cin >> doku;
    transform(doku.begin(), doku.end(), doku.begin(), ::toupper);
    cout << "Istediginiz rengi giriniz:";
    cin >> renk;
    transform(renk.begin(), renk.end(), renk.begin(), ::toupper);
    setfillstyle(pattern_code(doku),renk_code(renk));
    kayit("setfillstyle",doku,renk);
}

int pattern_code(string text){
    if (text == "EMPTY_FILL") return 0;
    if (text == "SOLID_FILL") return 1;
    if (text == "LINE_FILL") return 2;
    if (text == "LTSLASH_FILL") return 3;
    if (text == "SLASH_FILL") return 4;
    if (text == "BKSLASH_FILL") return 5;
    if (text == "LTBKSLASH_FILL") return 6;
    if (text == "HATCH_FILL") return 7;
    if (text == "XHATCH_FILL") return 8;
    if (text == "INTERLEAVE_FILL") return 9;
    if (text == "WIDE_DOT_FILL") return 10;
    if (text == "CLOSE_DOT_FILL") return 11;
    if (text == "USER_FILL") return 12;
    return 4;
}

void renk_degistir(){
    string renk;
    cout << "###CHANGE COLOR###" << endl;
    cout << "Hangi renk istiyorsunuz:";
    cin >> renk;
    transform(renk.begin(), renk.end(), renk.begin(), ::toupper);
    setcolor(renk_code(renk));
    kayit("setcolor",renk);
}

void arc_ciz(){
    int x,y,r,start_angle,end_angle;
    cout << "###DRAW ARC###" << endl;
    cout << "x koordinatini giriniz:";
    cin >> x;
    cout << "y koordinatini giriniz:";
    cin >> y;
    cout << "Yaricapi giriniz:";
    cin >> r;
    cout << "Baslangic acisini giriniz:";
    cin >> start_angle;
    cout << "Bitis acisini giriniz:";
    cin >> end_angle;
    arc(x,y,start_angle,end_angle,r);
    kayit("arc",x,y,start_angle,end_angle,r);
}

void line_ciz(){
    int from_x,from_y,to_x,to_y;
    cout << "###DRAW LINE###" << endl;
    cout << "x baslangic koordinati:";
    cin >> from_x;
    cout << "y baslangic koordinati:";
    cin >> from_y;
    cout << "x bitis koordinati:";
    cin >> to_x;
    cout << "y bitis koordinati:";
    cin >> to_y;
    line(from_x,from_y,to_x,to_y);
    kayit("line",from_x,from_y,to_x,to_y);
}

void circle_ciz(){
    int x,y,r;
    cout << "###DRAW CIRCLE###" << endl;
    cout << "Merkez x koordinatini giriniz:";
    cin >> x;
    cout << "Merkez y koordinatini giriniz:";
    cin >> y;
    cout << "Yaricapi giriniz:";
    cin >> r;
    circle(x,y,r);
    kayit("circle",x,y,r);
}

void rectangle_ciz(){
    int left,top,right,bottom;
    cout << "###DRAW RECTANGLE###" << endl;
    cout << "Sol x koordinatini giriniz:";
    cin >> left;
    cout << "Sol y koordinatini giriniz:";
    cin >> top;
    cout << "Sag x koordinatini giriniz:";
    cin >> right;
    cout << "Sag y koordinatini giriniz:";
    cin >> bottom;
    rectangle(left,top,right,bottom);
    kayit("rectangle",left,top,right,bottom);
}

void rectangle_ciz_d(){
    int x1,x2,y1,y2;
    cout << "###DRAW FULL RECTANGLE###" << endl;
    cout << "Sol x koordinatini giriniz:";
    cin >> x1;
    cout << "Sol y koordinatini giriniz:";
    cin >> y1;
    cout << "Sag x koordinatini giriniz:";
    cin >> x2;
    cout << "Sag y koordinatini giriniz:";
    cin >> y2;
    rectangle_dolu(x1,y1,x2,y2);
    kayit("rectangle_dolu",x1,y1,x2,y2);
}

void rectangle_dolu(int x1,int y1,int x2,int y2){
    int i;
    int temp;
    if(y1>y2){
        temp = y2;
        y2 = y1;
        y1 = temp;
    }
    for(i=y1;i<=y2;i++){
        line(x1,i,x2,i);
    }
}

int renk_code(string renk) {
	if (renk == "BLACK") return 0;
	if (renk == "BLUE") return 1;
	if (renk == "GREEN") return 2;
	if (renk == "CYAN") return 3;
	if (renk == "RED") return 4;
	if (renk == "MAGENTA") return 5;
	if (renk == "BROWN") return 6;
	if (renk == "LIGHTGRAY") return 7;
	if (renk == "DARKGRAY") return 8;
	if (renk == "LIGHTBLUE") return 9;
	if (renk == "LIGHTGREEN") return 10;
	if (renk == "LIGHTCYAN") return 11;
	if (renk == "LIGHTRED") return 12;
	if (renk == "LIGHTMAGENTA") return 13;
	if (renk == "YELLOW") return 14;
	if (renk == "WHITE") return 15;
	return 15;
}
