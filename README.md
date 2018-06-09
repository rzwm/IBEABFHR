Automatically enhance image brightness based on fast haze removal[1]. Support 24-bit RGB image and 8-bit gray image.

## Development Environment

+ Microsoft Visual Studio Community 2017
+ Windows 10
+ OpenCV 3.3.0
+ x64

## Getting Started

1. Open `IBEABFHR.sln` with Microsoft Visual Studio 2017;
2. Config OpenCV according this [Install OpenCV with Visual Studio](https://www.opencv-srf.com/2017/11/install-opencv-with-visual-studio.html);
3. Press `Ctrl+B` to build program;
4. Press `F5` to run program;

## Run Time
resolution | type | time
---|---|---
1024x768 | gray | 8.77ms
1024x768 | color | 16.24ms
1920x1080 | gray | 22.61ms
1920x1080 | color | 40.60ms
4160x2340 | gray | 104.57ms
4160x2340 | color | 186.14ms

## Adjust Parameters

There has two variable parameters :

1. `radius` in step 3, as the box filter radius. This parameter should not too small, otherwise result image will has halo artifact.
2. `p` in step 5, which controlls the result image's brightness. Bigger is it, brighter is the result image.

## Effect Display
![2.jpg](https://github.com/rzwm/IBEABFHR/raw/master/images/2.jpg)
![2_brighten.jpg](https://github.com/rzwm/IBEABFHR/raw/master/images/2_brighten.jpg)
![2_gray.jpg](https://github.com/rzwm/IBEABFHR/raw/master/images/2_gray.jpg)
![2_gray_brighten.jpg](https://github.com/rzwm/IBEABFHR/raw/master/images/2_gray_brighten.jpg)

## Reference

[1] 刘倩, 陈茂银, 周东华. 基于单幅图像的快速去雾算法[C]//25th Chinese Control and Decision Conference, 2013: 3780-3785. 
