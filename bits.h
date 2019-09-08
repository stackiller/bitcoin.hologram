// Prototypes
// winSize structure
struct winsize return_wSize(void);
// delay function
void delay(float delay_num);
// center Picture
void clear(void);
// set Flags
struct flags return_setFlags(int color);
// usage
void usage(void);

// Foreground Colors
#define fgBlack "\e[30m"
#define fgRed "\e[91m"
#define fgGreen "\e[92m"
#define fgYellow "\e[93m"
#define fgBlue "\e[94m"
#define fgMagenta "\e[95m"
#define fgCyan "\e[96m"
#define fgWhite "\e[97m"

#define resetColors "\e[0m"

// Background Colors
#define bgBlack "\e[49m"
#define bgRed "\e[41m"
#define bgGreen "\e[42m"
#define bgYellow "\e[43m"
#define bgBlue "\e[44m"
#define bgMagenta "\e[45m"
#define bgCyan "\e[46"
#define bgWhite "\e[47m"

// Maxlen for buffers
#define max_len 2000
