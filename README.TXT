Uygulamayý main.cpp dosyasýný compile ederek baþlatabilirsiniz.

#################################################

graphics.h kütüphanesi yüklü olmalýdýr. Yoksa çalýþmaz.

#################################################
Seçim ekranýnda kullanýlabilecek komutlar
arc
line
circle
rectangle
rectangle_d (rectangle_dolu fonksiyonu çaðrýlýr. rectangle_dolu fonksiyonu bana aittir.)
setcolor
setfillstyle
floodfill
exit

##################################################

Kullanýlabilir renkler
black
blue
green
cyan
red
magenta
brown
lightgray
darkgray
lightblue
lightgreen
lightcyan
lightred
lightmagenta
yellow
white

##################################################

floodfill kullanýrken önce setfillstyle ayarlarýný yapýn. Kenarlýk rengi kýsmýný ise önceden çizilmiþ þeklin çeper rengine 
göre ayarlayýn. (floodfill iç içe yapýlarda sorunlar çýkartabilmektedir bu nedenle dýþtan içe doðru gelmeye dikkat ediniz.)

##################################################

initwindow(500,500,"WORK AREA"); kýsmýný deðiþtirerek çizim ekranýný yeniden boyutlandýrabilir veya isimlendirebilirsiniz.

##################################################

loglara ana dizindeki "log.txt" dosyasýndan ulaþabilirsiniz.

##################################################

Birden fazla çizim yapýp ayrý ayrý kaydetmek isterseniz karýþmamasý için main.cpp'deki icerik(); den önce

dosya << "###NEW PROJECT###\n";

ekleyebilirsiniz.

##################################################

Þimdilik bu kadar. Teþekkür ederim. 

SCY