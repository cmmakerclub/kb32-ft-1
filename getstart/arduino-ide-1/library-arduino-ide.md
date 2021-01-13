# KB32-FT Library Install

## ขั้นตอนการติดตั้งโปรแกรมตัวอย่าง Library <a id="&#xE02;&#xE31;&#xE49;&#xE19;&#xE15;&#xE2D;&#xE19;&#xE01;&#xE32;&#xE23;&#xE15;&#xE34;&#xE14;&#xE15;&#xE31;&#xE49;&#xE07;&#xE42;&#xE1B;&#xE23;&#xE41;&#xE01;&#xE23;&#xE21;&#xE15;&#xE31;&#xE27;&#xE2D;&#xE22;&#xE48;&#xE32;&#xE07;-library"></a>

การติดตั้งโปรแกรมตัวอย่าง คือ การลงโปรแกรมเสริม หรือ Code สำหรับใช้งานกับ Shield โมดูล หรือ เซนเซอร์ต่าง ๆ ที่ผู้พัฒนาได้มีการพัฒนาให้บอร์ดสามารถใช้งานได้กับอุปกรณ์ต่าง ๆ ที่มีออกมาจำหน่ายอย่างต่อเนื่องซึ่งจำเป็นกับผู้เริ่มต้น เนื่องจากทำให้ผู้ใช้งานประหยัดเวลา มีความสะดวกและ ง่ายมากยิ่งขึ้นในการพัฒนา โดยมีการเพิ่ม Library อยู่ 2 แบบหลักคือ

1. การเพิ่ม Library โดยวิธี Manage Libraries... \(สามารถติดตั้งได้ผ่านช่องทาง Online\)
2. การเพิ่ม Library โดยวิธี Add.ZIP Library...

**โดยการเลือกใช้งาน เมนู Sketch &gt;&gt; Include Library &gt;&gt; ... ดังรูป** 

![Sketch &amp;gt;&amp;gt; Include Library &amp;gt;&amp;gt;](https://nazt-cmmc.gitbooks.io/cmmc-iot-books/content/images/introduction17.JPG)

## **การเพิ่ม Library โดยวิธี Add .ZIP Libraries...** 

เป็นการเพิ่ม Library ของทางผู้พัฒนาบอร์ด KB32-FT ซึ่ง .Zip Libraries ที่แนะนำจะมี 2 ตัวอย่างให้ใช้งานคือ ตัว Library ที่เกี่ยวกับจอแสดงผล ซึ่งจอแล้วสามารถใช้ Library ปกติของ Arduino ได้เลย

### 1.Library จอ LCD TFT ลิงค์ [Download](https://github.com/kkmonster/TFT_eSPI_KB32)

{% embed url="https://github.com/kkmonster/TFT\_eSPI\_KB32" %}

### 2.Library จอ LED Matrix ลิงค์ [Download](https://github.com/kkmonster/KB32_LED_Matrix)

{% embed url="https://github.com/kkmonster/KB32\_LED\_Matrix" %}

* [ ] ตัวอย่างหน้าต่าง Download Library แบบ .ZIP

![](../../.gitbook/assets/image%20%2856%29.png)

### 3.วิธีการติดตั้ง Library แบบ Add .ZIP

* [ ] โดยการเลือกใช้งานเมนูSketch &gt;&gt; Include Library &gt;&gt; Manage Libraries

Sketch &gt;&gt; Include Library &gt;&gt;

* [ ] โปรแกรมจะแสดงหน้าต่างใหม่ขึ้นมาดังรูป เลือกเมนู Add .ZIP Library...

![](../../.gitbook/assets/image%20%2833%29.png)

* [ ] เลือกไฟล์ที่ Download จามาก Github ไฟล์ .ZIP แล้วกดปุ่ม Open

![](../../.gitbook/assets/image%20%2847%29.png)

* [ ] หน้าต่าง Arduino IDE จะแสดง ข้อความตามรูปด้านล่าง

![](../../.gitbook/assets/image%20%2839%29.png)

* [ ] ก่อนจะใช้งาน Library อย่าลืมเลือกบอร์ด เป็น ESP32 ก่อนเพราะฉนั้นอาจจะมองไม่เห็น Library



### 4.การเรียกใช้งานโปรแกรมตัวอย่าง

เข้าไปที่เมนู File &gt;&gt; Examples &gt;&gt; TFTeSPI\_KB32-KB32  &gt;&gt; ....

![](../../.gitbook/assets/image%20%2837%29.png)

**ตัวอย่าง Library ที่จำเป็นกับบอร์ด KB32-FT**

| Library | by | current version |
| :--- | :--- | :--- |
| Blynk | Volodymyr | 1.0.5 |

ควรอัพเดท Board Manager และ Library ให้เป็นเวอร์ชันล่าสุดอยู่เสมอ

