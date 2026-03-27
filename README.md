# mulsys.h - Cross-Platform System Command Execution

This header file provides functions for executing system commands in a cross-platform manner. It allows you to run different commands based on the operating system (Windows, Linux, macOS/Darwin, Android, Unix).

The code was written on 2022 February 26 by me. Since the code still works well and provides the functions I need, I haven't modified anything at all in the past four years. If you have any suggestions or improvements, feel free to submit a PR or open an issue.

I hope this simple code is helpful for those only needs basic system detection and command execution.

## Functions

* **`crosscmd(const char* Windows_command, const char* Darwin_command, const char* Linux_Unix_command)`:**  Executes the appropriate command based on the detected operating system.
  * `Windows_command`: Command to execute on Windows.
  * `Darwin_command`: Command to execute on macOS/Darwin.
  * `Linux_Unix_command`: Command to execute on Linux or Unix.
* **`wlcmd(const char* Windows_command, const char* Linux_command)`:** Executes a command on Windows or Linux.
  * `Windows_command`: Command to execute on Windows.
  * `Linux_command`: Command to execute on Linux.
* **`wincmd(const char* command)`:**  Executes a command specifically on Windows.
  * `command`: Command to execute.
* **`lnxcmd(const char* command)`:** Executes a command specifically on Linux.
  * `command`: Command to execute.
* **`applecmd(const char* command)`:** Executes a command specifically on macOS/Darwin.
  * `command`: Command to execute.
* **`clearscr()`:** Clears the console screen, using the appropriate command for the current operating system.
* **`isSys(const char* system_name)`:** Checks if the current system matches a given name.
  * `system_name`:  String representing the system to check for (e.g., "win", "linux", "apple", "android", "unix").
  * Returns `true` if the system matches, `false` otherwise. Includes helpful information when an invalid system name is passed.

## Usage

```cpp
#include "mulsys.h"
// mulsys.h has been included <stdlib.h> and <stdio.h>

int main() {
  // Example using crosscmd:
  crosscmd("dir", "ls -l", "ls -l");

  // Example using wincmd:
  wincmd("echo Hello from Windows");

  // Example using isSys:
  if (isSys("linux")) {
    printf("Running on Linux!\n");
  } else {
    printf("Not running on Linux.\n");
  }

  return 0;
}
```

## Operating System Support

- Windows (`_WIN32`)
- macOS/Darwin (`__APPLE__`)
- Linux (`__linux__`)
- Unix (`__unix__`)
- Android (`__ANDROID__`)

---

<small>This README was initially drafted by local `gemma3:12b`, manually refined by the author, with a final AI-assisted grammar review to ensure clarity.</small>
