# KB32-FT Board Install

### 1.กดเลือกเมนู Board Manager

![](../../.gitbook/assets/image%20%2845%29.png)

### 2.ค้นหาบอร์ด KB32-FT ในช่อง "Board name" 

![](../../.gitbook/assets/image%20%2842%29.png)

### 3.KBIDE จะแสดงบอร์ด KB32-FT สามารถติดตั้งโดยกดปุ่ม "Downlaod" ตามภาพ

![](../../.gitbook/assets/image%20%2834%29.png)

1. [ ] **เมื่อติดตั้งเสร็จแล้วกดเปลี่ยนบอร์ดตามภาพและกดปุ่ม "CHANGE BOARD"**

![](../../.gitbook/assets/image%20%2859%29.png)

* [ ] **จากนั้นโปรแกรมจะให้เคลียหน้าต่างเดิมให้กด "Confirm" ได้เลย**

![](../../.gitbook/assets/image%20%2836%29.png)

* [ ] **เมื่อเปลี่ยนบอร์ดเป็นบอร์ด  KB32-FT จะพบกับหน้าต่างบล๊อกของบอร์ด KB32-FT เพิ่มเข้ามา**

![](../../.gitbook/assets/image%20%2861%29.png)

### 5.เสียบสาย Micro USB เข้ากับบอร์ด KB32-FT และเสียบสาย USB เข้ากับคอมพิวเตอร์

* [ ] **จากนั้นลองตรวจสอบCOMPORT บนโปรแกรม KBIDE**

![](../../.gitbook/assets/image%20%2850%29.png)

* [ ] **จะมีหน้าต่าง Setup board ขึ้นมา คลิ๊กที่ Select COM port จะปรากฎหมายเลข COM...** 

![](../../.gitbook/assets/image%20%2840%29.png)

> #### แต่ละเครื่องจะไม่เหมือนกัน

### สำหรับใครที่ไม่เจอ COMPORT ลองข้ามขั้นตอนนี้ไปติดตั้ง Driver ก่อน

{% page-ref page="../../ftdi-comport.md" %}



![](../../.gitbook/assets/image%20%2838%29.png)

* [ ] **เพื่อเพิ่มความเร็วในการ Upload สามารถเปลี่ยน Serial upload baudrate เป็น 921600 ได้** 

![](../../.gitbook/assets/image%20%2858%29.png)

### 6.ทดสอบการ Upload โปรแกรมลงบนบอร์ด KB32FT

![](../../.gitbook/assets/image%20%2854%29.png)

* [ ] **จากนั้นลอง Upload โปรแกรมโดยกดปุ่ม Compile & Run บนโปรแกรม KBIDE**

![](../../.gitbook/assets/image%20%2852%29.png)

* [ ] ตัวโปรแกรมแสดงหน้าต่างเครื่องหมายถูกหลัง Compile & Run เสร็จเพียงเท่านี้ก็สามารถใช่งานได้เลย

{% page-ref page="../../ftdi-comport.md" %}



