// Make sure the Adafruit_GFX and Adafruit_ST7789 libraries are installed
#include <SPI.h>
#include "LCD_Driver.h"
#include "GUI_Paint.h"
#include "image.h"
#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>

// Define the pins for the display
#define TFT_CS        10
#define TFT_RST       8
#define TFT_DC        7

// Create an instance of the display object
Adafruit_ST7789 display = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup()
{
    // Initialize the display
    Serial.begin(9600);
    display.init(240, 280);
    display.setRotation(2);
    display.fillScreen(ST77XX_BLACK);
}

// Position variables
int diffX = 20;
int diffY = 35;

// LEFT EYE position functions
void left_eye_center()
{
    display.fillScreen(ST77XX_BLACK);
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2, 90, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2, 80, ST77XX_BLACK);
    display.fillCircle(LCD_WIDTH/2+23, LCD_HEIGHT/2-21, 30, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2-23, LCD_HEIGHT/2+21, 10, ST77XX_WHITE);
}

void left_eye_left()
{
    // Clear screen
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2, LCD_HEIGHT/2, ST77XX_BLACK);

    // Draw new eye
    display.fillCircle(LCD_WIDTH/2 - diffX, LCD_HEIGHT/2, 90, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2 - diffX, LCD_HEIGHT/2, 80, ST77XX_BLACK);
    display.fillCircle(LCD_WIDTH/2+23 - diffX, LCD_HEIGHT/2-21, 30, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2-23 - diffX, LCD_HEIGHT/2+21, 10, ST77XX_WHITE);
}

void left_eye_right()
{
    // Clear screen
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2, LCD_HEIGHT/2, ST77XX_BLACK);

    // Draw new eye
    display.fillCircle(LCD_WIDTH/2 +  diffX, LCD_HEIGHT/2, 90, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2 + diffX, LCD_HEIGHT/2, 80, ST77XX_BLACK);
    display.fillCircle(LCD_WIDTH/2+23 + diffX, LCD_HEIGHT/2-21, 30, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2-23 + diffX, LCD_HEIGHT/2+21, 10, ST77XX_WHITE);
}

void left_eye_up()
{
    // Clear screen
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2, LCD_HEIGHT/2, ST77XX_BLACK);

    // Draw new eye
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2 - diffY, 90, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2 - diffY, 80, ST77XX_BLACK);
    display.fillCircle(LCD_WIDTH/2+23, LCD_HEIGHT/2-21 - diffY, 30, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2-23, LCD_HEIGHT/2+21 - diffY, 10, ST77XX_WHITE);
}

void left_eye_down()
{
    // Clear screen
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2, LCD_HEIGHT/2, ST77XX_BLACK);

    // Draw new eye
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2 + diffY, 90, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2 + diffY, 80, ST77XX_BLACK);
    display.fillCircle(LCD_WIDTH/2+23, LCD_HEIGHT/2-21 + diffY, 30, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2-23, LCD_HEIGHT/2+21 + diffY, 10, ST77XX_WHITE);
}

// RIGHT EYE position functions
void right_eye_center()
{
    display.fillScreen(ST77XX_BLACK);
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2, 90, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2, 80, ST77XX_BLACK);
    display.fillCircle(LCD_WIDTH/2-23, LCD_HEIGHT/2-21, 30, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2+23, LCD_HEIGHT/2+21, 10, ST77XX_WHITE);
}

void right_eye_left()
{
    // Clear screen
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2, LCD_HEIGHT/2, ST77XX_BLACK);

    // Draw new eye
    display.fillCircle(LCD_WIDTH/2 - diffX, LCD_HEIGHT/2, 90, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2 - diffX, LCD_HEIGHT/2, 80, ST77XX_BLACK);
    display.fillCircle(LCD_WIDTH/2-23 - diffX, LCD_HEIGHT/2-21, 30, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2+23 - diffX, LCD_HEIGHT/2+21, 10, ST77XX_WHITE);
}

void right_eye_right()
{
    // Clear screen
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2, LCD_HEIGHT/2, ST77XX_BLACK);

    // Draw new eye
    display.fillCircle(LCD_WIDTH/2 + diffX, LCD_HEIGHT/2, 90, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2 + diffX, LCD_HEIGHT/2, 80, ST77XX_BLACK);
    display.fillCircle(LCD_WIDTH/2-23 + diffX, LCD_HEIGHT/2-21, 30, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2+23 + diffX, LCD_HEIGHT/2+21, 10, ST77XX_WHITE);
}

void right_eye_up()
{
    // Clear screen
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2, LCD_HEIGHT/2, ST77XX_BLACK);

    // Draw new eye
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2 - diffY, 90, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2 - diffY, 80, ST77XX_BLACK);
    display.fillCircle(LCD_WIDTH/2-23, LCD_HEIGHT/2-21 - diffY, 30, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2+23, LCD_HEIGHT/2+21 - diffY, 10, ST77XX_WHITE);
}

void right_eye_down()
{
    // Clear screen
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2, LCD_HEIGHT/2, ST77XX_BLACK);

    // Draw new eye
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2 + diffY, 90, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2, LCD_HEIGHT/2 + diffY, 80, ST77XX_BLACK);
    display.fillCircle(LCD_WIDTH/2-23, LCD_HEIGHT/2-21 + diffY, 30, ST77XX_WHITE);
    display.fillCircle(LCD_WIDTH/2+23, LCD_HEIGHT/2+21 + diffY, 10, ST77XX_WHITE);
} 

// Main loop
void loop()
{
#if 1
    // Testing left eye
    left_eye_center();
    delay(1000);
    left_eye_left();
    delay(1000);
    left_eye_right();
    delay(1000);
    left_eye_up();
    delay(1000);
    left_eye_down();
    delay(1000);

    // Testing right eye
    /*
    right_eye_center();
    delay(1000);
    right_eye_left();
    delay(1000);
    right_eye_right();
    delay(1000);
    right_eye_up();
    delay(1000);
    right_eye_down();
    delay(1000);
    */
#endif
}


/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
