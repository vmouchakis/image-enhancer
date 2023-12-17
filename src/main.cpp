#include <iostream>
#include <opencv2/opencv.hpp>


int main() {
    // Read image
    cv::Mat image = cv::imread("images/ad.jpg");

    // Check if the image was successfully loaded
    if (image.empty()) {
        std::cerr << "Error: Could not open or find the image." << std::endl;
        return 1; // Return an error code
    }

    // Display the image
    cv::imshow("Image", image);
    cv::waitKey(0);

    return 0;
}