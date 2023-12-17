#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    // Read the input image
    cv::Mat inputImage = cv::imread("images/ad.jpg");

    // Check if the image was successfully loaded
    if (inputImage.empty()) {
        std::cerr << "Error: Could not open or find the input image." << std::endl;
        return 1; // Return an error code
    }

    // Upscale factor (adjust as needed)
    int scaleFactor = 4;

    // Perform bicubic interpolation for upscaling
    cv::Mat upscaledImage;
    cv::resize(inputImage, upscaledImage, cv::Size(), scaleFactor, scaleFactor, cv::INTER_CUBIC);

    // Print image dimensions
    std::cout << "Input image dimensions: " << inputImage.cols << " x " << inputImage.rows << std::endl;
    std::cout << "Upscaled image dimensions: " << upscaledImage.cols << " x " << upscaledImage.rows << std::endl;

    // Display the original and upscaled images
    cv::imshow("Original Image", inputImage);
    cv::imshow("Upscaled Image", upscaledImage);
    cv::waitKey(0);

    // Save the upscaled image
    std::string outputImagePath = "images/upscaled.jpg";
    cv::imwrite(outputImagePath, upscaledImage);
    std::cout << "Upscaled image saved: '" << outputImagePath << std::endl;

    return 0;
}
