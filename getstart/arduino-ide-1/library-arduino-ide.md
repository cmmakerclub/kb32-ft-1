# KB32-FT Library Install

## ขั้นตอนการติดตั้งโปรแกรมตัวอย่าง Library <a id="&#xE02;&#xE31;&#xE49;&#xE19;&#xE15;&#xE2D;&#xE19;&#xE01;&#xE32;&#xE23;&#xE15;&#xE34;&#xE14;&#xE15;&#xE31;&#xE49;&#xE07;&#xE42;&#xE1B;&#xE23;&#xE41;&#xE01;&#xE23;&#xE21;&#xE15;&#xE31;&#xE27;&#xE2D;&#xE22;&#xE48;&#xE32;&#xE07;-library"></a>

การติดตั้งโปรแกรมตัวอย่าง คือ การลงโปรแกรมเสริม หรือ Code สำหรับใช้งานกับ Shield โมดูล หรือ เซนเซอร์ต่าง ๆ ที่ผู้พัฒนาได้มีการพัฒนาให้บอร์ดสามารถใช้งานได้กับอุปกรณ์ต่าง ๆ ที่มีออกมาจำหน่ายอย่างต่อเนื่องซึ่งจำเป็นกับผู้เริ่มต้น เนื่องจากทำให้ผู้ใช้งานประหยัดเวลา มีความสะดวกและ ง่ายมากยิ่งขึ้นในการพัฒนา โดยมีการเพิ่ม Library อยู่ 2 แบบหลักคือ

1. การเพิ่ม Library โดยวิธี Manage Libraries...
2. การเพิ่ม Library โดยวิธี Add.ZIP Library...

โดยการเลือกใช้งาน เมนู Sketch &gt;&gt; Include Library &gt;&gt; ... ดังรูป ![Sketch &amp;gt;&amp;gt; Include Library &amp;gt;&amp;gt;](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction17.JPG)

**1. การเพิ่ม Library โดยวิธี Manage Libraries...** เป็นการเพิ่ม Library โดยตรงจากเซิฟเวอร์ของทาง Arduino ซึ่ง Manage Libraries จากผู้พัฒนาก่อนจะถูกอัพขึ้นเซิฟเวอร์ของ Arduino จะมีคนคอยตรวจสอบก่อนเสมอ จึงเป็นสากลมากกว่าการลงแบบ Manual และใช้งานได้จริง

* ทดลองลงโปรแกรมตัวอย่างจาก Library ของ ESPert แบบ Manage Libraries... จะมีลักษณะคล้ายกับการลง Broad ESP8266 ข้างต้น

  ```text
  ซึ่ง "จำเป็นต้องเชื่อมต่อคอมพิวเตอร์กับ Internet ก่อนการเพิ่ม Library โดยวิธีนี้เสมอ"
  ```

* โดยการเลือกใช้งานเมนูSketch &gt;&gt; Include Library &gt;&gt; Manage Libraries

