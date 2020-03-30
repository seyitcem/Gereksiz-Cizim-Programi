void icerik(){
    string text;
    int control;
    while(control != eEXIT){
        menu_list();
        cin >> text;
        cout << endl;
        transform(text.begin(), text.end(), text.begin(), ::tolower);

        switch(donustur(text)){
            case eArc:{
                arc_ciz();
                break;
            }
            case eLine:{
                line_ciz();
                break;
            }
            case eCircle:{
                circle_ciz();
                break;
            }
            case eRectangle:{
                rectangle_ciz();
                break;
            }
            case eRectangleD:{
                rectangle_ciz_d();
                break;
            }
            case eSetColor:{
                renk_degistir();
                break;
            }
            case eSetFillStyle:{
                doku_ayari();
                break;
            }
            case eFloodFill:{
                doldur();
                break;
            }
            case eEXIT:{
                control = eEXIT;
                break;
            }
            default: cout << "Yanlis girdi." << endl;
        }
        cout <<  endl;
    }
}
