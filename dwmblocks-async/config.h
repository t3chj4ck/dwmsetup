#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0
#define SCRIPT_DIR "/home/t3chj4ck/script/" 
#define BLOCKS(X) \
    X("", "~/script/weather.sh", 600, 0) \
    X("Bri: ", "~/script/backlight.sh", 0, 12) \
    X("Vol: ", "~/script/get_vol.sh", 0, 11) \
    X("WIFI: ", "~/script/wifi_info.sh", 6000, 10) \
    X("CPU: ", "~/script/cpu_usage.sh", 30, 0) \
    X("Pow: ", "~/script/power_status.sh", 30, 0) \
    X("Bat: ", "~/script/bat_capacity.sh", 30, 0) \
    X("Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 30, 0) \
    X("", "date '+%b %d (%a) %I:%M%p'", 5, 0)
#endif  // CONFIG_H
