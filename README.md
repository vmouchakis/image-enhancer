# image-enhancer


### Create and activate virtual environment
virtualenv venv
source venv/bin/activate
pip install numpy

### Clone repos for opencv and opencv_extra_modules
git clone https://github.com/opencv/opencv.git
git clone https://github.com/opencv/opencv_contrib.git

### Build and install opencv
cd opencv
mkdir build && cd build


cmake -DOPENCV_EXTRA_MODULES_PATH=/Users/vasilis/projects/opencv_contrib/modules \
-D BUILD_opencv_python2=OFF \
-D BUILD_ZLIB=OFF \
-D BUILD_opencv_legacy=OFF \
-D BUILD_EXAMPLES=ON \
..

make -j4

sudo make install