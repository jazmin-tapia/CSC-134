# M5LAB1 Choose Your Own Adventure Plan

## Story

You are being chased by Minecraft zombies toward a spooky cave. Herobrine may be hiding inside.

## Main Menu

### 1. Fight the zombies with the diamond sword

Continue to the **front door** story branch.

### 2. Run into the spooky cave

Create a function for this choice and decide the next available actions.

### 3. Place TNT everywhere

Create a function for this choice.

Use flint and steel to set off the TNT and call it a day.

### 4. Quit

Display the quitting message and return to `main()`.

## Front Door

The player tries the front door, but it is locked.

- Choose **1: Check around back** to enter the back door branch.
- Choose **2: Give up and go home** to enter the go-home branch.

## Back Door

Create the back door outcome.

- One choice can lead to **WIN**.
- One choice can lead to **go home**.

## Go Home

Create a function for this outcome.

The player gives up and returns home.

## Win

Create a function for the winning ending and display a success message.

## Function Plan

- `main_menu()`
  - Accept choices 1 through 4.
  - Handle invalid input.
  - Call the selected function.
- `choice_front_door()`
  - Ask whether to check around back or go home.
  - Call `choice_back_door()` or `choice_go_home()`.
- `choice_back_door()`
  - Add choices for the back-door outcome.
  - Reach either the win function or go-home function.
- `choice_go_home()`
  - Display the player returning home.
- New cave, TNT, and ending functions should be added as prototypes before `main()` and defined below it.
-------------------------

first thingy - You teleported as Steve in Minecraft. You are being chased into a dark cave, and you are worried that Herobrine is hiding inside to ambush you. Do you:
- front door ~~ Take the risk, head right into the cave to possibly find shelter from the zombies chasing you.
- check back (back) ~~ Fearlessly fight the zombies off with your trusty diamond sword.  


front door - You chose to run into the cave to find shelter from the zombies on your trail.
Herobrine is in the cave, waiting to get you! You must retreat from the cave at once!
Do you:
- back door ~~ Fearlessly fight the zombies off with your trusty diamond sword.  
- go home ~~ Use TNT and flint and steel to get rid of the zombies and Herobrine.


back door - You chose to use your trusty diamond sword to fight off the zombies, away from the spooky cave.
They're overpowering you, there's too many zombies! 
Do you:
-almost WIN ~~ Quickly tame an army of 100 wolves with bones so they can fight the zombies for you.
- go home ~~ Use TNT and flint and steel to get rid of all of the zombies.


almost WIN - You chose to tame an army of 100 wolves to fight off those pesky zombies for you.
The wolves fight off most of the zombies, but there are a few remaining zombies left that are coming for you!
Do you:
- win ~~ Finish the zombies off with your trusty diamond sword.
- go home ~~ Use TNT and flint and steel to get rid of all of the zombies.


go home ~~ You chose to use TNT and flint and steel to get rid of all of the zombies.
You accidentally blew yourself up because you were right next to the TNT...
You LOST!
Would you like to respawn?

WIN ~~ You chose to finish the zombies off with your favorite diamond sword.
You successfully got rid of the zombies that were chasing you!!
You run away safely far far away from the cave that Herobrine was living in, and go on to live a cozy safe minecraft life.
You WON!






You are being chased by Minecraft zombies toward a spooky cave. Herobrine may be hiding inside.

You teleported as Steve in Minecraft. You are being chased into a dark cave, and you are worried that Herobrine is hiding inside to ambush you. Do you:






front door--- Take the risk, head right into the cave to possibly find shelter from the zombies chasing you.
back door--- Fearlessly fight the zombies off with your trusty dimaond sword.  

go home--- Use TNT and flint and steel to get rid of the zombies and Herobrine.
almost win--- Quickly tame an army of 100 wolves with bones so they can fight the zombies for you.
win --- Finish them off with your trusty diamond sword.



front door -  go to cave
back door- diamond sword
go home - TNT
almost win- tame wolves
WIN - attack (with your army of wolves)
