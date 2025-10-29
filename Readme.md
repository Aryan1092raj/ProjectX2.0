# First, I started from the Arduino basics lecture  
- I learnt different Arduino syntax like `pinMode`, `digitalWrite`, `analogRead`, etc.  
- I also learnt about data types, comparison, and logical operators.  
- I practiced loops, switch-case statements, and wrote a basic code to blink an LED.  

# Then,  
- I started learning algorithms for maze solving — beginning with Dijkstra’s, then flood fill, and left/right wall-following algorithms.  
- I’ve understood how these algorithms work, but I still struggle to figure out how to actually apply them, especially Dijkstra and flood fill.  

# Although I’ve attached the program file for Dijkstra, the code in it is the one I wrote while following a tutorial.  

# After that,  
- I learnt about PCB basics and PID controllers, but I haven’t yet applied PID logic in my Line Following Bot code since I don’t fully understand it yet.  
- I also studied BFS and DFS traversal techniques — how they’re used to traverse a map.  
  - BFS explores all neighbors first, while DFS goes deep in a single direction before backtracking.  

# While writing the code, I figured out that in `if-elif` statements, I should check for a straight path first, then for sharp left/right, and finally for slight turns.  
For e.g., if straight, slight left, and slight right sensors all give `1` as input, that clearly means we should move straight — so checking that condition first makes sense.
