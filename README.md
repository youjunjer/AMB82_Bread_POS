# AMB82_Bread_POS
AMB82是一個能執行YOLO TINY的Arduino具有500萬畫素鏡頭的主控版，相關規格可以參閱官方網址：https://www.amebaiot.com/zh/amebapro2-amb82-mini-arduino-getting-started/

主要規格簡略說明如下：
  
    – Arm v8M @500MHz(Max.)
  
    – Integrated with 802.11 a/b/g/n Wi-Fi
  
    – Bluetooth Low Energy (BLE) 5.1
  
    – Support Secure boot & Crypto Engine
  
    – ISP Integrated
  
    – H.264/H.265 encoder up to 5MP or 1080p@45fps
  
    – Integrated Intelligent Engine @0.4 TOPS
  
    – Up to 128MB RAM(Max.)
  
    – Low Power design

購買連結：https://shopee.tw/product/5742314/18081103073/

本次我們介紹如何將YOLO模型安裝到AMB82裡，來執行物件辨識，以麵包辨識為例來說明。

一、YOLO-TINY模型訓練：本次我們選擇使用YOLOv4-TINY模型，將訓練完成的weight檔及cfg檔，壓縮成為一個zip檔
![image](https://github.com/youjunjer/AMB82_Bread_POS/assets/40359899/27797863-d2de-4e49-8935-514b215d7d7c)

二、模型轉換NB檔：本部份進入官方網站，將步驟一的壓縮檔上傳，等候約3-5分鐘即可收到轉換完成的NB檔。

註冊並登入amebaiot網站，線上轉換網址：https://www.amebaiot.com/zh/amebapro2-ai-convert-model/

![image](https://github.com/youjunjer/AMB82_Bread_POS/assets/40359899/3770472b-2dbb-4084-8ae5-985db4c44b2a)

三、收到NB檔案下載連結

![image](https://github.com/youjunjer/AMB82_Bread_POS/assets/40359899/09475c3a-9ad3-4e2e-98f6-59abb65e4ca2)

四、將步驟三的NB檔案取代掉原本YOLOv4的NB檔

原始NB檔案位置一般在C:\Users\你的Win帳號\AppData\Local\Arduino15\packages\realtek\hardware\AmebaPro2\版本\variants\common_nn_models

![image](https://github.com/youjunjer/AMB82_Bread_POS/assets/40359899/fa9f942d-51cb-4a95-9c85-0ae293289f43)

先將原本的yolov4_tiny.nb備份後，將步驟三下載的NB檔複製過來並更名為「yolov4_tiny.nb」

五、將程式上傳即可完成

六、實際執行畫面
![image](https://github.com/youjunjer/AMB82_Bread_POS/assets/40359899/9d72e4f6-c3d2-4f22-adf2-79b9d31e3a6f)