![&#xE40;&#xE25;&#xE37;&#xE2D;&#xE01;&#xE40;&#xE21;&#xE19;&#xE39; Manage Library](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction18.JPG)Sketch &gt;&gt; Include Library &gt;&gt;

* โปรแกรมจะแสดงหน้าต่างใหม่ขึ้นมาดังรูป

![&#xE2B;&#xE19;&#xE49;&#xE32;&#xE15;&#xE48;&#xE32;&#xE07; Library Manager](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction19.JPG)เลือกเมนู Manage Library

* ในช่องค้นหาใส่ Library ที่ต้องการเพิ่ม ในที่นี้จะค้นหา Library ของ ESPert ตามรูปที่เน้นคำและ คลิกเลือกโปรแกรมที่ค้นหา

![&#xE04;&#xE49;&#xE19;&#xE2B;&#xE32;&#xE42;&#xE1B;&#xE23;&#xE41;&#xE01;&#xE23;&#xE21;&#xE15;&#xE31;&#xE27;&#xE2D;&#xE22;&#xE48;&#xE32;&#xE07; ESPert](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction20.JPG)หน้าต่าง Library Manager

* เลือก Version ล่าสุด หรือ ในขณะนี้อัพเดทล่าสุดที่ Version 1.2.5

![&#xE40;&#xE25;&#xE37;&#xE2D;&#xE01;&#xE40;&#xE27;&#xE2D;&#xE23;&#xE4C;&#xE0A;&#xE31;&#xE19;&#xE42;&#xE1B;&#xE23;&#xE41;&#xE01;&#xE23;&#xE21;&#xE15;&#xE31;&#xE27;&#xE2D;&#xE22;&#xE48;&#xE32;&#xE07;&#xE25;&#xE48;&#xE32;&#xE2A;&#xE38;&#xE14;](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction21.JPG)ค้นหาโปรแกรมตัวอย่าง ESPert

* กดปุ่ม Install เพื่อเริ่มติดตั้ง Library ลงบน Arduino IDE

![&#xE01;&#xE14; Install &#xE42;&#xE1B;&#xE23;&#xE41;&#xE01;&#xE23;&#xE21;&#xE15;&#xE31;&#xE27;&#xE2D;&#xE22;&#xE48;&#xE32;&#xE07;](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction22.JPG)เลือกเวอร์ชันโปรแกรมตัวอย่างล่าสุด

* โปรแกรมจะทำการติดตั้ง Library อัตโนมัติจาก Sever ผ่าน Internet

![&#xE14;&#xE32;&#xE27;&#xE19;&#xE4C;&#xE42;&#xE2B;&#xE25;&#xE14;&#xE42;&#xE1B;&#xE23;&#xE41;&#xE01;&#xE23;&#xE21;&#xE15;&#xE31;&#xE27;&#xE2D;&#xE22;&#xE48;&#xE32;&#xE07;&#xE2D;&#xE31;&#xE15;&#xE42;&#xE19;&#xE21;&#xE31;&#xE15;&#xE34;](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction23.JPG)กด Install โปรแกรมตัวอย่าง

* โปรแกรมจะแสดงข้อความ INSTALLED ตรงไฮไลท์ตามรูปแสดงว่าเพิ่มโปรแกรมตัวอย่างเรียบร้อยแล้ว

![&#xE2B;&#xE19;&#xE49;&#xE32;&#xE15;&#xE48;&#xE32;&#xE07;&#xE41;&#xE2A;&#xE14;&#xE07;&#xE01;&#xE32;&#xE23;&#xE17;&#xE33;&#xE07;&#xE32;&#xE19;&#xE2A;&#xE21;&#xE1A;&#xE39;&#xE23;&#xE13;&#xE4C;](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction24.JPG)ดาวน์โหลดโปรแกรมตัวอย่างอัตโนมัติ

* การเรียกใช้งานโปรแกรมตัวอย่างโดยเข้าไปที่

  File &gt;&gt; Examples &gt;&gt; ESPert &gt;&gt; ....

![&#xE42;&#xE1B;&#xE23;&#xE41;&#xE01;&#xE23;&#xE21;&#xE15;&#xE31;&#xE27;&#xE2D;&#xE22;&#xE48;&#xE32;&#xE07;&#xE17;&#xE35;&#xE48;&#xE40;&#xE1E;&#xE34;&#xE48;&#xE21;&#xE40;&#xE02;&#xE49;&#xE32;&#xE21;&#xE32;](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction25.JPG)หน้าต่างแสดงการทำงานสมบูรณ์

**Library ที่จำเป็นกับ ESPresso Lite V2.0**

| Library | by | current version |
| :--- | :--- | :--- |
| Adafruit NeoPixel | Adafruit | 1.0.5 |
| ArduinoJson | Benoit Blanchon | 5.5.0 |
| DHT sensor library | Adafruit | 1.2.3 |
| ESP8266 Oled Driver for SSD1306 | Daniel Eichborn | 3.0.0 |
| DHT sensor library | Adafruit | 1.2.3 |
| HttpClient | Adrian McEwen | 2.2.0 |
| PubSubClient | Nick O'Leary | 2.6.0 |

ควรอัพเดท Board Manager และ Library ให้เป็นเวอร์ชันล่าสุดอยู่เสมอ

