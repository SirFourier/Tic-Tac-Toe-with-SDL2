# Tic-Tac-Toe-with-SDL2 in C++
![Screenshot2](Resources/Screenshot2.png?raw=true)

## Requirements
- Microsoft Visual Studio
- SDL2 (already included in Dependencies folder)

## How to build and run
- Open Microsoft Visual Studio
- Click "Clone a repository"
- Copy and paste respository link
- Hit F5 to build and run (in either Debug or Release)
- If you want to run from the generated executable, make sure the dll files and resource folder are in the same directory as the executable.

## Framework diagram
Key: 
  - Arrow = inheritance
  - Line = composition
  
![Framework](Resources/Framework.png?raw=true)

- All cells act as buttons since they must be clicked by the mouse
- Grid colour changes depending whos turn it is (blue = cross, red = circle)
- Winning row, col, or diagonal of 3 will be highlighted in that players corresponding colour

![Screenshot1](Resources/Screenshot1.png?raw=true)
