# T4INF1004.2-Programmieren-2-Uebungsprojekt

This repository includes all the C++ code and documentation for the practice projet of my module "T4INF1004.2 Programmieren 2".  Don't take anything here as production ready, but feel free to reach out ;)

## UML-Diagramm

```mermaid
---
    config:
        class:
            hideEmptyMembersBox: true
---
classDiagram
	%% Classes
    class Game {
        + playField : char[][]
        + player1 : Player
        + player2 : Player
        + status : GameStatus
        + initialize() void
        + run() void
        + finish() void
        - hasPlayerWon(player : Player) boolean
    }
    class GameStatus {
        <<enumeration>>
        IDLE
        INITIALIZED
        RUNNING
        FINISHED
    }
    class Player {
        <<interface>>
        + symbol : char
        + name: string
        + won : boolean
        + makeTurn(playField : char[][]) Turn
    }
    class HumanPlayer
    class HoriBot
    class VertBot
    class RandBot
    class SmartBot
    class Pos {
        + x : int
        + y : int
    }
    class Turn {
        + pos: Pos
        + symbol: char
    }
    class Menu {
        + getPlayer() Player
        + showPlayField(playField : char[][]) void
        + getPos() Pos
        + showResult(playField : char[][], player1 : Player, player2 : Player)
    }
    %% Relationships
    HumanPlayer --|> Player
    HoriBot  --|> Player
    VertBot --|> Player
    RandBot --|> Player
    SmartBot --|> Player
    Turn --> Pos
    Menu --> Pos
    Player --> Turn
    HumanPlayer --> Menu
    Game --> Menu
    Game --> GameStatus
    Game --> Player
    Menu --> Player
```
