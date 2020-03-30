void kayit(string function_name, string doku, string color){
    if(function_name == "setfillstyle"){
        dosya << function_name << "(" << doku << "," << color << ");\n";
    }
}

void kayit(string function_name,int x1,int y1, int x2,int y2){
    if(function_name == "rectangle" || function_name == "rectangle_dolu" || function_name == "line"){
        dosya << function_name << "(" << x1 << "," << y1 << "," << x2 << "," << y2 << ");\n";
    }
}

void kayit(string function_name,int x,int y,int r){
    if(function_name == "circle"){
        dosya << function_name << "(" << x << "," << y << "," << r << ");\n";
    }
}

void kayit(string function_name,int x,int y,int s_angle,int e_angle,int radius){
    if(function_name == "arc"){
        dosya << function_name << "(" << x << "," << y << "," << s_angle << "," << e_angle << "," << radius << ");\n";
    }
}

void kayit(string function_name, string color){
    if(function_name == "setcolor"){
        dosya << function_name << "(" << color << ");\n";
    }
}

void kayit(string function_name, int x, int y, string color){
    if(function_name == "floodfill"){
        dosya << function_name << "(" << x << "," << y << "," << color << ");\n";
    }
}
