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
front door
- back door
- go home

back door
-almost WIN (new)
- go home 

almost WIN (new)
- win
- go home

go home 

WIN

front door - sword
back door- go into cave
go home - TNT
almost win- tame wolves
WIN - attack (with your army of wolves)
