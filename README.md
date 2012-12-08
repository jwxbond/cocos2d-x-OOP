cocos2d-x-OOP
=============

Basic OOP construct I want to use in cocos2d-x to allow for more of an MVC style.

This project includes only what is necessary between two projects (Eclipse vs. Xcode) - that is to say, the C++ source and the Android.mk makefile.

Also note that there is a modification to the cocos2d-x library that is required for this code to run. It allows for any CCLayer object to have a parent of any CCNode passed into it during its creation. I will have the updated classes uploaded soon as gists that you can overwrite your cocos2d-x library files with (if you are using Xcode, you will need to rerun the template creation script when you do so).