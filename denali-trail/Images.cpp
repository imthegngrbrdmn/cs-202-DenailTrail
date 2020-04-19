#include "Images.h"

using namespace cv;

void BearImg()
{
    std::string image_path = samples::findFile("feets.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Bear attack!", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(5000); 
    destroyWindow("Bear attack!");
}