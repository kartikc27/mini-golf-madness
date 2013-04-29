# Game Design Document

## Overview
The game is a 3-hole 2-D mini-golf game with several obstacles. The user must hit a golf ball to navigate through these obstacles and collect points along the way. These obstacles may include moving blockades, a moving golf hole, menacing gophers, water hazards, and sand bunkers. 

## The Objects
**1. Moving Blocks:** These objects are moving tiles that disrupt the movement of the golf ball if struck. These make it difficult for the user by diverting the golf ball away from the intended direction. These will be represented by specific rectangle objects of different sizes. As time progresses in later levels, these blocks will increase in size and speed to make it even more difficult.

**2. Golf Hole:** There is one golf hole per hole and in each level the golf hole will move randomly in a given area. The user must make the golf ball touch the hole to complete the level. 

**3. Water Hazards:** Water hazards will exist on every hole and they do not move. If the user hits his golf ball into the water, he loses a golf ball. 

**4. Barges: ** A Barge will exist only on level 3 to transport the ball across the water. 

**5. Stars:** Stars move around the course randomly and if the ball hits a star, the user receives points. They do not affect the velocity of the ball.

![alt text](http://aucklandbushirecompany.co.nz/uploads/images/Cartoon-Star.jpg "Star")

**6. Gophers:** Gophers move around the course. If the ball touches a gopher, the user loses a ball. As time progresses in a level, more gophers will pop up (and they will move faster), making it more difficult for the user to score. The gopher will look something like the following image: 

![alt text](http://i361.photobucket.com/albums/oo52/PreschoolThemes/GroundhogCartoon.jpg "Gopher")

**7. Course:** The course is a non moving object that represents the layout of each hole. 

### Other Elements
**1. Golf Ball:** The golf ball is controlled by the user by setting the aim (a big aiming arrow will appear before every shot) and a power meter. 

![alt text](http://upload.wikimedia.org/wikipedia/commons/thumb/4/47/Golf_ball.svg/50px-Golf_ball.svg.png "Golf Ball")

**2. Golf Balls** The player starts with 5 golf balls. If he loses all 5, he loses the game. The number of balls are displayed at the top right.

**3. Start Button** Starts the game

**4. Quit Button** Closes the game

**5. Stroke/Lives/Points Counters** These counters will be LCDNumber objects displayed on the right hand side

## Gameplay
The user's objective is to complete each hole, accumulating as many points as possible, while minimizing his or her strokes and time used. Each stroke begins with the player setting his or her aim and power. Aim is set using the right and left arrow keys, and power is set using the up and down arrow keys. After this, the user must hit the space bar to execute the shot. The golf ball will then travel the golf course based on the power/aim and settle in a location. The arrow for aim will always be displayed in front of the golf ball at the beginning of each stroke. The user will continue to play until his golf ball touches the hole. There are 3 holes to navigate.

## Scoring
Scoring is based on 2 things: 1) The number of strokes 2)  Stars collected along the way are worth 500 points each. The par for the entire course is 20. A 20 will receive 1000 points, and any stroke under will receive an additional 1000. Each stroke over equals a deduction of 250. You cannot get below a 0.

A player also has 5 golf balls to complete the game. Each time he or she hits a gopher or into a water hazard, a golf ball is lost. If the user loses all of his or her golf balls he or she will get a 0. 

## Game Layout
![ttrojan](images/Scan 3.png "Layout")
