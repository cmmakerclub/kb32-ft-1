# Arduino IDE

## ติดตั้ง Arduino IDE กับ ESP8266และ โปรแกรมตัวอย่าง Library <a id="&#xE15;&#xE34;&#xE14;&#xE15;&#xE31;&#xE49;&#xE07;-arduino-ide-&#xE01;&#xE31;&#xE1A;-esp8266&#xE41;&#xE25;&#xE30;-&#xE42;&#xE1B;&#xE23;&#xE41;&#xE01;&#xE23;&#xE21;&#xE15;&#xE31;&#xE27;&#xE2D;&#xE22;&#xE48;&#xE32;&#xE07;-library"></a>

#### ขั้นตอนการติดตั้ง Arduino IDE กับ ESP8266 <a id="&#xE02;&#xE31;&#xE49;&#xE19;&#xE15;&#xE2D;&#xE19;&#xE01;&#xE32;&#xE23;&#xE15;&#xE34;&#xE14;&#xE15;&#xE31;&#xE49;&#xE07;-arduino-ide-&#xE01;&#xE31;&#xE1A;-esp8266"></a>

การติดตั้ง Arduino IDE กับ ESP8266 คือการติดตั้งโปรแกรมเพื่อใช้ในการเขียนโปรแกรมให้กับบอร์ด ESP8266 หรือบอร์ดอื่น ๆ ผ่านทาง Arduino ใช้ภาษาหลักการของภาษา C++ ครอบด้วยภาษาของ Aruino เพื่อให้การเขียนโปรแกรมมีความง่ายมากยิ่งขึ้น

