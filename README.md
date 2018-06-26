# StratifyOS-CMSIS
StratifyOS CMSIS Library (Pulls and Builds ARM CMSIS for Stratify SDK)


## Building and installing:

```
git clone https://github.com/StratifyLabs/StratifyOS-CMSIS.git
cd StratifyOS-CMSIS
cmake -P ./stratify-cmsis.cmake
mkdir cmake_arm
cd cmake_arm
cmake ..
cmake --build . --target install
```
