# image-enhancer


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

### Build and install opencv
```sh
cd opencv
mkdir build && cd build
```

```sh
cmake -DOPENCV_EXTRA_MODULES_PATH=<path_to_opencv_extra_modules> \
-D BUILD_opencv_python2=OFF \
-D BUILD_ZLIB=OFF \
-D BUILD_opencv_legacy=OFF \
-D BUILD_EXAMPLES=ON \
..
```
```sh
make -j4
```
```sh
sudo make install
```


### Compile file
```sh
g++ -std=c++17 src/vers.cpp
./a.out
```