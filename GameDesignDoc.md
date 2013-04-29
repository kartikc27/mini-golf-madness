# Game Design Document

## Overview
The game is a 3-hole 2-D mini-golf game with several obstacles. The user must hit a golf ball to navigate through these obstacles and collect points along the way. These obstacles may include moving blockades, a moving golf hole, menacing gophers, water hazards, and sand bunkers. 

## The Objects
**1. Moving Blocks:** These objects are moving tiles that disrupt the movement of the golf ball if struck. These make it difficult for the user by diverting the golf ball away from the intended direction. These will be represented by specific rectangle objects of different sizes. As time progresses in later levels, these blocks will increase in size and speed to make it even more difficult.

**2. Golf Hole:** There is one golf hole per hole and in levels 2 and 3, the golf hole will move randomly in a given area. The user must make the golf ball touch the hole to complete the level. 

**3. Water Hazards:** Water hazards will exist on every hole and they do not move. If the user hits his golf ball into the water, he loses a golf ball. 

**4. Sand Traps:**  Sand traps slow down the speed of a golf ball if passed over. It is also more difficult to hit out of a sand trap if the ball is inside.

**5. Walls:** Golf balls simply bounce of walls. They prevent them from going into water hazards and do not affect the velocity of the ball. 

**6. Stars:** Stars move around the course randomly and if the ball hits a star, the user receives points. They do not affect the velocity of the ball.

![alt text](http://aucklandbushirecompany.co.nz/uploads/images/Cartoon-Star.jpg "Star")

**7. Gophers:** Gophers move around the course. If the ball touches a gopher, the user loses a ball. As time progresses in a level, more gophers will pop up (and they will move faster), making it more difficult for the user to score. The gopher will look something like the following image: 

![alt text](http://i361.photobucket.com/albums/oo52/PreschoolThemes/GroundhogCartoon.jpg "Gopher")

### Other Elements
**1. Golf Ball:** The golf ball is controlled by the user by setting the aim (a big aiming arrow will appear before every shot) and a power meter. 

![alt text](http://upload.wikimedia.org/wikipedia/commons/thumb/4/47/Golf_ball.svg/50px-Golf_ball.svg.png "Golf Ball")

**2. Timer** The player has 60 seconds to complete each hole. A timer will be displayed at the top.

**3. Golf Balls** The player starts with 5 golf balls. If he loses all 5, he loses the game. The balls are displayed at the top right.

**4. Scorecard** A hole-by-hole and total display of the score is on the right hand side. This includes the number of strokes as well as the points accumulated. 

**5. Start Button** Starts the game

**6. Cheat Button** Allows the user to skip through levels

**7. Quit Button** Closes the game

## Gameplay
The user's objective is to complete each hole, accumulating as many points as possible, while minimizing his or her strokes and time used. Each stroke begins with the player setting his or her aim and power. Aim is set using the right and left arrow keys, and power is set using the up and down arrow keys. After this, the user must hit the space bar to execute the shot. The golf ball will then travel the golf course based on the power/aim and settle in a location. The arrow for aim will always be displayed in front of the golf ball at the beginning of each stroke. The user will continue to play until his golf ball touches the hole. There are 3 holes to navigate.

## Scoring
Scoring is based on 3 things: 1) The number of strokes 2) The time to complete the hole and 3) Stars collected along the way. The first hole is a par 3, the second is a par 4, and the final hole is a par 5. 500 points are rewarded for each stroke the user finishes under par and 500 points are subtracted for each stroke the user finishes over par. The user also has 60 seconds to complete the hole. If he finishes in the first 15 seconds, 500 points are awarded. 250 points are deducted after every 15 second interval that passes. If the user cannot finish the hole in 60 seconds, 1000 points are subtracted and the user moves on to the next hole. Along the way, the user may hit stars which are worth 1000 points each.

A player also has 5 golf balls to complete the game. Each time he or she hits a gopher or into a water hazard, a golf ball is lost. If the user loses all of his or her golf balls, he or she will have to start from the beginning. 

## Game Layout
![ttrojan](images/Scan 3.png "Layout")
