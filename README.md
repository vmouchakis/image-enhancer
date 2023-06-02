# image-enhancer


### Create and activate virtual environment
```sh
virtualenv venv
source venv/bin/activate
pip install numpy
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
cmake -DOPENCV_EXTRA_MODULES_PATH=/Users/vasilis/projects/opencv_contrib/modules \
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