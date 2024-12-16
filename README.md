# esp32-espidf-base

[Reference manual ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/index.html)

## Installation:

### Linux:
```
# Step 1. Install Prerequisites
sudo apt-get install git wget flex bison gperf python3 python3-pip python3-venv cmake ninja-build ccache libffi-dev libssl-dev dfu-util libusb-1.0-0

# Step 2. Get ESP-IDF
mkdir -p ~/esp
cd ~/esp
git clone https://github.com/espressif/esp-idf.git --depth=1

# Step 3. Set up the Tools
cd ~/esp/esp-idf
./install.sh all

# Step 4. Set up the Environment Variables
alias get_idf='. $HOME/esp/esp-idf/export.sh' # Set in ~/.zshrc

# Step 5. Open VS-Code and Install ESP-IDF

# DONE! You are ready to use
```

### MAC (Homebrew)
```
# Step 1. Install Prerequisites
brew install cmake ninja dfu-util
brew install python3

# Step 2. Get ESP-IDF
mkdir -p ~/esp
cd ~/esp
git clone https://github.com/espressif/esp-idf.git

# Step 3. Set up the Tools
cd ~/esp/esp-idf
./install.sh all

# Step 4. Set up the Environment Variables
alias get_idf='. $HOME/esp/esp-idf/export.sh' # Set in ~/.zshrc
```

---
---

## Useful commands:

* `PORT` on MAC: /dev/cu.usbxxx

### Set target IMPORTANT: based on the board you are using!!!
idf.py set-target esp32-s3

### Menu config
idf.py menuconfig

### Build project
idf.py build

### Flash binary
idf.py -p `PORT` flash

### Open Monitor
idf.py -p `PORT` [-b `BAUD`] monitor

### Flash and Monitor
idf.py -p `PORT` flash monitor

### Add BSP (Board support package)
idf.py add-dependency <dependency>

### Flash Erase
idf.py -p `PORT` erase-flash

## OTA Erase
idf.py -p `PORT` erase-otadata

