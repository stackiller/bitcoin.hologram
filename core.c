// stantard
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// for terminal size
#include <sys/ioctl.h>
#include <unistd.h>
#include <time.h>

// definitions
#include "bits.h"

// struct to flags
struct flags {
  char color[8];
};

// WinSize structure
struct winsize return_wSize(void) {
  struct winsize w;
  // ioctl call
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

  return w;
}

// Delay Function
void delay(float delay_num) {
  // convert time to miliseconds
  float delay_milisec = delay_num * 1000;

  // get time of processor
  clock_t time = clock();
  
  // delay loop
  while(clock() < time + delay_milisec * 1000);
}

// function to return struct(flags)
struct flags return_setFlags(int color) {
  struct flags f;

  // reset buffers
  memset(f.color, 0x0, 8);
  
  // switch case of colors
  switch(color) {
    case 0:
      strcpy(f.color, fgBlack);
      break;
    case 1:
      strcpy(f.color, fgRed);
      break;
    case 2:
      strcpy(f.color, fgGreen);
      break;
    case 3:
      strcpy(f.color, fgYellow);
      break;
    case 4:
      strcpy(f.color, fgBlue);
      break;
    case 5:
      strcpy(f.color, fgMagenta);
      break;
    case 6:
      strcpy(f.color, fgCyan);
      break;
    case 7:
      strcpy(f.color, fgWhite);
      break;
  }

  // return struct
  return f;
}

// Center Picture
void clear(void) {
  // define winSize struct
  struct winsize w;
  w = return_wSize();

  // clear screen
  for (int i=0; i < ((w.ws_row / 10)); i++) {
    printf("\n");
  }
}

// Usage mode
void usage(void) {
  // print how to use
  printf("./bitcoin_art <color: 0-7> <invert: 0 = false, 1 = true >\n");
}
