# cs-202-DenailTrail  

## About The Game  

### Concept  

This game was made for our CS-202 class at The **University of Alaska Fairbanks**. We  
were inspired by a game called *The Oregon Trail*, so the goal was to create our own  
version, but we were required to make it somehow Alaska themed, so we decided to make  
it about getting to the top of Denali instead of getting to the new frontier.

## Playing The Game  

In order to play *The Denali Trail*, you should clone the repository and compile the latest  
version of the code.  

### Including Libraries  

We will recommend using Visual Studio to compile the code, but right now that isn't very  
important because we only have header-only libraries, but when we actually include a GUI,
it may be easier for you to use Visual Studio 2019.  
***There will be a manual here for including libraries***.  

## Behind The Scenes  

### Inventory  

The inventory is simply a 64 bit long long. Each bit of the long long represents a different item.  
Outside the class, these are represented by `int`s from 0-63 which represent the each bit. The `Character`  
class handles these by converting them into powers of 2 and then doing binary operations with them.  
