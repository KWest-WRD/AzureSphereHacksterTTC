#pragma once





// If your application is going to connect straight to a IoT Hub or IoT Connect, then enable this define.
//#define IOT_HUB_APPLICATION

#if !defined(IOT_HUB_APPLICATION)
#warning "Building application for no cloud connectivity"
#endif 

#ifdef IOT_HUB_APPLICATION
#warning "Building for IoT Hub or IoT Central Application"
#endif 

// Include SD1306 OLED code
// To use the OLED 
// Install a 128x64 OLED display onto the unpopulated J7 Display connector
// https://www.amazon.com/gp/product/B06XRCQZRX/ref=ppx_yo_dt_b_search_asin_title?ie=UTF8&psc=1
// Enable the OLED_SD1306 #define below
//#define OLED_SD1306

// Include Intercore Communication code
// This will enable reading the ALST19 light sensor data from the M0 application
// To exercise the inter-core communication code run the M0 application first
// Enable the M0_INTERCORE_COMMS #define below
//#define M0_INTERCORE_COMMS

// Defines how quickly the accelerator data is read and reported
#define ACCEL_READ_PERIOD_SECONDS 1
#define ACCEL_READ_PERIOD_NANO_SECONDS 0

// Enables I2C read/write debug
//#define ENABLE_READ_WRITE_DEBUG