### Qt 添加 opencv_with contrib 库

用已用MinGW编译好的 opencv_with contrib 库文件-地址：[huihut/OpenCV-MinGW-Build at OpenCV-4.5.0-with-contrib (github.com)](https://github.com/huihut/OpenCV-MinGW-Build/tree/OpenCV-4.5.0-with-contrib)

1. 环境变量添加opencv库文件中的bin文件夹路径

2. Qt的配置文件.pro中添加opencv_contrib库文件路径

   ```c++
   #Opencv库文件路径添加
   INCLUDEPATH += D:\OpenCV-MinGW-Build-OpenCV-4.5.0-with-contrib\include
   LIBS += D:\OpenCV-MinGW-Build-OpenCV-4.5.0-with-contrib\x64\mingw\lib\libopencv_*.a
   ```

### 显示效果

![image-20220211235730478](https://cdn.jsdelivr.net/gh/Code-Newborn/PicBed@main/img/Typora/typora-user-images/image-20220211235730478-20220211235800.png)