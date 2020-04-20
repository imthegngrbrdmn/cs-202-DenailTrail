#include "Images.h"

using namespace cv;

//Loads image of bear attack.
void BearImg()
{
    std::string image_path = samples::findFile("grizzly.jpg");
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

//Loads image of wolf attack.
void WolfImg()
{
    std::string image_path = samples::findFile("wolf.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Wolf attack!", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(5000);
    destroyWindow("Wolf attack!");
}

//Loads image of poison event.
void PoisonImg()
{
    std::string image_path = samples::findFile("poison.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Poison!", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(5000);
    destroyWindow("Poison!");
}

//Loads image of shelter event.
void PersonImg()
{
    std::string image_path = samples::findFile("person.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Person!", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(5000);
    destroyWindow("Person!");
}

//Loads image of shelter event.
void ShelterImg()
{
    std::string image_path = samples::findFile("shelter.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Shelter!", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(5000);
    destroyWindow("Shelter!");
}


//Loads image of shelter event.
void IllnessImg()
{
    std::string image_path = samples::findFile("ill.jpg");
    Mat img = imread(image_path, IMREAD_COLOR);
    if (img.empty())
    {
        std::cout << "Could not read the image: " << image_path << std::endl;
    }
    imshow("Ill!", img);

    //Wait for a keystroke in the window then closes the window.
    int k = waitKey(5000);
    destroyWindow("Ill!");
}