1.ติดตั้ง Arduino IDE เวอร์ชั้น 1.6.5 หรือ ใหม่กว่า โดย Arduino IDE สามารถ Support Windows Mac OS X Linux ทั้ง 32bit และ 64 bit ซึ่งหา Download ตัวติดตั้งได้จาก  
 [https://www.arduino.cc/en/main/software](https://www.arduino.cc/en/main/software)

ดาวน์โหลด Arduino IDE เวอร์ชั่นล่าสุด

![&#xE14;&#xE32;&#xE27;&#xE19;&#xE4C;&#xE42;&#xE2B;&#xE25;&#xE14; Arduino IDE &#xE40;&#xE27;&#xE2D;&#xE23;&#xE4C;&#xE0A;&#xE31;&#xE48;&#xE19;&#xE25;&#xE48;&#xE32;&#xE2A;&#xE38;&#xE14;](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction1.JPG)

สำหรับการติดตั้ง Arduino IDE บน Windows จะมีแบบให้เลือกทั้ง แตกไฟล์ใช้ได้เลย \(ZIP file for non admin install\)หรือ ติดตั้งเหมือน โปรแกรมทั่วๆไป \(Installer\) หากติดตั้งเรียบร้อยแล้ว ให้เปิด Arduino IDE ขึ้นมาจะได้หน้าตาแบบนี้เลยครับหน้าต่างเริ่มต้นโปรแกรม Arduinoหน้าต่างหลังเปิดใช้งาน Arduino IDE 1.6.9 ครั้งแรก

![&#xE2B;&#xE19;&#xE49;&#xE32;&#xE15;&#xE48;&#xE32;&#xE07;&#xE2B;&#xE25;&#xE31;&#xE07;&#xE40;&#xE1B;&#xE34;&#xE14;&#xE43;&#xE0A;&#xE49;&#xE07;&#xE32;&#xE19; Arduino IDE 1.6.9 &#xE04;&#xE23;&#xE31;&#xE49;&#xE07;&#xE41;&#xE23;&#xE01;](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction3.JPG)

![&#xE2B;&#xE19;&#xE49;&#xE32;&#xE15;&#xE48;&#xE32;&#xE07;&#xE40;&#xE23;&#xE34;&#xE48;&#xE21;&#xE15;&#xE49;&#xE19;&#xE42;&#xE1B;&#xE23;&#xE41;&#xE01;&#xE23;&#xE21; Arduino](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction2.png)

2.ติดตั้ง Broad ESP8266 ลงบน Arduino IDE

* กดเลือก Menu ไปที่ **File** &gt;&gt; **Preferences**

เข้าเมนู File &gt;&gt; Preferences

![&#xE40;&#xE02;&#xE49;&#xE32;&#xE40;&#xE21;&#xE19;&#xE39; File &amp;gt;&amp;gt; Preferences](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction4.png)

* จะขึ้นหน้าต่าง Preferences ให้สังเกตุในช่อง Additional Board Manger URLs:หน้าต่าง Preferences

  ในส่วนของ Additional Board Manger บทความนี้ผมจะใช้ Boards Manager ของ Community ESP8266

![&#xE2B;&#xE19;&#xE49;&#xE32;&#xE15;&#xE48;&#xE32;&#xE07; Preferences](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction5.JPG)

ใช้ Stable Version

![&#xE43;&#xE0A;&#xE49; Stable Version ](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction6.JPG)

* ใส่ URL &gt;&gt; ลงใน Addition Board Manager URLs: ดังนี้ [http://arduino.esp8266.com/stable/package\_esp8266com\_index.json](https://github.com/esp8266/Arduino)วาง Link ลงใน Boards Manager URLs:

  จากนั้นกด OK

* ไปที่ Menu Tools &gt;&gt; Boar: “Arduino…” &gt;&gt; Board Manager…![&#xE40;&#xE25;&#xE37;&#xE2D;&#xE01; Boards Manager...](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction8.JPG)เลือก Boards Manager...
* จะขึ้นหน้าต่าง Boards Manager เลือก Type เป็น Contributedหน้าต่าง Boards Manager

  * จะแสดง Boards ของ ESP8266 เลือกเวอร์ชัน 2.2.0 หรือใหม่กว่าในอนาคต Boards และกด Install

  Install Board ESP8266

  * แล้วรอ สัก 2-3 ครู่ ตัวโปรแกรมจะโหลด Boards ESP8266 ให้ ขนาดไฟล์ประมาณ 150 MB และติดตั้งให้เอง

  Download Boards ESP8266

  เมื่อเราติดตั้งบอร์ด ESP8266 เสร็จเรียบร้อยแล้ว ให้ปิดโปรแกรม Arduino IDE ก่อน แล้วจึงเปิดขึ้นมาใหม่

  * เมื่อเปิดโปรแกรม Arduino IDE ขึ้นมาใหม่แล้ว ให้ลองเลือกไปที่ Menu Tools &gt;&gt; Board: “…..” ซึ่งจะพบว่า มี Menu สำหรับเลือกใช้งาน ESP8266 กับ Arduino IDE ขึ้นมาให้เลือกใช้งานแล้วครับ

![Download Boards ESP8266](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction11.JPG)

![&#xE2B;&#xE19;&#xE49;&#xE32;&#xE15;&#xE48;&#xE32;&#xE07; Boards Manager](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction9.JPG)

![Install Board ESP8266](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction10.JPG)

![&#xE27;&#xE32;&#xE07; Link &#xE25;&#xE07;&#xE43;&#xE19; Boards Manager URLs:](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction7.JPG)

Board ESP8266 ถูกเพิ่มเข้ามา

![Board ESP8266 &#xE16;&#xE39;&#xE01;&#xE40;&#xE1E;&#xE34;&#xE48;&#xE21;&#xE40;&#xE02;&#xE49;&#xE32;&#xE21;&#xE32;](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction12.JPG)

ซึ่ง หมวดของ ESP8266 Modules นั้นจะมีบอร์ดให้เลือกใช้งานอยู่ด้วยกันหลายบอร์ด ที่มีจำหน่ายทั่ว ๆ ไป เช่น

* Generic ESP8266 Module &gt;&gt; บอร์ด ESP8266 ที่ใช้งานทั้วไป หรือ บอร์ดที่สร้างขึ้นเอง
* ESPresso Lite 1.0 และ 2.0 &gt;&gt; บอร์ด ESP8266 ของ Espert และ Chiangmai Maker Club
* Olimex MOD-WIFI-ESP8266\(-DEV\) &gt;&gt; บอร์ด ESP8366 ที่บริษัท Olimex เป็นผู้สร้าง
* NodeMCU \(ESP8266 ESP-12 Module\) &gt;&gt; บอร์ด ESP8266 ที่เป็นบอร์ด NodeMCU
* WeMos D1 &gt;&gt; บอร์ด ESP8266 ที่เป็นบอร์ด wemos

ซึ่งถ้าหากเรามีบอร์ด ESP8266 ที่รองรับ โมดูล ทั้ง 3 บอร์ด ก็สามารถใช้งานได้เลย บอร์ดรุ่นต่าง ๆ ที่ใช้งานโดยทั่วๆไป ก็มีดังนี้

1.Generic ESP8266 Module

![ESP8266-ESP01](https://i2.wp.com/farm1.staticflickr.com/499/19170613322_166b6e9075_z.jpg?zoom=2&resize=474%2C312&ssl=1)

2.ESPresso Lite 1.0 และ 2.0  

![ESPresso Lite V2](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction14.JPG)

![ESPresso Lite V1](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction13.png)

3.NodeMCU 

![ESP8266-NodeMCU V2](https://i1.wp.com/farm4.staticflickr.com/3943/19170544672_0f25c6ae15_z.jpg?zoom=2&resize=474%2C355&ssl=1)

4.WeMosESP8266-ESP01

![WeMos](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction15.JPG)

เพียงเท่านี้เราก็สามารถใช้งาน Board ESP8266 บน Arduino IDE ได้ครบแล้วครับ

ปล.บอร์ด ESPresso Lite V2.0 สามารถสั่งซื้อออนไลน์ได้จากเว็บไซต์ของเชียงใหม่เมกเกอร์คลับ [คลิ๊ก](http://www.cmmcshop.com/category) และ สามารถซื้อด้วยตนเอง

กทม. : Pinn Creative Space สาขา The shoppes grand rama 9 ชั้น 2[ Map](https://maps.here.com/directions/mix/mylocation/PINN-Creative-Space:13.759915,100.569588?map=13.75991,100.56959,15,normal&fb_locale=th_TH)

เชียงใหม่ : ชมรมเชียงใหม่เมกเกอร์คลับ 81/21-25 ถ.อารักษ์ ต.สุเทพ อ.เมืองเชียงใหม่ จ.เชียงใหม่ 50200 [Map](https://www.google.com/maps?ll=18.783329,98.978965&z=19&t=m&hl=th&gl=TH&mapclient=embed&cid=5283136291489251162)

