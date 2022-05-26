

#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>

int main() {
    auto capture = cv::VideoCapture(0);
    if (!capture.isOpened()) {
        std::cerr << "Error opening webcam" << std::endl;
        return false;
    }
    cv::Mat image;

    cv::namedWindow("Original Image window", cv::WINDOW_NORMAL); // Create a window for display.
    cv::resizeWindow("Original Image window", 640, 480);
    cv::moveWindow("Original Image window", 700, 60);

    while (true) {

        capture >> image;
        cv::imshow("Original Image window", image);
        auto key = cv::waitKey(1);

        if (key == 27) break;
    }
}
