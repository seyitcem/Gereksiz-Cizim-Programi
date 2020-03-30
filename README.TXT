Uygulamayı main.cpp dosyasını compile ederek başlatabilirsiniz.

#################################################

graphics.h kütüphanesi yüklü olmalıdır. Yoksa çalışmaz.

#################################################

Seçim ekranında kullanılabilecek komutlar
arc
line
circle
rectangle
rectangle_d (rectangle_dolu fonksiyonu çağrılır. rectangle_dolu fonksiyonu bana aittir.)
setcolor
setfillstyle
floodfill
exit

##################################################

floodfill kullanırken önce setfillstyle ayarlarını yapın. Kenarlık rengi kısmını ise önceden çizilmiş şeklin çeper rengine 
göre ayarlayın. (floodfill iç içe yapılarda sorunlar çıkartabilmektedir bu nedenle dıştan içe doğru gelmeye dikkat ediniz.)

##################################################

initwindow(500,500,"WORK AREA"); kısmını değiştirerek çizim ekranını yeniden boyutlandırabilir veya isimlendirebilirsiniz.

##################################################

loglara ana dizindeki "log.txt" dosyasından ulaşabilirsiniz.

##################################################

Birden fazla çizim yapıp ayrı ayrı kaydetmek isterseniz karışmaması için main.cpp'deki icerik(); den önce

dosya << "###NEW PROJECT###\n";

ekleyebilirsiniz.

##################################################

Şimdilik bu kadar. Teşekkür ederim. 

SCY
