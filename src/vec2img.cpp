/* #include <iostream>
#include <vector>
//#include <opencv2/opencv.hpp>

void saveImage(const std::vector<std::vector<int>>& image, const std::string& filename) {
    int rows = image.size();
    int cols = image[0].size();

    // Convert the 2D vector to an OpenCV Mat
    cv::Mat imgMat(rows, cols, CV_8UC1);
    for (int y = 0; y < rows; ++y) {
        for (int x = 0; x < cols; ++x) {
            imgMat.at<uchar>(y, x) = static_cast<uchar>(image[y][x]);
        }
    }

    // Save the image to a file
    cv::imwrite(filename, imgMat);
}

int main() {
    // Example two-dimensional vector representing a grayscale image
    std::vector<std::vector<int>> image = {
        {10, 20, 30, 40, 50},
        {60, 70, 80, 90, 100},
        {110, 120, 130, 140, 150},
        {160, 170, 180, 190, 200},
        {210, 220, 230, 240, 250}
    };

    // Save the image as a file
    saveImage(image, "grayscale_image.png");

    return 0;
}
 */


#include <iostream>

int main() {
    std::cout << "Hello world\n";
    return 0;
}