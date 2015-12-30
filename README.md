# SFML Tilemap Sprite Array
This file is the "readme" of my project. The source files should be pretty straightforward, so if you do not feel like reading all of this, just go ahead and try to implement stuff on your own!
Have fun!

# Introduction
Good day everybody!

Welcome to this project of mine. First of all, who am I?
My (nick)name is Taharrie and I am 17 years old. Currently I am learning SFML and C++. The reason I do this is because I am planning to go to college. International Game Architecture an Design is the study path I would like to choose.
In order to have any change of getting through the selection, I have to have a solid understanding of C++. Also, I have to be able to make a game from scratch (with the help of a library).
My library of choice is SFML. I am just starting out and a great way to learn is just trying to get something working, one way or another.

The code I am posting on my GitHub account may be inefficient, but that is just part of the learning experience.

Maybe my code can be of any help when trying to tackle a certain problem. If you use my code, or use it as a base for your project, please share the (download) link to the project with me.
I would really like to see what other people create!

# Overview
There are a lot of ways to draw a tilemap for a game. I use SFML and thus there are two promary ways to create them. The fastest and (probably) one of the best ways is the use of vertex arrays. Those are a bit hard to master, so I decided to use a tile sprite and an intrect.
Basically, every tile consists of multiple tiles, but with the correct use of an intrect, we only display a certain part of the texture. This will create the feeling that only one tile is create, but in fact, just another part of the same texture is shown.
If you are able to use vertex arrays, please use those instead of sprites! They are much faster when creating a bigger project.

# Instrucions
Take a look at the source code for the instrucions. It is really easy!
