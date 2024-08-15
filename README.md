# Socket Statistics CLI

![Version](https://img.shields.io/badge/version-1.0.0-blue)
![License](https://img.shields.io/badge/license-GPL%20v3-800080?style=flat-square)
[![Maintenance](https://img.shields.io/badge/Maintained%3F-yes-green.svg)](https://GitHub.com/Naereen/StrapDown.js/graphs/commit-activity)

### Description

**Socket Statistics CLI** is a command-line interface (CLI) tool written in C that allows users to easily monitor and filter network socket statistics without having to type complex `ss` commands manually. This tool provides a user-friendly interface with multiple menus to categorize and display TCP and UDP connections, listening sockets, summary statistics, and advanced filtering options.

### Features

- **TCP Connections Menu**: View all TCP connections, established connections, connections in specific states, and more.
- **UDP Connections Menu**: View all UDP connections and filter by port.
- **Listening Sockets Menu**: Display all listening sockets, or filter by TCP/UDP.
- **Summary & Statistics Menu**: Get overall socket summaries, TCP/UDP summaries, and detailed network statistics.
- **Advanced Filters Menu**: Apply specific filters to TCP/UDP connections, including source/destination ports and states.

### Compilation and Execution

#### Prerequisites

- GCC (GNU Compiler Collection) installed on your system.
- A Linux environment with the `ss` command available (part of the `iproute2` package).

#### Build Instructions

1. **Clone the repository**

```bash
git clone https://github.com/r-seize/SocketStatisticsCLI.git
cd SocketStatisticsCLI
```

2. **Compile the project**

```bash
make
```

2. **Run the CLI tool**

```bash
./SocketStatisticsCLI
```

2. **Clean up**

```bash
make clean
```

### Author

I created this project to simplify my work. I'm sharing it so that other people can benefit from it. I'll try to update this project regularly to add new features. 


