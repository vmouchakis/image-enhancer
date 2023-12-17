# image-enhancer
**A simple c++ script to upscale an image**

### Create and activate virtual environment
```sh
virtualenv venv
source venv/bin/activate
pip install numpy
// make sure to activate the venv before installing numpy
```


### Clone repos for opencv and opencv_extra_modules
```sh
git clone https://github.com/opencv/opencv.git
git clone https://github.com/opencv/opencv_contrib.git
```

### Install opencv

#### For MacOs
```sh
brew install opencv
```

#### For Ubuntu
```sh
sudo apt update
sudo apt install libopencv-dev
```

#### Build from source
See [here](https://github.com/vmouchakis/configuration/blob/main/install_opencv.sh).


### Compile file

#### Using CMake
```sh
chmod u+x compile.sh # run this command only once
./compile.sh
```

#### Using g++
```sh
g++ -std=c++17 -o out src/main.cpp $(pkg-config --cflags --libs opencv4)
./out
```

## To do
- use deep learning models to enhance images
- use techniques like:
    - Sharpening
    - Constrast Enhancement
    - Denoising
    - Super-Resolution
    - HDR Imaging
    - Color Correction