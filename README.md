# creating-a-window-using-SDL-and-openGL
This is the result of following the video tutorial of http://youtube.com/user/thebennybox (openGL tutorials)
The video's URL: https://www.youtube.com/watch?v=DkiKgQRiMRU

How I compiled this :
g++ main.cpp display.h display.cpp $(pkg-config --cflags --libs gl) -lGLEW -lSDL2 -o window
