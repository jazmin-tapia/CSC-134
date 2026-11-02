# M5LAB1 Choose Your Own Adventure Plan

## Story

Steve is being chased by Minecraft zombies toward a dark cave. Herobrine may be hiding inside, so Steve must choose whether to enter the cave, fight the zombies, or use TNT.

## Main Menu

1. Enter the cave.
2. Fight the zombies with a diamond sword.
3. Use TNT and flint and steel.
4. Quit the game.

Any input other than choices 1 through 4 displays an error and returns to the main menu.

## Story Branches

### Enter the Cave

Herobrine appears inside the cave, and Steve must retreat:

- Choose the diamond sword to fight the zombies.
- Choose TNT to trigger the losing ending.

### Fight with the Diamond Sword

The zombies are overpowering Steve:

- Tame an army of 100 wolves.
- Use TNT to trigger the losing ending.

### Tame the Wolves

The wolves defeat most of the zombies, but a few remain:

- Finish the zombies with the diamond sword to win.
- Use TNT to trigger the losing ending.

### Use TNT

Steve accidentally blows himself up because he is standing too close to the TNT.

- The game displays the losing ending.
- The player can choose to respawn through either response option.
- Either response returns to the main menu.

### Winning Ending

Steve defeats the remaining zombies with his diamond sword and escapes safely.

- Display the winning message.
- Return control to `main()`.

## Function Plan

| Function | Purpose | Calls |
| --- | --- | --- |
| `main_menu()` | Display the introduction and main choices | `choice_gotocave()`, `choice_diamondsword()`, `choice_TNT()` |
| `choice_gotocave()` | Handle the cave branch | `choice_diamondsword()`, `choice_TNT()` |
| `choice_diamondsword()` | Handle the diamond-sword branch | `choice_tamewolves()`, `choice_TNT()` |
| `choice_tamewolves()` | Handle the wolf army branch | `choice_finishwsword()`, `choice_TNT()` |
| `choice_TNT()` | Display the losing ending and respawn options | `main_menu()` |
| `choice_finishwsword()` | Display the winning ending | None |

All function prototypes appear above `main()`, and all function definitions appear below `main()`.
