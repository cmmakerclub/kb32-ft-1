# IOS Install App and Connect Drone

## **`IOS`**

### **ขั้นตอนที่ 1**

* ติดตั้ง App RemoteXY จาก app store แบบฟรีตามรูป

![](../../../.gitbook/assets/image%20%28169%29.png)

### **ขั้นตอนที่ 2**

* สลับหน้าจอเพื่อเข้าไปเชื่อมต่อ wifiตั้งค่าการเชื่อมต่อ wifi ของระบบโดยเลือก

{% hint style="warning" %}
อย่าลืมเสียบปลั๊กแบตเตอรี่ Drone และเปิดสวิตซ์ ON ให้ข้อความแสดงบนจอว่าพร้อมทำงาน
{% endhint %}

{% hint style="warning" %}
อย่าลืมเปิด Wifi ของอุปกรณ์ที่จะเชื่อมต่อ
{% endhint %}

* เชื่อมต่อ Wifi ของ Drone ที่ KB32-FT ปล่อย AP ออกมา \(สามารถแก้ไขได้ภายหลังใน Code\)

{% hint style="success" %}
SSID : Drone  Pass : 12345678
{% endhint %}

![](../../../.gitbook/assets/image%20%28160%29.png)

### **ขั้นตอนที่ 3**

* เปิด App RemoteXY จะปรากฏหน้าต่างขอสิทธ์เข้าถึง Bluetooth ได้แต่เราใช้ Wifi ขั้นตอนนี้ข้ามได้เลย

![](../../../.gitbook/assets/image%20%28153%29.png)

* หลังจากนั้นจะปรากฏหน้าต่างว่างเปล่าตามรูป และ Add new device

![](../../../.gitbook/assets/image%20%28164%29.png)

### **ขั้นตอนที่ 4**

* ตั้งค่าการเชื่อมต่อ wifi ของระบบโดยเลือก Ethernet

{% hint style="info" %}
การเชื่อมต่อแบบ Wi-Fi บน IOS ยังทำไม่ได้เนื่องจากมีการ Update policy จึงใช้การเชื่อมต่อผ่าน IP แทน
{% endhint %}

![](../../../.gitbook/assets/image%20%28155%29.png)

### **ขั้นตอนที่ 5**

* แก้ไข IP ของ App ให้เข้าไปที่ IP Drone จากนั้นกด Connect

{% hint style="warning" %}
192.168.4.1
{% endhint %}

![](../../../.gitbook/assets/image%20%28161%29.png)

### **ขั้นตอนที่ 6**

* จากนั้น App จะ Load config หน้าต่าง UI ออกมา เป็น Joystick ควบคุม Drone ของเรานั่นเอง

![](../../../.gitbook/assets/image%20%28156%29.png)

#### หน้าตา UI Joystick ควบคุม Drone ของ App Android เดียวเราจะมาเรียนรู้วิธีควบคุมกันต่อใน หน้าถัดไป...

![](../../../.gitbook/assets/image%20%28151%29.png)



