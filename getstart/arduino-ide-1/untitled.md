# KB32-FT Board Install

## ติดตั้ง Board KB32-FT บนโปรแกรม Arduino IDE <a id="&#xE15;&#xE34;&#xE14;&#xE15;&#xE31;&#xE49;&#xE07;-arduino-ide-&#xE01;&#xE31;&#xE1A;-esp8266&#xE41;&#xE25;&#xE30;-&#xE42;&#xE1B;&#xE23;&#xE41;&#xE01;&#xE23;&#xE21;&#xE15;&#xE31;&#xE27;&#xE2D;&#xE22;&#xE48;&#xE32;&#xE07;-library"></a>

> #### เนื่องจาก Board KB32-FT ใช้โมดูล WROOM-32 จึงสามารถติดตั้ง Board "ESP32 Dev Module" แทนได้เลย

## 1.ติดตั้ง Broad ESP32 Dev Module ลงบน Arduino IDE

* กดเลือก Menu ไปที่ **File** &gt;&gt; **Preferences**
* [ ] เข้าเมนู File &gt;&gt; Preferences

![&#xE40;&#xE02;&#xE49;&#xE32;&#xE40;&#xE21;&#xE19;&#xE39; File &amp;gt;&amp;gt; Preferences](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction4.png)

* จะขึ้นหน้าต่าง Preferences ให้สังเกตุในช่อง Additional Board Manger URLs: หน้าต่าง Preferences

  ในส่วนของ Additional Board Manger บทความนี้ผมจะใช้ Boards Manager ของ Community ESP32

![&#xE2B;&#xE19;&#xE49;&#xE32;&#xE15;&#xE48;&#xE32;&#xE07; Preferences](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction5.JPG)

### แนะนำให้ใช้ Stable Version

{% hint style="success" %}
### [ลิงค์บน Github](https://github.com/espressif/arduino-esp32/blob/master/docs/arduino-ide/boards_manager.md)
{% endhint %}

![](../../.gitbook/assets/image%20%2822%29.png)

* ใส่ URL &gt;&gt; ลงใน Addition Board Manager URLs: ดังนี้ 

```text
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
```

* วาง Link ลงใน Boards Manager URLs:

  จากนั้นกด OK

![](../../.gitbook/assets/image%20%2831%29.png)

* ไปที่ Menu Tools &gt;&gt; Boar: “Arduino…” &gt;&gt; Board Manager…
* เลือก Boards Manager...

![](../../.gitbook/assets/image%20%2815%29.png)

* จะขึ้นหน้าต่าง Boards Manager เลือก Type เป็น Contributed หน้าต่าง Boards Manager

  * จะแสดง Boards ของ ESP32 เลือกเวอร์ชัน 1.0.3 หรือใหม่กว่าในอนาคต Boards และกด Install

  Install Board ESP32

![](../../.gitbook/assets/image%20%288%29.png)

Download Boards ESP32

* แล้วรอ สัก 2-3 ครู่ ตัวโปรแกรมจะโหลด Boards ESP32 ให้ ขนาดไฟล์ประมาณ 150 MB และติดตั้งให้เอง

![](../../.gitbook/assets/image%20%2818%29.png)

#### เมื่อเราติดตั้งบอร์ด ESP8266 เสร็จเรียบร้อยแล้ว ให้ปิดโปรแกรม Arduino IDE ก่อน แล้วจึงเปิดขึ้นมาใหม่

* เมื่อเปิดโปรแกรม Arduino IDE ขึ้นมาใหม่แล้ว ให้ลองเลือกไปที่ Menu Tools &gt;&gt; Board: “…..” ซึ่งจะพบว่า มี Menu สำหรับเลือกใช้งาน ESP32 กับ Arduino IDE ขึ้นมาให้เลือกใช้งานแล้วครับ

#### Board ESP32 ถูกเพิ่มเข้ามา

![](../../.gitbook/assets/image%20%2812%29.png)



ซึ่ง หมวดของ ESP8266 Modules นั้นจะมีบอร์ดให้เลือกใช้งานอยู่ด้วยกันหลายบอร์ด ที่มีจำหน่ายทั่ว ๆ ไป เช่น

* ESP32 Dev Module
* ESP32 Wrover Module
* TTGO T1
* Nano32
* Node32s
* NodeMCU-32S

### ซี่งนี้ที่นี้เราเบือกบอร์ด เพื่อใช้งานบอร์ด KB32-FT

> ## ESP32 Dev Module







