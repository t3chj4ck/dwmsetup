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
	X("", SCRIPT_DIR"weather.sh", 600, 0) \
	X("", SCRIPT_DIR"cpu_usage.sh", 10, 0) \
	X("", SCRIPT_DIR"power_status.sh", 10, 0) \
	X("", SCRIPT_DIR"bat_capacity.sh", 60, 0) \
    X("", SCRIPT_DIR"wifi_info.sh", 0, 3) \
	X("", SCRIPT_DIR"clock.sh", 10, 0)

#endif  // CONFIG_H
